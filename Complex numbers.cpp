#include<iostream>
using namespace std;
class complex
{
float r;
float i;
public:
complex() //default constructor
{
r=0;
i=0;
}
complex operator + (complex);
complex operator * (complex);
friend istream &operator>>(istream &input,complex &t)
{
cout<<"\n Enter the real part:";
input>>t.r;
cout<<"\n Enter the imagnery part:";
input>>t.i;
}
friend ostream &operator<< (ostream &output, complex &t)
{
output<<t.r<<"+"<<t.i<<"i";
}
};
complex complex::operator+(complex c)
{
complex temp;
temp.r=r+c.r;
temp.i=i+c.i;
return temp;
}
complex complex::operator*(complex c)
{
complex temp2;
temp2.r=(r*c.r)-(i*c.i);
temp2.i=(i*c.r)+(r*c.i);
return temp2;
}
int main()
{
complex c1,c2,c3,c4;
cout<<"\n Default constructor value:";
cout<<c1;
cout<<"\n Enter the first number:";
cin>>c1;
cout<<"\n Enter the second number :";
cin>>c2;
c3=c1+c2;
c4=c1*c2;
cout<<"\n The first number:"<<c1;
cout<<"\n The second number:"<<c2;
cout<<"\n The addition is:"<<c3;
cout<<"\n The multiplication is :"<<c4;
return 0;
}