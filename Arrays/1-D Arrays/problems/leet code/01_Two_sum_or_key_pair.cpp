using namespace std;
#include<iostream>
#include<vector>
// #include <bits/stdc++.h>
bool bruteforce(vector<int>&arr,int target)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==target)
            {
                return true;
            }
        }
    }
    return false;
}
void sorting(vector<int>&arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<arr.size();j++)
        {

        
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    // for(int i=0;i<arr.size();i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}
bool betterApproach(vector<int> &arr,int target,int n)
{
    
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int csum=arr[i]+arr[j];
        if(csum==target)
         {
            return true;
         }   
        else if(csum<target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}
int main()
{
int n;
cin>>n;
int target=16;
vector<int> arr(n);
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}

sorting(arr,n);
cout<<betterApproach(arr,target,n);
}