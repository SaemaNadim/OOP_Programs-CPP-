#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
class inventory
{
  char name[20];
  char code[15];
  float cost;
 public:
  void readdata();
  void writedata();
};
void inventory::readdata()
{
 cout<<"Enter name of the item: ";
 cin>>name;
 cout<<"Enter it's code: ";
 cin>>code;
 cout<<"Enter it's cost: ";
 cin>>cost;
}
void inventory::writedata()
{
 cout<<setiosflags(ios::left)
 <<setw(10)<<name
 <<setiosflags(ios::right)
 <<setw(10)<<code
 <<setprecision(2)
 <<setw(10)<<cost<<endl;
}
void main()
{
 clrscr();
 int n;
 cout<<"Enter the num of items you want to enter: ";
 cin>>n;
 inventory item[5];
 fstream outfile;
 outfile.open("Stock",ios::in|ios::out);
 cout<<"Enter details for the "<<n<<" items\n";
 for(int i=0;i<n;i++)
 {
  item[i].readdata();
  outfile.write((char *)&item[i],sizeof(item[i]));
 }
 outfile.seekg(0);
 cout<<"OUTPUT\n";
 for(i=0;i<n;i++)
 {
  outfile.read((char *)&item[i],sizeof(item[i]));
  item[i].writedata();
 }
 outfile.close();
 getch();
}
