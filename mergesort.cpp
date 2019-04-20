#include <iostream>

void merge(int a[], int p, int q, int r) {
    int n = r-p+1;
    int *b = (int *)malloc(sizeof(int)*n);
    int i=p, j=q+1, k=0;
    
    while(i<=q && j<=r) {
        if (a[i]<a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while(i<=q) {
        b[k] = a[i];
        i++;
        k++;
    }
    while(j<=r) {
        b[k] = a[j];
        j++;
        k++;
    }
    
    for(i=p,k=0;i<=r;i++,k++) {
        a[i] = b[k];
    }
}

void mergeSort(int array[], int p, int r) {
    if(p<r) {
        int q = (p+r)/2;
        mergeSort(array, p, q);
        mergeSort(array, q+1, r);
        merge(array,p,q,r);
    }
}

void printArray(int array[], int size) {
    for(int i=0;i<size;i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    int array[] = {1,4,2,7,3,6,9,5}; //0-7
    mergeSort(array, 0, sizeof(array)/sizeof(array[0])-1);
    printArray(array,sizeof(array)/sizeof(array[0]));
    return 0;
}
