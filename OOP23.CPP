#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
void main()
{
 clrscr();
 int sq,i,n;
 double sqrt;
 cout<<"Enter the number till which you want to get it's square and square root :";
 cin>>n;
 cout<<endl<<setw(5)<<"Num"<<setw(15)<<"Square"<<setw(15)<<"Square root"<<endl<<endl;
 for(i=1;i<=n;i++)
 {
  sq=i*i;
  cout<<setw(4)<<i<<setw(13)<<sq<<setw(15)<<pow(i,0.5)<<endl;
 }
 getch();
}