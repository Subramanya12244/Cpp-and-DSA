using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>
void methodOne(vector<int> arr)
{
    int ans=-1;
    for(int i=0; i<arr.size(); i++)
    {
        int index=abs(arr[i]);
        if(arr[index-1]>0)
        {
            arr[index-1]*=-1;
        }
    }
    // for(int i=0; i<arr.size(); i++)
    // {
    //     cout<<arr[i]<<" "<<endl;
    // }
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]>0)
        {
            cout<<i+1<<" "<<endl;
        }
    }
}
void methodTwo(vector<int>arr)
{
    int i=0;
    while(i<arr.size())
    {
        int index=arr[i]-1;
        // in this we are going to assign index as index starts from 0
        if(arr[i]!=arr[index])
        {
            swap(arr[index],arr[i]);
        }
        else{
            i++;
        }

    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<i+1<<" "<<endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // methodOne(arr);
    methodTwo(arr);
    
}