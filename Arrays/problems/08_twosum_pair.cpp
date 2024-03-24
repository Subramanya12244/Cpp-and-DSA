using namespace std;
#include<iostream>
#include<vector>
int main()
{
int n;
cin>>n;
vector<int> arr(n);
int target=80;
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
for(int i=0; i<n; i++)
{
    for(int j=0; j<n; j++)
    {
        if(arr[i]+arr[j]==target)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}
}