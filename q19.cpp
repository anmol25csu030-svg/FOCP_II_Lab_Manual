#include<iostream>
using namespace std;

int main()
{
   int a,b,i,j;

   cout<<"enter start number";
   cin>>a;

   cout<<"enter end number";
   cin>>b;

   for(i=a; i<=b; i++)
   {
      int count = 0;

      for(j=1; j<=i; j++)
      {
         if(i%j==0)
         {
            count++;
         }
      }

      if(count==2)
      {
         cout<<i;
      }
   }

   return 0;
}