#include<iostream.h>
#include<conio.h>
class A
{
 public:
 A()
 {
  cout<<"A is constructed\n";
 }
 ~A()
 {
  cout<<"A is destructed\n";
  getch();
 }
};
class B:public A
{
 public:
 B()
 {
  cout<<"B is constructed\n";
 }
 ~B()
 {
  cout<<"B is destructed\n";
 }
};
class C:public B
{
 public:
 C()
 {
  cout<<"C is constructed\n";
 }
 ~C()
 {
  cout<<"C is destructed\n";
 }
};
void main()
{
 clrscr();
 A a;
 B b;
 C c;
 getch();
}
