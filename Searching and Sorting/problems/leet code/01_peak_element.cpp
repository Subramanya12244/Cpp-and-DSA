using namespace std;
#include<iostream>
#include<vector>
int peakElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    while(start < end)
    {
        int mid=start+end/2;
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else 
        {
            end=mid;
        }
    }
    return start;
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
    cout<<peakElement(arr)<<endl;
}