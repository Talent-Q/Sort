/* Sort Algotithms. Ascending Order */

//bubbleSort
void bubbleSort(int arr[], int len)
{
	int i, j, tmp;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-i-1;j++)
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
}

//selectSort
void selectSort(int arr[], int len)
{
	int i, j, min, tmp;
	for (i = 0; i < len - 1; i++)
	{
		min = i;
		for (j = i + 1; j < len; j++)
			if (arr[j] < arr[min])
				min = j;		//locate the min

		//swap
		tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}
}