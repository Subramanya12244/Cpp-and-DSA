using namespace std;
#include<iostream>
#include<vector>
#include <unordered_map>
int repeat(vector<int> arr)
{
    unordered_map<int,int> hash;
    for(int i = 0; i < arr.size();i++)
    {
        hash[arr[i]]++;
        // cout<<arr[i]<<" "<<hash[arr[i]]<<endl;
    }
    // for(int i =0; i <hash.size();i++)
    // {
    //     cout<<arr[i]<<" "<<hash[arr[i]]<<endl;
    // }
    for (int i = 0; i < arr.size(); i++) {
        if(hash[arr[i]]>1)
        {
             return i+1;
        }
    }
    return -1;
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
    cout<<repeat(arr);
}