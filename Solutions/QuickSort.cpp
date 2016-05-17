#include <iostream>
//#include <cstdio>
using namespace std;


int partition(int arr[],int p, int r);
void exchange(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void quicksort(int arr[],int p, int r)
{
    if(p<r){
    int q=partition(arr,p,r);
    quicksort(arr,p,q-1);
    quicksort(arr,q+1,r);
    }
}
int partition(int arr[],int p, int r)
{
    int x,i,j;
    x=arr[r];
    i=p-1;
    for(j=p;j<r;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            exchange(&arr[i],&arr[j]);;
        }
    }
    exchange(&arr[i+1],&arr[r]);
    return i+1;

}
int main()
{
    int i,n;
    cout<<"Enter number of elements : ";
    cin>>n;
    //int arr=new int[n];
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"\nSorted array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    //delete arr;
    return 0;
}
