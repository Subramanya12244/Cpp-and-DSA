using namespace std;
#include<iostream>
#include<vector>

int main()
{
    vector<int>arr={0,0,1,1,1,2,2,3,3,4};
    int i=1;
    int j=0;
    while(i<arr.size())
    {
        if(arr[i]==arr[j])
        {
            i++;
        }
        else{
            // arr[++j]=arr[i++];
            j++;
            arr[j]=arr[i];
            i++;   
        }
    }
    cout<<j+1;
}