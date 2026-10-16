#include<iostream.h>
#include<conio.h>
class c
{ int a,b;
public:
c(){  // defluat constructor
a=10;
b=20;
cout<<"printing the constructors"<<"a:"<<a<<"b:"<<b<<endl;
}
c(int x, int Y)  // parmterzied constructor
{  a=x;
   b=Y;
cout<<"printing the PARMTERZIED constructors"<<"a:"<<a<<"b:"<<b<<"___>"<<a+b<<endl;
}
c(c &c1)
{ int copy1;
  int copy2;
   copy1=c1.a;
   copy2=c1.b;
   cout<<"copy constructor"<<copy1<<copy2<<endl;
   }
   };

void main(){
clrscr();
c c1;
c d(20,30);
c cp (d);

getch();



















}