// reference varialble
//  A refrence variable acts as alials which holds memory adress instead of actual values

// ex:-
using namespace std;
#include <iostream>
int inc(int n)
{
    n=n*5;
    cout<<n<<endl;
}
int main()
{
int n=5; //it is the normal number 
int &k=n;
// the k is the alias or nick name of int n. k is reference variable refering to n;

cout<<k<<endl; 

// and if we increment or perrform any operation to the k it automatically updates the n also

k++;
cout<<k<<endl;
cout<<n<<endl;


// function byy value and function by reference

// function by value- it is used in the functions where a copy of that variable is passed to the function where it is used and changed by using the operations both in the function and main they will be different and not updated

// ex:-
inc(n);
cout<<n<<endl;
// in the above you can observe that both n value print diffrently that is because it sends a copy not actual n.

// call by reference it is mainly used in the reference of the memory location.it is mostly used in arrays 
}