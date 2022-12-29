#include<iostream>
#include<fstream>
using namespace std;
class student
{
char Name[20];
int rollno;
float percentage;
public:
void accept()
{
cout<<"\n Enter Your Name:";
cin>>Name;
cout<<"\n Enter Your Roll no:";
cin>>rollno;
cout<<"\n Enter Your Percentage:";
cin>>percentage;
}
void display()
{
cout<<"\n Student Name:"<<Name;
cout<<"\n Student Roll no:"<<rollno;
cout<<"\n Student Percentage:"<<percentage;
}
};
int main()
{
student s[5];
fstream f;
int i,n;
f.open("sample.txt",ios::out);
cout<<"\n How many Students information do you need to store? : ";
cin>>n;
cout<<"\n Enter information of Students in format(NAME/ROLLNO/PERCENTAGE)";
for(i=1;i<=n;i++)
{
cout<<"\n Enter information of student "<<i<<":";
s[i].accept();
f.write((char*)&s[i],sizeof s[i]);
}
f.close();
f.open("sample.txt",ios::in);
cout<<"\n Information of students is as follows:";
for(i=1;i<=n;i++)
{
f.read((char*)&s[i],sizeof s[i]);
s[i].display();
}
f.close();
return 0;
}