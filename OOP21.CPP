#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class A
{
 int a,b;
 public:
 void get_A(int aa,int bb)
 {
  a=aa;
  b=bb;
 }
 virtual void display()
 {
  cout<<"This is the base class.\nThe base class pointer is pointing to the base object.\n";
  cout<<"After the operations are performed :\n";
  cout<<"a + b = "<<a+b<<endl;
  cout<<"a - b = "<<a-b<<endl;
  cout<<"a * b = "<<a*b<<endl;
  cout<<"a / b = "<<a/b<<endl;
 }
};
class B:public A
{
 char *s;
 public:
 void get_B(char *name)
 {
  strcpy(s,name);
 }
 void display()
 {
  cout<<"This is the inherited class.\nNow the base class pointer is pointing to the inherited class object.\n";
  cout<<"Your name is: ";
  puts(s);
 }
};
void main()
{
 clrscr();
 int a,b;
 char *name;
 A *ptr1,obj1;
 ptr1=&obj1;
 cout<<"Enter the two numbers for performing operations\n";
 cin>>a>>b;
 ptr1->get_A(a,b);
 ptr1->display();
 B obj2;
 ptr1=&obj2;
 cout<<"Enter your name\n";
 gets(name);
 obj2.get_B(name);
 ptr1->display();
 getch();
}