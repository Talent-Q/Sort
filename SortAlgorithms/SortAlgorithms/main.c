#include<stdio.h>	//for printf()
#include<stdlib.h>	//for system()
#include"sort.h"	//for sort algorithms

//print the array
void printArr(int arr[], int len);

int main(void)
{
	int arr[] = { 
					99,88,77,66,55,44,33,22,11,
					11,22,33,44,55,66,77,88,99,
					0,1,2,3,4,5,6,7,8,9,
					9,8,7,6,5,4,3,2,1,0,
					-111,-222,-333,-444,-555,-999,-888,-777,-666,
					111,222,333,444,555,999,888,777,666 
				};
	int len = sizeof(arr) / sizeof(arr[0]);

	//bubbleSort(arr, len);
	selectSort(arr, len);
	printArr(arr, len);

	system("PAUSE");
	return 0;
}


void printArr(int arr[], int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
}
