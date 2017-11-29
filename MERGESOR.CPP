#include<stdio.h>
#include<conio.h>
void merge_sort(int *, int, int);
void merge(int *, int, int, int);

void main()
{
  int a[] = { 5, 2, 7, 1, 0, 10, 99, 45, 10, 37 };
  clrscr();
  printf("before sort\n");
  for (int i=0; i<10;i++)
  {
	printf("%d ", a[i]);
  }
  printf("\nsorted\n");
  merge_sort(a, 0, 9);
  for (i=0; i<10;i++)
  {
	printf("%d ", a[i]);
  }
  getch();
}

void merge_sort(int *a, int start, int end)
{
  int mid;
  if (start < end)
  {
	mid=(start+end)/2;
	merge_sort(a,start,mid);
	merge_sort(a,mid+1, end);
	merge(a, start, mid, end);
	printf("%d-%d-%d==",start, mid,end);
	for (int i=0;i<end;i++)
		printf("%d=", *(a+i));
	printf("\n");
  }
}

void merge(int *a, int start, int mid, int end)
{
	int i=start, j=mid+1, index = start, temp[10], k;
	while(i<=mid && j<=end)
	{
	   if (*(a+i)<*(a+j))
	   {
			temp[index] = *(a+i);
			i++;
	   }
	   else
	   {
			temp[index] = *(a+j);
			j++;
	   }
	   index++;
	}

	if (i>mid)
	{
		while(j<=end)
		{
			temp[index] = *(a+j);
			j++;
			index++;
		}
	}
	else{
		while(i<=mid)
		{
			temp[index] = *(a+i);
			i++;
			index++;
		}
	}

	for(k=start;k<index;k++)
	{
		*(a+k) = temp[k];
	}
}