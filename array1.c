#include<stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int a[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=*(a+i);
    }
    printf("Sum Of Array Element = %d",sum);


}
