#include <iostream>

void printArray(int array[], int size) {
    for(int i=0;i<size;i++) {
        printf("%d ", array[i]);
    }
}

void swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void bubbleSort(int array[], int size) {
    for(int i=0;i<size;i++) {
        for(int j=size-1;j>i;j--) {
            if(array[j]<array[j-1]) {
                swap(&array[j], &array[j-1]);
            }
        }
    }
}

int main() {
    int array[] = {6,2,5,9,0};
    int size = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, size);
    printArray(array, size);
    return 0;
}
