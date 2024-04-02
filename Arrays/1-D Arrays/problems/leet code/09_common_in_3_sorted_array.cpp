using namespace std;
#include<iostream>
#include<vector>
#include<set>
void common(vector<int>& a, vector<int>& b,vector<int>& c)
{
int size1=a.size();
int size2=b.size();
int size3=c.size();
set<int> s1;
vector<int> ans;
// cout<<size1<<" "<<size2<<" "<<size3<<endl;
int i=0;
int j=0;
int k=0;
while(i<size1 && j<size2 && k<size3)
{
    if(a[i]==b[j] && b[j]==c[k])
    {
        s1.insert(a[i]);
        i++; j++; k++;
    }
    else if(b[j]>a[i])
    {
        i++;
    }
    else if(c[k]>b[j])
    {
        j++;
    }
    else{
        k++;
    }
}
for(auto i=s1.begin(); i!=s1.end();++i)
{
    cout<<*i<<" ";
}

}
int main()
{
    // int n;
    // cin>>n;
    vector<int> a={1,5,10,20,40,80};
    vector<int> b={6,7,20,80,100};
    vector<int> c={3,4,15,20,30,70,80,120};
    common(a,b,c);
}