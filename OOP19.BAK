#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class A
{
 char name[20];
 public:
 void getname()
 {
  cout<<"Enter your name :";
  gets(name);
 }
 void showname()
 {
  cout<<"The name is :"<<name<<endl;
 }
};
class B:virtual public A
{
 char homecity[20];
 public:
 void gethomecity()
 {
  cout<<"Enter your homecity :";
  gets(homecity);
 }
 void showhomecity()
 {
 cout<<"The homecity is :"<<homecity<<endl;
 }
};
class C:public virtual A
{
 char currentcity[20];
 public:
 void getcurrentcity()
 {
  cout<<"Enter your current city :";
  gets(currentcity);
 }
 void showcurrentcity()
 {
 cout<<"The currentcity is :"<<currentcity<<endl;
 }
};
class D:public B,public C
{
 int Id_num;
 public:
 void getidnum()
 {
  cout<<"Enter your ID number :";
  cin>>Id_num;
 }
 void display(void);
};
void D::display()
{
 cout<<endl;
 showname();
 showhomecity();
 showcurrentcity();
 cout<<"The ID number is :"<<Id_num<<endl;
}
void main()
{
 clrscr();
 D d;
 d.getname();
 d.gethomecity();
 d.getcurrentcity();
 d.getidnum();
 d.display();
 getch();
}