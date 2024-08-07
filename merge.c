#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int count;

void merge(int a[2000], int left, int mid, int right){
    int i, j, k, b[2000];
    i = left;
    j = mid + 1;
    k = left;

    while((i <= mid) && (j <= right)){
        count++;
        if(a[i] < a[j]){
            b[k++] = a[i++];
        }else{
            b[k++] = a[j++];
        }
    }
    while(i <= mid){
        b[k++] = a[i++];
    }
    while(j <= right){
        b[k++] = a[j++];
    }
    for(i = left; i <= right; i++){
        a[i] = b[i];
    }
}

void mergesort(int a[2000], int left, int right){
    int mid;
    if(left < right){
        mid = (left + right)/2;
        mergesort(a, left, mid);
        mergesort(a, mid+1, right);
        merge(a, left, mid, right);
    }
}
int main()
{
    int i, a[2000], n;
    printf("enter no of elements");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
       a[i]= rand();
    mergesort(a, 0, n-1);
    printf("\nSorted elements are\n");
    for(i = 0; i <= n-1; i++)
        printf("%d\t",a[i]);
    printf("\nCount = %d",count);
    return 0;
}
