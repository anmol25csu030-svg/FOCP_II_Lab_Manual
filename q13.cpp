#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   float a,b,c,d,x1,x2;

   cout<<"Enter a , b , c : ";
   cin>>a>>b>>c;

   d = b*b - 4*a*c;

   if(d>0)
   {
      x1 = (-b + sqrt(d)) / (2*a);
      x2 = (-b - sqrt(d)) / (2*a);

      cout<<"root1"<<x1<<endl;
      cout<<"root2"<<x2;
   }
   else if(d==0)
   {
      x1 = -b / (2*a);

      cout<<"if both roots are same"<<x1;
   }
   else
   {
      cout<<"Imaginary roots";
   }

   return 0;
}