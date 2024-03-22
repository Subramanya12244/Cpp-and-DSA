using namespace std;
#include <iostream>

bool linear(int arr[],int n,int target)
{
    bool flag=false;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            flag=true;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int target;
    cin >> target;
    bool flag=linear(arr,n,target);
    if(flag)
    {
        cout<<"the element is found";
    }
    else
    {
        cout<<"the element is not found";
    }
}