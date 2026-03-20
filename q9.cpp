#include<iostream>
using namespace std;

int main()
{
   char ch;

   cout<<"Enter any alphabet"<<endl;
   cin>>ch;

   if(ch=='a' ||ch=='e'||ch=='i'|| ch=='o'|| ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
   {
      cout<<"it is a vowel"<<endl;
   }
   else if(ch>='0' && ch<='9')
   {
      cout<<"it is a number"<<endl;
   }
   else
   {
      cout<<"it is a consonant"<<endl;
   }

   return 0;
}