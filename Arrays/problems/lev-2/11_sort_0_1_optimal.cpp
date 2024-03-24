using namespace std;
#include<vector>
#include<iostream>
int optimal(vector<int> &arr,int n)
{
    int i=0;
    int j=arr.size()-1;
    while(i<j)
    {
        while(arr[i]==0)
        {
            i++;
        }
        while(arr[j]==1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k];
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
optimal(arr,n);
}