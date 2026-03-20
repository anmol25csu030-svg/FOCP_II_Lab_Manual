#include<iostream>
using namespace std;

int main()
{
   int n,rev=0,rem,temp;

   cout<<"enter number";
   cin>>n;

   temp = n;

   while(n>0)
   {
      rem = n%10;
      rev = rev*10 +rem;
      n = n/10;
   }

   if(temp==rev)
   {
      cout<<"It is palindrome";
   }
   else
   {
      cout<<"It is not palindrome";
   }

   return 0;
}