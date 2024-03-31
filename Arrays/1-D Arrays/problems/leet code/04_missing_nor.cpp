using namespace std;
#include<iostream>
#include<vector>
#include <algorithm>

int bruteApproach(vector<int> &a)
{
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size();i++)
    {
        if(a[i]==i)
        {
            continue;
        }
        else
            return i;
    }
    return a.size();
}
int betterApproach(vector<int> &a)
{
    int ans=0;
    for(int i = 0; i < a.size();i++)
    {
        ans^=a[i];
    }
    for(int i = 0; i <=a.size();i++)
    {
        ans^=i;
    }
    return ans;
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
    // cout<<bruteApproach(arr);
    cout<<betterApproach(arr);
    // 3 0 1
}