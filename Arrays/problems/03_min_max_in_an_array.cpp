using namespace std;
#include <iostream>
void min_max(int arr[],int size)
{
    int min=arr[0];
    int max=arr[size-1];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
        min=arr[i];
        }
    }
    cout<<min<<" "<<max<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
        cin>>arr[i];
    min_max(arr,n);

}