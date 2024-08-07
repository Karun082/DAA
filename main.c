#include <stdio.h>
#include <stdlib.h>
int count=0;
void euclid(m,n,count)
if(n>0)
{
    while(n!=0)
    {
        count++;
        r=m%n;
        m=n;
        n=r;
    }
    return count ;
}
else{
    printf("cannot be divided");

}
int main()
{

int m,n,r,count;
printf("enter m:");
scanf("%d",&m);
printf("enter n:");
scanf("%d",&n);
}
