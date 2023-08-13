#include <stdio.h>
void merge(int left[],int nl,int right[],int nr,int A[])
{

    int i=0,j=0,k=0;
    while(i<nl && j<nr) {
        if (left[i] < right[j]) {
            A[k] = left[i];
            i += 1;
            k += 1;
        }
        else {
            A[k] = right[j];
            j += 1;
            k += 1;
          }

    }
    while(i<nl)
    {
        A[k]=left[i];
        i+=1;
        k += 1;
    }
    while (j<nr)
    {
        A[k]=right[j];
        j+=1;
        k+=1;
    }
}

void mergeSort(int arr[],int n)
{ if(n<2)
    return  ;
    int mid=n/2;
    int nl=mid,nr=n-mid;
    int left[mid];
    int right[n-mid];
    for(int i=0;i<mid;i++)
        left[i]=arr[i];
    for(int i=mid;i<n;i++)
        right[i-mid]=arr[i];
    mergeSort(left,nl);
    mergeSort(right,nr);
    merge(left,nl,right,nr,arr);
}

int main() {
  int right[]={1,4,6,9,15};
   int left[]={2,5,8,10};
    int nl=sizeof(left) / sizeof(left[0]);
    int nr=sizeof(right) / sizeof(right[0]);
    printf("%d %d \n",nl,nr);
   int arr[9]={0};
    printf("array after sort \n");
    merge(left,nl,right,nr,arr);
    for(int i=0;i<9;i++)
        printf("%d ,",arr[i]);
    printf("\n");
    printf("________________________________________________\n");
    int Arr[]={9,5 ,20,10,-3,0};
    mergeSort(Arr,6);
    for(int i=0;i<6;i++)
        printf("%d ,",Arr[i]);

    return 0;
}
