//iferati22
#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    if(a<b)
        return a;
    return b;
}
int findMin(int num[10],int n)
{
    if(n==0)
        return num[0];
    return min(num[n],findMin(num,n-1));
}
void getData (int num[])
{
    for(int i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }
}
int main()
{
    int num[10];
    int n=10;
    getData(num);
    printf("%d", findMin(num,n-1));
    return 0;
}