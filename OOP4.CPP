#include<iostream.h>
#include<conio.h>
class calculator
{
public:
int add(int,int);
float add(float,float);
int subtract(int,int);
float subtract(float,float);
int multiply(int,int);
float multiply(float,float);
float divide(float,float);
};
int calculator::add(int a,int b)
{
return(a+b);
}
float calculator::add(float c,float d)
{
return(c+d);
}
int calculator::subtract(int a,int b)
{
if(a>b)
return(a-b);
else
return(b-a);
}
float calculator::subtract(float c,float d)
{
if(c>d)
return(c-d);
else
return(d-c);
}
int calculator::multiply(int a,int b)
{
return(a*b);
}
float calculator::multiply(float c,float d)
{
return(c*d);
}
float calculator::divide(float c,float d)
{
return(c/d);
}
void main()
{
clrscr();
calculator cal;
int a,b,choice;
float c,d;
cout<<"Enter the two numbers:\n";
cin>>c;
cin>>d;
a=c;
b=d;
cout<<"Enter 1 for addition.\n";
cout<<"Enter 2 for subtraction.\n";
cout<<"Enter 3 for multiplication.\n";
cout<<"Enter 4 for division.\n";
cin>>choice;
if(choice==1)
{
cout<<"The sum of the two numbers is :";
if(c-a==0)
cout<<cal.add(a,b);
else
cout<<cal.add(c,d);
}
else if(choice==2)
{
cout<<"The difference of the two numbers is :";
if(c-a==0)
cout<<cal.subtract(a,b);
else
cout<<cal.subtract(c,d);
}
else if(choice==3)
{
cout<<"The multiplication of the two numbers is :";
if(c-a==0)
cout<<cal.multiply(a,b);
else
cout<<cal.multiply(c,d);
}
else if(choice==4)
{
cout<<"The division of the two numbers is :";
cout<<cal.divide(c,d);
}
getch();
}





