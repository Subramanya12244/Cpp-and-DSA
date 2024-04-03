using namespace std;
#include <iostream>
#include <vector>

int firstOccurence(vector<int>a,int target)
{
    int start = 0;
    int end = a.size()-1;
    int index=-1;
     while(start <=end)
     {
        int mid=start+(end-start)/2;
        if(a[mid]==target)
        {
            index=mid;
            end=mid-1;
        }
        else if(a[mid]<target)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }

     }
     return index;
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
    cout<<firstOccurence(arr, target);
}