#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int count;
void bubblesort(int A[],int n)
{
 int i,j,temp;
 for(i=0;i<=n-2;i++)
 {
     for(j=0;j<=n-2-i;j++)
     {
         count++;
         if(A[j]>A[j+1])
         {
             temp=A[j];
             A[j]=A[j+1];
             A[j+1]=temp;
         }
     }
 }

}
int main()
{
    int i,A[SIZE],n;
    printf("\n READ ARRAY SIZE");
    scanf("%d",&n);
    printf("\n The elements are");
    for(i=0;i<=n-1;i++)
        scanf("%d",&A[i]);
    bubblesort(A,n);
    printf("\n Sorted elements are\n");
    for(i=0;i<=n-1;i++)
        printf("%d\t",A[i]);
    printf("\nCount=%d",count);
    return 0;
}
