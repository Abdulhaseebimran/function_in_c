#include <stdio.h>
void sort();
void main()
	{
	sort();
}

void sort()
	{
	int arr[7]={5,3,2,9,4,0};
	int i,j,k=0;
	int a= sizeof(arr)/sizeof(arr[0]);
	printf("Elements of array: \n");
	for (i = 0;i<a;i++)
		{
		printf("%d ", arr[i]);
		// getch();
        // return 0;
		}
	for (i=0;i<a;i++)
		{
		for (j=i+1;j<a;j++)
			{
			if(arr[i] > arr[j])
				{
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
				}
		}
	}

	printf("\n");
	printf("Elements of array sorted in ascending order: \n");
	for ( i = 0; i < a; i++)
		{
		printf("%d ", arr[i]);
		}
	}
