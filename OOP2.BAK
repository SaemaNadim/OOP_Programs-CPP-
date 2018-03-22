#include<iostream.h>
#include<conio.h>
class factorial
{
int num,i;
public:
void getdata(int n)
{
num=n;
}
int fact(int);
void display();
};
int factorial::fact(int num)
{
int c=1;
 for(i=1;i<=num;i++)
 {
 c=c*i;
 }
 return c;
}
void factorial::display()
{
cout<<"The factorial of "<<num<<" = "<<fact(num);
}
void main()
{
clrscr();
factorial f;
int n;
cout<<"Enter the number to calculate factorial :\n";
cin>>n;
f.getdata(n);
f.display();
getch();
}