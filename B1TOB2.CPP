#include<iostream.h>
#include<coino.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
class icici;
class sbi
{ int acc;
  double bal;
  public:
  void read(){
  cout<<"entear the account numbear";
  cin>>acc;
  cout<<"enter the ammount :";
  cin>>bal
}
void show(){
 cout<<"sbi class account numbear"<<acc<<endl;
 cout<<"sbi class account balance"<<bal<<endl;
 }
  friend void transfer(sbi &S, icici &i,double);
 };


 class icici
 { int acc;
   double bal;
   public:
  void read(){
  cout<<"entear " icici" the account numbear";
  cin>>acc;
  cout<<"enter"icici" the ammount :";
  cin>>bal
}
void show(){
 cout<<"icici class account numbear"<<acc<<endl;
 cout<<"icici class account balance"<<bal<<endl;
 }
 friend void transfer(sbi &, icici &, double);
 };
 void transfer(sbi &s, icici &i, double ammount)
 { if(ammount >0 && ammount<=s.bal)
     s.bal=s.bal-ammount;

    else i.bal=i.bal+ammount;








void main(){
clrscr();


	 getch();

}