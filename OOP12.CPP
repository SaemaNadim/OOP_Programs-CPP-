#include<iostream.h>
#include<conio.h>
class add
{
int a;
public:
int b,c;
void get_abc(int,int,int);
int give_a();
};
class add_sub_mul:private add
{
int d;
public:
int e,f;
void get_abcdef(int,int,int);
int add_class1();
int add_all();
int sub();
int mul();
void display();
};
void add::get_abc(int aa,int bb,int cc)
{
a=aa;
b=bb;
c=cc;
}
int add::give_a()
{
return a;
}

void add_sub_mul::get_abcdef(int dd,int ee,int ff)
{
int a,b,c;
cout<<"Enter a,b and c\n";
cin>>a>>b>>c;
get_abc(a,b,c);
d=dd;
e=ee;
f=ff;
}
int add_sub_mul::add_class1()
{
return(b+c+give_a());
}
int add_sub_mul::add_all()
{
return(give_a()+b+c+d+e+f);
}
int add_sub_mul::sub()
{
return(c-f);
}
int add_sub_mul::mul()
{
return(give_a()*b*c*d*e*f);
}
void add_sub_mul::display()
{
cout<<"The value of a = "<<give_a()<<", b = "<<b<<", c = "<<c<<", d = "<<d<<", e = "<<e<<" and f = "<<f<<endl;
cout<<"\nThe sum of variables of the base class = "<<add_class1();
cout<<"\nSum of all the variables = "<<add_all();
cout<<"\nThe difference between c and f = "<<sub();
cout<<"\nThe multiplication of all variables = "<<mul();
}
void main()
{
clrscr();
add_sub_mul A;
int d,e,f;
cout<<"\nEnter the value of d,e and f\n";
cin>>d>>e>>f;
A.get_abcdef(d,e,f);
A.display();
getch();
}