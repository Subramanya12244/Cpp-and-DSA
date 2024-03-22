using namespace std;
#include <iostream>
void count(int arr[],int n)
{
    int count_zero=0;
    int count_one=0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] ==0)
        {
            count_zero++;
        }
        else{
            count_one++;
        }
    }
    cout<<"there are "<<count_one<<" nor of times of 1"<<endl;
    cout<<"there are "<<count_zero<<" nor of times of 0";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    count(arr,n);
}