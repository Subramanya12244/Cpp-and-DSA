using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>
int bruteforce(vector<int>&arr)
{
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size();i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
}
int betterApproach(vector<int>&arr)
{
    int ans=-1;
    for(int i = 0; i < arr.size();i++)
    {
        int index=abs(arr[i]);
        // it cheaks wheather the index is already visited or not if visited then return the number
        if(arr[index]<0)
        {
            ans=index;
            break;
        }
        // mark as visited
        arr[index]*=-1;
    }
    return ans;
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
    // cout<<bruteforce(arr)<<endl;
    cout<<betterApproach(arr);
}