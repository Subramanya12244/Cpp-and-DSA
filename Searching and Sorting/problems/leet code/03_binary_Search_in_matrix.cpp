// using namespace std;
// #include<iostream>
// #include<vector>
// int binarySearch(vector<vector<int>>& arr,int target)
// {
//     int m=arr.size();
//     int n=arr[0].size();
//     int s=0;
//     int e=m*n-1;

//     while(s<=e)
//     {
//         int mid=(s+e)/2;
//         int rowIndex=mid/n;
//         int colIndex=mid%n;

//         int element=arr[rowIndex][colIndex];
//         if(element==target)
//         {
//             return mid;
//         }
//         else if(element<target)
//         {
//             // search right side
//             s=mid+1;
//         }
//         else
//         {
//             e=mid-1;
//         }
        
//     }
//     return -1;
// }
// int main()
// {
//     int m;
//     int n;

//     // m-rows n-cols

//     vector<vector<int>> arr(m,vector<int>(n));
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     cout<<binarySearch(arr,10);
// }

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<vector<int>>& arr, int target) {
    int m = arr.size();
    int n = arr[0].size();
    int s = 0;
    int e = m * n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;
        int rowIndex = mid / n;
        int colIndex = mid % n;

        int element = arr[rowIndex][colIndex];
        if (element == target) {
            cout<<"found "<<rowIndex<<" "<<colIndex<<endl;
            return mid;
        }
        else if (element < target) {
            // search right side
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return -1;
}

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    if (m <= 0 || n <= 0) {
        cout << "Invalid input: Rows and columns must be positive integers" << endl;
        return 1;
    }

    vector<vector<int>> arr(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter target value to search: ";
    int target;
    cin >> target;

    int result = binarySearch(arr, target);
    if (result == -1) {
        // cout << "Element found at index: " << result << endl;
        cout << "Element not found" << endl;
    }

    return 0;
}
