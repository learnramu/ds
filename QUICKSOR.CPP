#include<stdio.h>
#include<conio.h>
void quicksort(int *, int, int);
int partition(int *, int, int);
void swap(int *, int, int);
void main()
{
  int a[] = { 5, 8, 9, 2, 1, 10, 78, 99, 34, 2 };
  clrscr();
  printf("before\n");
  for(int i=0; i<10; i++)
  {
	printf("%d ", a[i]);
  }
  quicksort(a, 0, 9);
  printf("\nafter sort\n");
  for (i =0 ;i<10; i++)
	printf("%d ", a[i]);
  getch();
}

void swap(int *a, int source, int dest)
{
	int t = *(a+source);
	*(a+source) = *(a+dest);
	*(a+dest) = t;
}

void quicksort(int *a, int left, int right)
{
   if (left < right)
   {
		int j = partition(a, left, right);
		printf("\npartition=>%d \n", j);
		quicksort(a, left, j-1);
		for(int i=left; i<j-1; i++)
		{
		  printf("%d ", *(a+i));
		}
		printf("\n");
		quicksort(a, j+1, right);
		for(int i=j+1; i<right; i++)
		{
		  printf("%d ", *(a+i));
		}
   }
}

int partition(int *a, int left, int right)
{
  int pivot, i, j, t;
  pivot = a[left];
  i=left, j=right+1;
  while(1)
  {
	do {
	  ++i;
	}while(a[i]<=pivot && i<=right);
	do
	{
	 --j;
	}while(a[j]>pivot);

	if (i>=j) break;
	swap(a, i, j);
  }
  swap(a, left, j);
  return j;
}