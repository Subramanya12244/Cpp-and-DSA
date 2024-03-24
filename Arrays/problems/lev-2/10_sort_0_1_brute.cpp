using namespace std;
#include<iostream>
#include<vector>
int sorting_z_o(vector<int> &arr,int n)
{
   int count_zeros = 0;
    int count_ones = 0;
    
    // Count the number of zeros and ones
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count_zeros++;
        } else {
            count_ones++;
        }
    }

    // Create a new vector to hold the sorted elements
    vector<int> sorted_arr;
    
    // Add zeros
    for (int i = 0; i < count_zeros; i++) {
        sorted_arr.push_back(0);
    }
    
    // Add ones
    for (int i = 0; i < count_ones; i++) {
        sorted_arr.push_back(1);
    }
    for(int i = 0;i<n;i++) {
        cout<<sorted_arr[i]<<" "<<endl;
    }
}

void sorting_1(int arr[],int n)
{
    int count_zeros = 0;
    int count_ones = 0;
    
    // Count the number of zeros and ones
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count_zeros++;
        } else {
            count_ones++;
        }
    }

    // Reset i to zero for reuse
    int index = 0;
    
    // Fill the array with zeros
    while (count_zeros--) {
        arr[index]=0;
        index++;
    }

    // Fill the array with ones
    while (count_ones--) {
        arr[index]=1;
        index++;
    }

    // Print the sorted array
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
}

int main()
{
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
    {
        cin>> arr[i];
    }
    // sorting_z_o(arr,n);
    int arr1[n];
     for(int i = 0;i<n;i++)
    {
        cin>> arr[i];
    }
    sorting_1(arr1,n);
}