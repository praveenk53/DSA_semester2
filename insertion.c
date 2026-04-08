#include<stdio.h>
int main()
{
    int arr[100],n,pos,element,i;
    printf("enter size: ");
    printf("%d",&n);
    printf("enter elements: \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter position:");
    scanf("%d",&pos);
    printf("enter element : ");
    scanf("%d",&element);
    for(i=n;i>pos;i--)
    arr[i] = arr[i-1];
    arr[pos -1] = element;
    n++;
    printf("updated array:\n");
    for(i=0;i<n;i++)
    printf("%d", arr[i]);
    return 0;

}