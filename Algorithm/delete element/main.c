#include <stdio.h>
void delete(int arr[],int n,int index)
{
    if(index<0 || index > n)
    {
        printf("error,invalid index \n");
    }
    else
    {
     for(int i=index-1;i<n-1;i++)
         arr[i]=arr[i+1];
    }
    n--;
    printf("array after deleting element");
    for(int i=0;i<n;i++)
        printf(" %d ",arr[i]);
}
int main() {
    int x;
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("enter position of element you want to delete ");
    scanf("%d",&x);
    delete(arr,n,x);

    return 0;
}
