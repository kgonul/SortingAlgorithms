#include <iostream>
void swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int partition(int array[], int low, int high) {
    int i = low-1;
    int pivot = array[high];
    for(int j=low; j<high; j++) {
        if (array[j]<=pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[high]);
    return i+1;
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

void printArray(int array[], int size) {
    for(int i=0;i<size;i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    int array [] = {1,2,3,4,5,6,7,8};
    quickSort(array, sizeof(array)/sizeof(array[0]));
    printArray(array, sizeof(array)/sizeof(array[0]));
    return 0;
}
