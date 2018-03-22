#include<iostream>
using namespace std;
int main()
{
 int a,b;
 cout<<"Enter values of a and b\n";
 cin>>a>>b;
 int x=a-b;
 try
 {
  if(x!=0)
  {
   cout<<"Result [a/(a-b)] = "<<a/x<<endl;
  }
  else
  {
   throw(x);
  }
 }
 catch(int i)
 {
  cout<<"Exception caught: a-b = "<<x<<endl;
 }
 return 0;
}
