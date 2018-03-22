#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
class vehicle
{
 public:
 char registration_id[20];
 char owner_name[20];
 void get_veh(char r[],char n[])
 {
  strcpy(registration_id,r);
  strcpy(owner_name,n);
 }
 void show()
 {
 /* cout<<"Registration id is :"<<registration_id<<endl;
  cout<<"the owner's name is :"<<owner_name<<endl; */
  cout<<setw(10)<<registration_id<<setw(17)<<owner_name;
 }
};
class car:public vehicle
{
 public:
 char carmodel_num[20];
 long int carprice;
 char carcolour[20];
 void get_carmpc(char m[],long int p,char *c)
 {
  strcpy(carmodel_num,m);
  carprice=p;
  strcpy(carcolour,c);
 }
 void carshow()
 {
 /* cout<<"Model number is :"<<carmodel_num<<endl;
  cout<<"Price is :"<<carprice<<endl;
  cout<<"Colour is :"<<carcolour<<endl;*/
   cout<<setw(15)<<carmodel_num<<setw(18)<<carprice<<setw(12)<<carcolour<<endl;
 }
};
class motorcycle:public vehicle
{
 public:
 char motmodel_num[20];
 long int motprice;
 char motcolour[20];
 void get_motmpc(char mm[],long int pp,char cc[])
 {
  strcpy(motmodel_num,mm);
  motprice=pp;
  strcpy(motcolour,cc);
 }
 void motshow()
 {
 /* cout<<"Model number is :"<<motmodel_num<<endl;
  cout<<"Price is :"<<motprice<<endl;
  cout<<"Colour is :"<<motcolour<<endl;*/
   cout<<setw(15)<<motmodel_num<<setw(18)<<motprice<<setw(12)<<motcolour<<endl;
 }
};
void main()
{
 clrscr();
 car c[15];
 motorcycle m[15];
 long int i,p1,p2,p=0,q=0;
 char r[20],n[20],m1[20],m2[20],c1[20],c2[20],ch;
 do{
    cout<<"Enter 1 to add the info about car"<<endl;
    cout<<"Enter 2 to add the info about motorcycle"<<endl;
    cin>>i;
    if(i==1)
     {
       cout<<"Enter the registration id :";
       gets(r);
       cout<<"Enter the owner's name :";
       gets(n);
       c[p].get_veh(r,n);
       cout<<"Enter the model number of the car :";
       gets(m1);
       cout<<"Enter the price of the car :";
       cin>>p1;
       cout<<"Enter the colour of the car :";
       gets(c1);
       c[p++].get_carmpc(m1,p1,c1);

     }
    else if(i==2)
     {
       cout<<"Enter the registration id :";
       gets(r);
       cout<<"Enter the owner's name :";
       gets(n);
       m[q].get_veh(r,n);
       cout<<"Enter the model number of the motorcycle :";
       gets(m2);
       cout<<"Enter the price of the motorcycle :";
       cin>>p2;
       cout<<"Enter the colour of the motorcycle :";
       gets(c2);
       m[q++].get_motmpc(m2,p2,c2);

     }
   cout<<"\nDo you want to enter more?";
   cin>>ch;
 }while(ch=='y'||ch=='Y');
 cout<<"\nTHE LIST IS :\n";
 if(p>0)
 {
  cout<<"\nCAR\n";
  cout<<"Registration Id"<<setw(15)<<"Owner's Name"<<setw(15)<<"Model No."<<setw(15)<<"Price"<<setw(15)<<"Colour\n";
  for(int k=0;k<p;k++)
  {
   c[k].show();
   c[k].carshow();
  }
 }
 if(q>0)
 {
  cout<<"MOYORCYCLE\n";
  cout<<"Registration Id"<<setw(15)<<"Owner's Name"<<setw(15)<<"Model No."<<setw(15)<<"Price"<<setw(15)<<"Colour\n";
  for(int k=0;k<q;k++)
  {
   m[k].show();
   m[k].motshow();
  }
 }
 getch();
}
