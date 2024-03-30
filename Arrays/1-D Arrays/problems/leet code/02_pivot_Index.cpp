using namespace std;
#include<iostream>
#include<vector>

void bruteForce(vector<int> &arr,int n)
{
     
    for(int i=0;i<n;i++)
    {
        int lsum=0;
        int rsum=0;
        for(int j=0;j<i;j++)
        {
            lsum=lsum+arr[j];
        }
        for(int j=i+1;j<n;j++)
        {
            rsum=rsum+arr[j];
        }
        if(lsum==rsum)
            cout<<i;
        
    }
}
void betterApprach(vector<int>& arr,int n)
{
    vector<int> lsum(n,0);
    vector<int> rsum(n,0);

    for(int i=1;i<n;++i)
    {
        lsum[i]=arr[i-1]+lsum[i-1];
    }
    for(int i=n-2;i>=0;--i)
    {
        rsum[i]=arr[i-1]+rsum[i-1];
    }
    for(int i=0;i<n;i++)
    {
        if(lsum[i]==rsum[i])
        {
            cout<<i;
        }
    }
}
int main()
{
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // bruteForce(arr,n);
    // 1,7,3,6,5,6
    betterApprach(arr,n);
}