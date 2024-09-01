#include <iostream>

using namespace std;

int main()
{int numer;
   char answ;
std::cout<<"\033[3mThe user's responses to the program are shown in bold italics. This program is designed to exhibit the positive divisors of positive integers supplied by you. The program will repeatedly prompt you to enter a positive integer. Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing  order.\033m[0m\n";
//output
 do{cout<<"Please enter a positive integer: ";
 //statement
   cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}//fr dd number
for(int p=numer;p<=1;p++){
 if(numer%2!=0){
     std::cout<<numer;

}}

do{
if(numer<=0){
    std::cout<<numer<<" is not a positive integer. \n";
    std::cout<<"Please enter a positive integer: ";
    cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}//fr dd number
for(int p=numer;p<=1;p++){
 if(numer%2!=0){
     std::cout<<numer;

}}
}}while(numer<=0);

std::cout<<"Would you like to see the divisors of another integer (Y/N)? ";
       cin>>answ;
       if(answ=='n'||answ=='N'){std::cout<<"******Terminate*****"; break;}
else if(answ=='y'|| answ=='Y'){cout<<"Please enter a positive integer: ";
cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}//fr dd number
for(int p=numer;p<=1;p++){
 if(numer%2!=0){
     std::cout<<numer;
     }}

do{
if(numer<=0){
    std::cout<<numer<<" is not a positive integer. \n";
    std::cout<<"Please enter a positive integer: ";
    cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}//fr dd number
for(int p=numer;p<=1;p++){
 if(numer%2!=0){
     std::cout<<numer;

}}
}

}while(numer<=0);
std::cout<<"Would you like to see the divisors of another integer (Y/N)? ";
       cin>>answ;

}if((answ!='n'||answ!='N')|| (answ!='y'||answ!='Y'))
         {std::cout<<" Please respond with Y (or y) for yes and N (or n) for no. \n";
       std::cout<<"Would you like to see the divisors of another integer (Y/N)? ";

 cin>>answ;
       if(answ=='n'||answ=='N'){std::cout<<"******Terminate*****"; break;}
 }
 //statement





}while((answ=='y'|| answ=='Y')||(answ!='n'||answ!='N'));}


