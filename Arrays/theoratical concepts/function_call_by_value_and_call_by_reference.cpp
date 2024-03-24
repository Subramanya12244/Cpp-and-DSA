// reference varialble
//  A refrence variable acts as alials which holds memory adress instead of actual values

// ex:-
using namespace std;
#include <iostream>
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

}