#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
ostream & unit(ostream & output)
{
 output<<" square centimeters";
 return output;
}
ostream & area_form(ostream & output)
{
 output.setf(ios::showpoint);
 output.precision(2);
 output<<setw(3);
 return output;
}
void main()
{
 clrscr();
 double n;
 cout<<"Enter the side of the square to calculate area :";
 cin>>n;
 cout<<"\nThe area is "<<area_form<<n*n<<unit;
 getch();
}