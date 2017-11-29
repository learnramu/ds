#include<stdio.h>
#include<conio.h>
void swap(int *, int, int);
void selectionsort(int *, int);
void insertionsort(int *, int);
void bubblesort(int *,int);
void quicksort(int *, int, int);
void main()
{
	int a[] = { 50, 25, 73, 21, 3};
	clrscr();
	printf("Before values\n");
	for( int i=0; i<5;i++)
	{
	  printf("%d ", *(a+i));
	}

	//selectionsort(a, 5);
	//insertionsort(a,5);
	//bubblesort(a,5);
	quicksort(a, 0,4);
	printf("\nAfter sorting\n");
	for(i=0; i<5;i++)
	{
	  printf("%d ", *(a+i));
	}
	getch();
}

int partition(int *a, int low, int high)
{
	int pivot = *(a+high);
	int i = low-1;
	for (int j=low; j<=high;j++)
	{
	 if (*(a+j) <= pivot)
	 {
	 }
	}
	return i;
}

void quicksort(int *a, int low, int high)
{
	if (low <high)
	{
	  int index = parition(a, low, high);
	  quicksort(a, low, index-1);
	  quicksort(a, index+1, high);
	}
}



void selectionsort(int *a, int length)
{
   int minIndex = -1;
   for (int i=0;i<length;i++)
   {
	 minIndex = i;
	 for(int j=i+1; j<length; j++)
	 {
	   if (*(a+j) < *(a+minIndex))
	   {
		 minIndex = j;
	   }
	 }
	 swap(a, minIndex, i);
   }
}

void insertionsort(int *a, int length)
{
   for (int i= 1; i<length; i++)
   {
	 int value = a[i];
	 int j = i -1;
	 while (j>=0 && a[j] > value)
	 {
	   a[j+1] = a[j];
	   j = j-1;
	 }
	 a[j+1] = value;
   }
}

void bubblesort(int *a, int length)
{
   int swapped = 0;
   for (int i=0; i<length-1; i++)
   {
	  swapped = 0;
	  for (int j=length-1; j>i; j--)
	  {
		if (*(a+j) < *(a+(j-1)))
		{
		  swap(a, j, j-1);
		  swapped = 1;
		}
	  }

	  if (swapped == 0)
	  {
		break;
	  }
	}
}

void swap(int *a, int index1, int index2)
{
	int t=*(a+index1);
	*(a+index1) = *(a+index2);
	*(a+index2) = t;
}


