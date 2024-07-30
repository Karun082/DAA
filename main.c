#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count;
int bfsm(char t[20], char p[10])
{
    int n,m,i,j;
    n=strlen(t);
    m=strlen(p);
    for(i=0;i<=n;i++)
    {
        j=0;
        while(j<m&&p[j]==t[i+j])
        {
            j=j+1;
            count++;
        }
        count++;
        if(j==m)

         return i;
    }
    return -1;
}
int main()
{
 char t[20],p[10];
 int flag;
 printf("\nRead text:\n");
 scanf("%s",t);
 printf("\nRead Pattern:\n");
 scanf("%s",p);
 flag=bfsm(t,p);
 if(flag==-1)
 {
    printf("\n pattern not found  at\n");
   printf("\nCount=%d",count);
}
 else
 {


    printf("\n pattern found %d",flag+1);
    printf("\nCount=%d",count-1);
 }
}
