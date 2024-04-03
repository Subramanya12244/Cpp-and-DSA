using namespace std;
#include<iostream>
#include<vector>
// it is the first search algorithm , but it takes O(n) time complexity
int linearSearch(vector<int> a,int target)
{
    for(int i = 0; i < a.size();i++)
    {
        if(a[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"target";
    int target;
    cin>>target;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    linearSearch(arr,target);
}