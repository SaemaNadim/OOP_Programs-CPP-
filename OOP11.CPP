#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int n;
class PLAYERS
{
 public:
 char type_of_sport[20];
 int* experience;
};
class zone:virtual public PLAYERS
{
 public:
 int* rankmarks1;
 void enter_marks1();
};
 void zone::enter_marks1()
 {
  cout<<"Enter the type of sport\n";
  gets(type_of_sport);
  cout<<"Enter the number of players\n";
  cin>>n;
  cout<<"Enter the experience and rank for the zone of all the players respectively\n";
  for(int i=0;i<n;i++)
  {
   cin>>experience[i];
   cin>>rankmarks1[i];
  }
 }
class national:public virtual PLAYERS
{
 public:
 int* rankmarks2;
 void enter_marks2();
};
 void national::enter_marks2()
 {
  cout<<"Enter the rank for national of the players\n";
  for (int i=0;i<n;i++)
  {
   cin>>rankmarks2[i];
  }
 }
class international:public zone,public national
{
 public:
 int* totalrank;
 void add();
 void display();
};
void international::add()
{
 for(int i=0;i<n;i++)
 {
  totalrank[i]=rankmarks1[i]+rankmarks2[i];
 }
}
 void international::display()
 {
  cout<<"The type of sport is: "<<type_of_sport<<endl;
  cout<<"Player No. Experience Rankmarks1 Rankmarks2 Totalrank\n";
  for(int i=0;i<n;i++)
  {
   cout<<"  "<<i+1<<"\t\t"<<experience[i]<<"\t"<<rankmarks1[i]<<"\t   " <<rankmarks2[i]<<"\t\t"<<totalrank[i]<<endl;
  }
 }
void main()
{
clrscr();
international a;
a.enter_marks1();
a.enter_marks2();
a.add();
a.display();
getch();
}