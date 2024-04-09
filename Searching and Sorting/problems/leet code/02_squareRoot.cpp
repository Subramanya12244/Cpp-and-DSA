using namespace std;
#include<iostream>
#include<vector>

int findSqrt(int n)
{
    int target=n;
    int s=0;
    int ans=-1;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(mid*mid==target)
        {
            return mid;
        }
        if(mid*mid>target)
        {
            // search left siide
            e=mid-1;
        }
        // else if(mid*mid<target)
        else
        {
            // store and search right siide
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    double finalAns=findSqrt(n);
    double step=0.1;
    int precision;
    cout<<"enter the nor of presision you want in float";
    cin>>precision;
    for(int i=0; i<precision; i++)
    {
        for(double j=finalAns;j*j<n;j+=step)
        {
            finalAns=j;
        }
        step=step/10;
    }
    cout<<"final ans "<<finalAns<<endl;
}