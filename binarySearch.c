#include <stdio.h>

int binarySearch(int arr[], int size, int target){
    int left = 0, right =  size - 1;
    while (left <= right){
        int mid = (left + right) / 2;
        if (target == arr[mid]) {
            return mid;
        }
        else if (target < arr[mid]){
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,3,5,6,7,8,9,11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr,size,target);

    if (result != 1){
        printf("Number found at index %d\n", result);
    }
    else{
        printf("Number not found");
    }
}