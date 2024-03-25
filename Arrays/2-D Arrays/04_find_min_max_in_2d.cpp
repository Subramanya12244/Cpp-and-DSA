using namespace std;
#include<climits>
#include<iostream>
int maximum(int arr[][3],int rows)
{
    int max=INT_MIN;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    cout<<"max: "<<max<<endl;
}
int minimum(int arr[][3],int rows)
{
    int min=INT_MAX;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    cout<<"min :"<<min<<endl;
}
int main()
{
    int arr[3][3]={
        {1,5,7},
        {4,2,9},
        {12,15,13}
    };
maximum(arr,3);
minimum(arr,3);
}