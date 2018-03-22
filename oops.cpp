#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
 //clrscr();
 int fibo[10]={0,1,1,3,2,5,8,23,34,13};
 ofstream outfile;
 outfile.open("Series.txt");
 outfile.write((char *)&fibo,sizeof(fibo));
 outfile.close();
 for(int i=0;i<10;i++)
  fibo[i]=0;
 ifstream infile;
 infile.open("Series.txt");
 infile.read((char *)&fibo,sizeof(fibo));
 for(int i=0;i<10;i++)
 {
  cout<<setw(5)<<fibo[i];
 }
 infile.close();
 return 0;
}
