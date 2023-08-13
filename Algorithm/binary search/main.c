#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int iterativeBinarySearch(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(x==arr[mid])
            return mid;

        else if(x<arr[mid])
            high=mid-1;
        else
            low=mid+1;

    }
    return -1;
}
int recursiveBinarySearch(int arr[],int low,int high,int x)
{     int mid=low+(high-low)/2;
    if(low>high)
        return -1;

       else  if(x==arr[mid])
        return mid;

        else if(x<arr[mid])
        recursiveBinarySearch(arr,low,mid-1,x);
        else
        recursiveBinarySearch(arr,mid+1,high,x);

}


int main() {
    int arr[]={0,1,2,5,9,16,34};
    int x;
    printf("enter any element to chick\n");
    scanf("%d",&x);
    int test= recursiveBinarySearch(arr,0, sizeof(arr)/sizeof(int),x);
    if(test==-1)
        printf("number %d not found \n",x);
    else
        printf("number %d is found at index %d \n",x,test);

    return 0;
}
