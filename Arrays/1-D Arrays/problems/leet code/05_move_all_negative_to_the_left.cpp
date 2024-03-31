using namespace std;
#include<iostream>
#include<vector>
int move_negative(vector<int> arr)
{
    int low=0;
    int high=arr.size()-1;
    while(low<high)
    {
        if(arr[low]<0)
        {
            low++;
        }
        else if(arr[high]>0)
        {
            high--;
        }
        else{
            swap(arr[high],arr[low]);
        }
    }
    for(int i=0; i<arr.size(); i++)
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
move_negative(arr);

}