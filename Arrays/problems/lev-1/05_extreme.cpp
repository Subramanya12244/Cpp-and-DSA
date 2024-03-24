using namespace std;
#include <iostream>

void extreme(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<end)
    {
        cout<<arr[start]<<endl;
        cout<<arr[end]<<endl;
        start++;
        end--;
    }
    
}

int main()
{
    int n,m;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    extreme(arr, n);
}