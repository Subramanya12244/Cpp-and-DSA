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
for(int i=0; i<n; i++)
{
    for(int j=0; j<n; j++)
    {
       for(int k=0; k<n; k++)
       {
            cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
       }
           
        
    }
}
}