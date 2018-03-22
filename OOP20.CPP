#include<iostream.h>
#include<conio.h>
class shape
{
 public:
 virtual void area()=0;
 virtual void perimeter()=0;
};
class rectangle:public shape
{
 double l,b;
 double ar,pr;
 public:
 void get_rectangle(double ll,double bb)
 {
  l=ll;
  b=bb;
 }
 void area()
 {
  ar=l*b;
 }
 void perimeter()
 {
  pr=2*(l+b);
 }
 void display()
 {
  cout<<"The area of rectangle is :"<<ar<<endl;
  cout<<"The perimeter of rectangle is :"<<pr<<endl;
 }
};
class square:public shape
{
 double a;
 double as,ps;
 public:
 void get_square(double aa)
 {
  a=aa;
 }
 void area()
 {
  as=a*a;
 }
 void perimeter()
 {
  ps=4*a;
 }
 void display()
 {
  cout<<"The area of square is :"<<as<<endl;
  cout<<"The perimeter of square is :"<<ps<<endl;
 }
};
class triangle:public shape
{
 double a,c,b,h;
 double at,pt;
 public:
 void get_triangle(double aa,double bb,double cc,double hh)
 {
  a=aa;
  b=bb;
  c=cc;
  h=hh;
 }
 void area()
 {
  at=b*h/2;
 }
 void perimeter()
 {
  pt=a+b+c;
 }
 void display()
 {
  cout<<"The area of triangle is :"<<at<<endl;
  cout<<"The perimeter of triangle is :"<<pt<<endl;
 }
};
class circle:public shape
{
 double r;
 double ac,pc;
 public:
 void get_circle(double rr)
 {
  r=rr;
 }
 void area()
 {
  ac=3.14*r*r;
 }
 void perimeter()
 {
  pc=2*3.14*r;
 }
 void display()
 {
  cout<<"The area of circle is :"<<ac<<endl;
  cout<<"The perimeter of circle is :"<<pc<<endl;
 }
};
void main()
{
 clrscr();
 int option;
 double l,b,a,aa,bb,cc,hh,r;
 char ch;
 rectangle rect;
 square sq;
 triangle tri;
 circle cir;
 do
 {
  cout<<"Enter 1 if you want to find the area and perimeter of rectangle.\n";
  cout<<"Enter 2 if you want to find the area and perimeter of square.\n";
  cout<<"Enter 3 if you want to find the area and perimeter of triangle.\n";
  cout<<"Enter 4 if you want to find the area and perimeter of circle.\n";
  cin>>option;
  if(option==1)
  {
   cout<<"Enter the length and breadth of reactangle\n";
   cin>>l>>b;
   rect.get_rectangle(l,b);
   rect.area();
   rect.perimeter();
   rect.display();
  }
  else if(option==2)
  {
   cout<<"Enter the side of square\n";
   cin>>a;
   sq.get_square(a);
   sq.area();
   sq.perimeter();
   sq.display();
  }
  else if(option==3)
  {
   cout<<"Enter the first side of the triangle,then the base side of the triangle,the third side of the triangle and the height of the triangle\n";
   cin>>aa>>bb>>cc>>hh;
   tri.get_triangle(aa,bb,cc,hh);
   tri.area();
   tri.perimeter();
   tri.display();
  }
  else if(option==4)
  {
   cout<<"Enter the radius of the circle\n";
   cin>>r;
   cir.get_circle(r);
   cir.area();
   cir.perimeter();
   cir.display();
  }
  else
   cout<<"Wrong option\n";
  cout<<"Do you want to enter more options??\n";
  cin>>ch;
 }while(ch=='y'||ch=='Y');
 getch();
}
