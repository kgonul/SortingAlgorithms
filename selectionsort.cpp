#include <iostream>

void printArray(int array[], int size) {
    for(int i=0;i<size;i++) {
        printf("%d ", array[i]);
    }
}

void selectionSort(int array[], int size) {
    for(int i=0;i<size-1;i++) {
        int min = i;
        for(int j=i+1;j<size;j++) {
            if (array[j]<array[min]) {
                min = j;
            }
        }
        int tmp = array[i];
        array[i] = array[min];
        array[min] = tmp;
        
    }
}

int main() {
    int array[] = {6,2,5,9,0};
    int size = sizeof(array)/sizeof(array[0]);
    selectionSort(array, size);
    printArray(array, size);
    return 0;
}
