using namespace std;
#include<iostream>

int main()
{
    int target=10;
    int arr[4][3];
    for(int i = 0; i <4;i++)
    {
        for(int j = 0; j <3;j++)
        {
            cin>>arr[i][j];
        }
    }

     for(int i = 0; i <4;i++)
    {
        for(int j = 0; j <3;j++)
        {
            if(arr[i][j]==target)
            {
                cout<<"target found: "<<endl;
                cout<<arr[i][j]<<" in row "<<i<<" in column "<<j<<endl;
            }
        }
    }
}