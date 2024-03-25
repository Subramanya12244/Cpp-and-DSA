using namespace std;
#include <iostream>
void printing(int arr[],int size);
void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<end)
    {
        int temp=arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printing(arr,size);
}
void printing(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}
int main()
{
    int n;
    cin >>n;
    int *arr=new int[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
}