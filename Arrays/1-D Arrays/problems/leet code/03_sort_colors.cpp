using namespace std;
#include<iostream>
#include<vector>
void sorting(vector<int> arr,int n)
{
int low=0;
int high=n-1;
int mid=0;

while(mid<=high)
{
    if(arr[mid]==0)
    {
        swap(arr[mid],arr[low]);
        low++;
        mid++;
    }
    else if(arr[mid]==1)
    {
        mid++;
    }
    else{
        swap(arr[mid],arr[high]);
        high--;
    }
}
for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
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
    sorting(arr,n);
    
}