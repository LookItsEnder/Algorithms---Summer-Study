#include <iostream>

/*
    Quick Sort is an extremely fast sorting algorithm that relies on a divide and conquer approach.

    Quick Sort uses a Partition (Pivot) system to place the pivot closer or at its correct position by comparing the elements around it.
    
*/

int partition(int arr[], int low, int high){
    int pivot = arr[high]; // This is our pivot
    int i = (low - 1); // Index of smaller element
    for(int j = low; j <= high-1; j++){
        if(arr[j] < pivot){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i+1], arr[high]);
    return (i+1);
}


void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivot = partition(arr,low,high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}

/* Pastable main test-code
int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}
*/