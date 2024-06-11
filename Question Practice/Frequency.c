#include <stdio.h>

int countFrequency(int arr[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 2, 3, 4, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 2; 
    int frequency = countFrequency(arr, size, element);
    printf("Frequency of %d in the array is: %d\n", element, frequency);

    return 0;
}
