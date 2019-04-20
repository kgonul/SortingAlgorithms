#include <iostream>

void printArray(int array[], int size) {
    for(int i=0;i<size;i++) {
        printf("%d ", array[i]);
    }
}

void insertionSort(int array[], int size) {
    for(int i=1;i<size;i++) {
        int num = array[i];
        int j=i-1;
        while(j>=0 && num<array[j]) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = num;
    }
}

int main() {
    int array[] = {6,2,5,9,0};
    int size = sizeof(array)/sizeof(array[0]);
    insertionSort(array, size);
    printArray(array, size);
    return 0;
}
