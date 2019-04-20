#include <iostream>
void swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void printArray(int array[], int low, int high) {
    for(int i=low;i<high;i++) {
        printf("%d ", array[i]);
    }
}

int partition(int array[], int low, int high) {
    int pivot = array[low];
    int j = low;
    for(int i=low+1;i<=high;i++) {
        if (array[i]<=pivot) {
            j++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[j], &array[low]);
    printf("pivot: %d and it is [%d]\n", j, array[j]);
    return j;
}

void quickSort(int array[], int low, int high) {
    if(low<high) {
        int p = partition(array, low, high);
        quickSort(array, low, p-1);
        quickSort(array, p+1, high);
    }
}

void quickSort(int array[], int size) {
    quickSort(array, 0, size-1);
}

int main() {
    int array [] = {5,3,1,9,8,2,4,7};
    quickSort(array, sizeof(array)/sizeof(array[0]));
    printArray(array, 0, sizeof(array)/sizeof(array[0]));
    return 0;
}
