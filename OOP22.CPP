#include<iostream.h>
#include<conio.h>
#include<math.h>
class solve
{
 int y;
 double e,sol;
 public:
 void get_y(int yy)
 {
  y=yy;
 }
 void cal()
 {
  e=2.71828;
  sol=2-(y*pow(e,2*y))+pow(4,y);
 }
 void display()
 {
  cout<<"The value of the expression is :"<<sol<<endl;
 }
};
void main()
{
 clrscr();
 solve s;
 int y;
 cout<<"Enter the value y for calculating the value of 2-y(e^2y)+4^y.\n";
 cin>>y;
 s.get_y(y);
 s.cal();
 s.display();
 getch();
}
