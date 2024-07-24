using namespace std;
#include<iostream>
#include<vector>
int nearlySorted(vector<int> arr,int target)
{
    int start = 0;
    int end = arr.size()-1;
    while(start <=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        if(arr[mid-1]==target && mid-1>=0)
        {
            return mid-1;
        }
        if(arr[mid+1]==target && mid+1<arr.size())
        {
            return mid+1;
        }
        else if(arr[mid]>target)
        {
            // search left
            end = mid-2;
        }
        else{
            start = mid+2;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    cout<<"enter the elements";
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    // 10 3 40 20 50 80 70
    cout<<nearlySorted(v,target);
}