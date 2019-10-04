#include<iostream.h>
#include<conio.h>
class fibo
{
int num,i;
int fib(int); //making fib private as always called by member function only
public:
void getdata(int n)
 {
   num=n;
 }

void display();
};
int fibo::fib(int num)
 {
  if(num==1)
  return 0;
  else if(num==2)
  return 1;
  else
  return(fib(num-1)+fib(num-2));
 }
void fibo::display()
 {
  for(i=1;i<=num;i++)
  {
  cout<<fib(i)<<" ";
  }
 }
void main()
 {
  clrscr();
  fibo fibo_num;
  int n;
  cout<<"Enter the number of terms you want to get of fibonacci series:\n";
  cin>>n;
  fibo_num.getdata(n);
  fibo_num.display();
  getch();
 }



