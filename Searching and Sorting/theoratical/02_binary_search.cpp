using namespace std;
#include<iostream>
#include<vector>
// it is the second searching algorithm for searching it is better than the linear search algorithm which is more efficient as its time complexity is O(log(n)) where n is the size of the array
int binarySearch(vector<int> arr,int target)
{
    int start=0;
    int end=arr.size()-1;
    while(start<end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[mid]<target)
        {
            // search in rightside of mid
            start=mid+1;
        }
        else{
            // search in leftside of mid
            end=mid-1;
        }

    }
    return -1;
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
    int target;
    cout<<"enter the target";
    cin>>target;

    cout<<binarySearch(arr,target);
}