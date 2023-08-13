#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
/*void SelectionSort(int arr[],int n)
{

    for(int i=0;i<n-1;i++)
    { int Imin=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[Imin])
                Imin=j;
        }
        int temp=arr[i];
        arr[i]=arr[Imin];
        arr[Imin]=temp;
    }
}*/
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    { int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]) {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if(flag==0)
            break;
    }
}
int main() {
    int arr[]={1,9,-2,7,5,2};
    int n= sizeof(arr)/ sizeof(int);
    BubbleSort(arr, n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
