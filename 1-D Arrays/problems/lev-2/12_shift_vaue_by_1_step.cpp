using namespace std;
#include<iostream>
#include<vector>
void shift(vector<int> &arr,int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>=1;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
shift(arr,n);
}