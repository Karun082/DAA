#include <stdio.h>
#include <stdlib.h>

int count;
int partition(int a[2000],int low,int high)
{
    int i,j,pivot,temp;
    i = low + 1;
    j = high;
    pivot = a[low];
    while(1)
    {
        while(pivot >= a[i] && i <= high)
        {
            i++;
            count++;
        }
        while(pivot < a[j])
          {
              j--;
              count++;
          }
        count++;
        if(i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else
        {
            temp = a[j];
            a[j] = a[low];
            a[low] = temp;

            return j;
        }

    }
}
void quicksort(int a[2000],int low,int high)
{
    int i, j;
    if(low < high)
    {
        j = partition(a, low, high);
        quicksort(a, low, j-1);
        quicksort(a, j+1, high);
    }
}
int main()
{
    int i, a[2000], n;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quicksort(a, 0, n-1);
    printf("\nSorted elements are\n");
    for(i = 0; i <= n-1; i++)
        printf("%d\t",a[i]);
    printf("\nCount = %d",count);
    return 0;
}
