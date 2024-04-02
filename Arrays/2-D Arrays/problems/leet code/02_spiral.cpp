using namespace std;
#include<iostream>
#include<vector>
int spiral(vector<vector<int>> arr)
{
    int m,n;
    m=arr.size();
    n=arr[0].size();
int totalelement=m*n;
    int startRow=0;
    int startCol=0;
    int endRow=m-1;
    int endCol=n-1;
    int count=0;
    while(count<totalelement)
    {
        // printing the row
        for(int j=startCol;j<=endCol;j++)
        {
            cout<<arr[startRow][j]<<" ";
            count++;
        }
        startRow++;
        // printing the end column
        for(int j=startRow;j<=endRow;j++)
        {
            cout<<arr[j][endCol]<<" ";
            count++;
        }
        endCol--;
        // printing the ending row
        for(int j=endCol;j>=startCol;j--)
        {
            cout<<arr[endRow][j]<<" ";
            count++;
        }
         endRow--;
        for(int j=endRow;j>=startRow;j--)
        {
            cout<<arr[j][startCol]<<" ";
            count++;
        }
        
        startCol++;
        
       
        
    }
}
int main()
{
    int m;
    int n;
    cin>>m;
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    spiral(arr);
    // 1 2 3 4 
    // 5 6 7 8
    // 9 10 11 12
    // 13 14 15 16
}