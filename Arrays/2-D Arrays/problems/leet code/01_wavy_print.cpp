using namespace std;
#include<iostream>
#include<vector>
void wavy(vector<vector<int>> arr)

{
    int m=arr.size();
    int n=arr[0].size();
    for(int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            for(int j = 0; j < m; j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j = m-1; j >=0; j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
    }
}
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    wavy(arr);
}