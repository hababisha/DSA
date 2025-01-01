// C program for insertion sort
//#include <math.h>
#include <stdio.h>


void insertionSort(int arr[], int n)
{
	int i,j, temp;
	for (i = 1; i < n; i++) 
	{
		j = i;		
		while (j > 0 && arr[j] < arr[j-1]) 
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}		
	}
}

// A utility function to print 
// an array of size n
void printArray(int arr[], int n)
{
	int i;
	printf("\n\nSorted Array\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver code
int main()
{
	int arr[] = {12, 11, 13, 5, 6};
	int n = 5;sizeof(arr) / sizeof(arr[0]);
	printf("Unsorted array: \n");
	for(int k=0; k<n;k++)
	{
		printf("%d ",arr[k]);
	}

	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
