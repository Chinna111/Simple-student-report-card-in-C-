#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
void main()
{
void line();
void star();

int runs,innings;
float avg;
cout<<"\nEnter 6 records including following details\n";
cout<<"1)    Student name\n";
cout<<"2)    Tamil\n";
cout<<"3)    English\n";
cout<<"4)    Maths\n";
cout<<"5)    Physics\n";
cout<<"6)    Chemistry\n";
cout<<"7)    Compuetr lap\n\n";

struct student
{
char name[15];
int Tamil;
int English;
int Maths;
int Physics;
int Chemistry;
int Computerlab;
float avg;
}rec[8];

for(int i=0;i<5;i++)
{
cout<<"\nEnter student name:-";
cin>>rec[i].name;
cout<<"Enter Tamil mark:-";
cin>>rec[i].Tamil;
cout<<"Enter English mark:-";
cin>>rec[i].English;
cout<<"Enter Maths mark:-";
cin>>rec[i].Maths;
cout<<"Enter Physics mark:-";
cin>>rec[i].Physics;
cout<<"Enter Chemistry mark:-";
cin>>rec[i].Chemistry;
cout<<"Enter Compuetr lab mark:-";
cin>>rec[i].Computerlab;
rec[i].avg = float(rec[i].Tamil+rec[i].English+rec[i].Maths+rec[i].Physics+rec[i].Chemistry+rec[i].Computerlab)/5;
}


clrscr();
cout<<"\n\n\n";
cout<<setw(49)<<"STUDENT REPORT CARD\n";
line();
cout<<setw(4)<<"Student's Name"<<setw(8)<<"Tamil"<<setw(8)<<"English"
     <<setw(8)<<"Maths"<<setw(8)<<"Physics"<<setw(10)<<"Chemistry"<<setw(11)<<"Computer"<<setw(10)<<"Average\n";
line();
for(int j=0;j<5;j++)
{
cout<<setw(12)<<rec[j].name<<setw(8)<<rec[j].Tamil<<setw(8)<<rec[j].English
     <<setw(8)<<rec[j].Maths<<setw(8)<<rec[j].Physics<<setw(10)<<rec[j].Chemistry<<setw(11)<<rec[j].Computerlab<<setw(14)<<rec[j].avg<<endl;
}
line();
cout<<endl<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();
getch();
}

//======================line=====================\\
void line()
{
for(int i=1;i<41;i++)
cout<<"--";
cout<<"\n";
}
//======================star======================\\
void star()
{
for(int i=1;i<41;i++)
cout<<"**";
cout<<"\n";
}