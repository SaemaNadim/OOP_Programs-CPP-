#include<iostream.h>
#include<conio.h>
class A
{
 protected:
 int a;
 int b;
 public:
 void get_ab(int aa,int bb)
 {
  a=aa;
  b=bb;
 }
 int add()
 {
  return (a+b);
 }
};
class B
{
 protected:
 int c,d;
 public:
 void get_cd(int cc,int dd)
 {
  c=cc;
  d=dd;
 }
 void multiply()
 {
  int f=c*d;
  cout<<f;
 }
};
class C:public A,public B
{
 public:
 void display();
};
void C::display()
{
 cout<<"The sum of variables of first base class is: "<<add()<<endl;
 cout<<"The product of variables of second base class is: ";
 multiply();
}
void main()
{
 clrscr();
 C obj;
 int a,b,c,d;
 cout<<"Enter two numbers for addition and two numbers for multiplication\n";
 cin>>a>>b>>c>>d;
 obj.get_ab(a,b);
 obj.get_cd(c,d);
 obj.display();
 getch();
}

