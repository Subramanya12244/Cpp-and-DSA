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
int optimal_another_approach(vector<int> &arr,int n)
{
    int i=0;
    int start=0;
    int end=arr.size()-1;

    while(start<end)
    {
        if(arr[i]==0)
        {
            swap(arr[i],arr[start]);
            i++;
            start++;
        }
        if(arr[i]==1)
        {
            swap(arr[i],arr[end]);
            i++;
            end--;
            
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
// optimal(arr,n);
optimal_another_approach(arr,n);
}