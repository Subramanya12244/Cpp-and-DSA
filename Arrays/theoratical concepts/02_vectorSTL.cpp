using namespace std;
#include<iostream>
#include<vector>
void print(vector<int>a,int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] <<endl;
    }
}

void print2(vector<int>a,int n)
{
    for(auto lt:a)
    {
        cout <<lt <<endl;
    }
}
int main()
{
    // def:- a vector is a dynamic array that can grow or shrink the size in runtime making it a vercetile and efficient data structure for storing and manipulating sequence of elements

// we cant do take user input and create an array it gives an array
int n;
cin>>n;
// int arr[n];
// you can see it in the aboove ex it gives error
// so we use dynamic array either vector or below method

int *arr=new int[n];

// vector:-in vector dont tell the size of the vector just keep inserting elements.it will manage allocations


vector<int> arr1;
arr1.push_back(1);
arr1.push_back(2);
arr1.push_back(3);
// in this we can see that without actually giving the size we can insert the elements in the array
print(arr1,n);

arr1.pop_back();
// pop_back :it will delete the elements from the end of the array


// in the is we basically do

vector<int> arr2;
int size;
cin>>size;
for(int i=0; i<size; i++)
{
    int d;
    cin>>d;
    arr2.push_back(d);
}

// .at() is used to get the position of the element in the array

for(int i=0; i<size; i++)
{
    cout<<arr2.at(i)<<endl;
}

// if you want to clear all the data then you can use
arr2.clear();


// different ways of initialising the vector
// 1st:- 
vector<int> a;
// 2nd:- 
vector<int> b(5,-1);
// in the above we can initialise default value fr 5 elements as -1

// 3rd:-    
vector<int> c={1,12,3,4,5,6,7,8,9,10,11};

// copy the vector 
vector<int>d(c);

// v.front()-gives the first element of the array
// v.back()-gives the last element of the array
}