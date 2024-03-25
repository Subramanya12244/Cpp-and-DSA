using namespace std;
#include<iostream>
#include<vector>
int Union_no_dup(vector<int>a, vector<int>b)
{
    vector<int> ans;
    for(int i=0; i<a.size();i++)
    {
        ans.push_back(a[i]);
    }
     for(int i=0; i<b.size();i++)
    {
        ans.push_back(b[i]);
    }
    for(int i=0; i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}

int Union_with_dup(vector<int>a, vector<int>b)
{
    vector<int> ans;
    for(int i=0; i<a.size();i++)
    {
        for(int j=0; j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                b[j]=-1;
            }
        }
    }
    for(int i=0; i<a.size();i++)
    {
        ans.push_back(a[i]);
    }
     for(int i=0; i<b.size();i++)
    {
        if(b[i]!=-1)
        {
            ans.push_back(b[i]);
        }
    }
    for(int i=0; i<ans.size();i++)
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
    // Union_no_dup(a,b);
    Union_with_dup(a,b);
}
