#include<iostream>
using namespace std;

int main()
{
   int n,rem,sum=0,temp;

   cout<<"enter number";
   cin>>n;

   temp = n;

   while(n>0)
   {
      rem = n%10;
      sum = sum+rem*rem*rem;
      n = n/10;
   }

   if(sum==temp)
   {
      cout<<"it is a armstrong number";
   }
   else
   {
      cout<<"it is not an armstrong number";
   }

   return 0;
}