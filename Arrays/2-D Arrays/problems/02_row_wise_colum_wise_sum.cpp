 using namespace std;
 #include<iostream>

 int main()
 {
    
    int arr[4][3];
    for(int i=0; i<4;i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
// // row wise sum
//     for(int i=0; i<4; i++)
//     {
//         int sum=0;
//         for(int j=0; j<3; j++)
//         {
//             sum+=arr[i][j];
//         }
//         cout<<sum<<endl;
//     }

// colwise sum
 for(int i=0; i<3; i++)
    {
        int sum=0;
        for(int j=0; j<4; j++)
        {
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
    for(int i=0; i<4;i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
 }