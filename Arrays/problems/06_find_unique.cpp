using namespace std;
#include<iostream>
#include<vector>
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int unique=0;
    for(int i=0; i<n; i++)
    {
        unique=unique^arr[i];
    }
    cout<<unique;
}