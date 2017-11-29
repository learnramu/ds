#include<stdio.h>
#include<conio.h>
void swap(int *, int, int);
void wigglesort(int a[], int length)
{
   for (int i=0; i<length; i++)
   {
     int odd = i&1;
     if (odd == 1)
     {
	if (a[i-1]> a[i])
	{
	   swap(a, i-1, i);
	}
     }
     else
     {
	if(i!= 0 && a[i-1] <a[i])
	{
	  swap(a, i-1, i);
	}
     }
   }
}

   void swap(int *a, int s, int d)
   {
     int t=*(a+s);
     *(a+s) = *(a+d);
     *(a+d) = t;
   }

   void main()
   {
     //int a[] = { 3, 5, 2, 1, 6, 4};
     int a[] = {3,1,9,5,2,10};
     clrscr();
     wigglesort(a,6);
     for(int i=0;i<6;i++)
      {
       printf("%d",*(a+i));
      }
      getch();
   }