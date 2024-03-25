using namespace std;
#include <iostream>
#include<vector>
int transpose(int arr[][3],int rows,int colums)
{
    int ans[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            ans[i][j] = arr[j][i];
        }
    }
    cout<<"printing"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<ans[i][j]<<" ";   
        }
        cout<<endl;
    }
}
int main()
{
    

    int arr[4][3];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"before"<<endl;
     for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
transpose(arr,4,3);
}