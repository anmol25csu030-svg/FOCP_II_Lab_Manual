#include<iostream>
using namespace std;

int main()
{
   int n,i,num,largest;

   cout<<"enter how many numbers";
   cin>>n;

   cout<<"enter number 1";
   cin>>largest;

   for(i=2; i<=n; i++)
   {
      cout<<"enter number "<<i;
      cin>>num;

      if(num>largest)
      {
         largest = num;
      }
   }

   cout<<"Largest number = "<<largest;

   return 0;
}