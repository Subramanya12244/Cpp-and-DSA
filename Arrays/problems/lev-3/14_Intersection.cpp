using namespace std;
#include<iostream>
#include<vector>
int intersection(vector<int> a, vector<int> b)
{
  vector<int> ans;
for(int i = 0; i < a.size();i++)
{
    // for every element run loop on b array
    for(int j = 0; j < b.size();j++)
    {
        if(a[i]==b[j])
        {
            ans.push_back(a[i]);
        }
    }
}
for(int i = 0; i < ans.size();i++)
{
    cout<<ans[i]<<endl;
}
}

int intersection_with_repeated_values(vector<int> a, vector<int> b)
{
vector<int> ans;
for (int i = 0; i <a.size(); i++)
{
for(int j=0;j<b.size();j++)
{
    if(a[i]==b[j])
    {
        ans.push_back(a[i]);
        b[j]=-1;      
    }
} 
}
for(int i = 0; i < ans.size();i++)
{
    cout<<ans[i]<<endl;
}
}
int main()
{
    int m;
    cout<<"enter the size of a vector";
    cin>>m;
    int n;
    cout<<"enter the size of b vector";
    cin>>n;
    vector<int> a(m);
    vector<int> b(n);

    cout<<"enter the elements of array a"<<endl;
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
     cout<<"enter the elements of array b"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    intersection_with_repeated_values(a,b);
}