#include "Functions.h"
#include <vector>

using namespace std;

void shellSort(vector<int>& arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void mergeSort(vector<int>& array) {
    vector<int> result = array;
    mergesort(array, result, 0, array.size() - 1);
}
void mergesort(vector<int>& array, vector<int>& result, int
    lowerBand, int upperBand) {
    int midpoint;
    if (lowerBand < upperBand) {
        midpoint = (lowerBand + upperBand) / 2;
        mergesort(array, result, lowerBand, midpoint);
        mergesort(array, result, midpoint + 1, upperBand);
        merge(array, result, lowerBand, midpoint + 1, upperBand);
    }
}


void merge(std::vector<int>& array, std::vector<int>& result, int lowPointer, int highPointer, int upperBound) {
    int j = 0;
    int lowerBound = lowPointer;
    int mid = highPointer - 1;
    int n = upperBound - lowerBound + 1; //number of items

    while (lowPointer <= mid && highPointer <= upperBound) {
        if (array[lowPointer] < array[highPointer])
            result[j++] = array[lowPointer++];
        else
            result[j++] = array[highPointer++];
    }

    while (lowPointer <= mid)
        result[j++] = array[lowPointer++];
    while (highPointer <= upperBound)
        result[j++] = array[highPointer++];
    for (j = 0; j < n; j++)
        array[lowerBound + j] = result[j];
}

void swap(int arr[], int pos1, int pos2) {
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[low];
        int pos = partition(arr, low, high, pivot);
        quickSort(arr, low, pos - 1);
        quickSort(arr, pos + 1, high);
    }
}
int partition(int arr[], int low, int high, int pivot) {
    int i = low;
    int j = low;
    while (i <= high) {
        if (arr[i] > pivot) {
            i++;
        }
        else {
            swap(arr, i, j);
            i++;
            j++;
        }
    }
    return j - 1;
}












































161 / 170


94 %




























162 / 170


94 %





