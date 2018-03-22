#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{

 int num[10]={12,23,34,45,56,67,78,89,90,100};
 if(argc!=3)
 {
  cout<<"argc="<<argc<<endl;
  cout<<"Error in arguments\n";
  exit(1);
 }
 ofstream fout1,fout2;
 fout1.open(argv[1]);
 if(fout1.fail())
 {
  cout<<"could not open the file "<<argv[1]<<"\n";
  exit(1);
 }
 fout2.open(argv[2]);
 if(fout2.fail())
 {
  cout<<"could not open the file "<<argv[2]<<"\n";
  exit(1);
 }
 for(int i=0;i<10;i++)
 {
  if(num[i]%2==0)
  fout2<<num[i]<<" ";
  else
  fout1<<num[i]<<" ";
 }
 fout1.close();
 fout2.close();
 ifstream fin;
 char ch;
 for(int i=1;i<argc;i++)
 {
  fin.open(argv[i]);
  cout<<"Contents of "<<argv[i]<<"\n";
  do
  {
   fin.get(ch);
   cout<<ch;
  }while(fin);
  cout<<endl;
  fin.close();
 }
 return 0;
}
