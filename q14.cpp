#include<iostream>
using namespace std;

int main()
{
   int choice;
   float a,b,result;

   do
   {
      cout<<"\n1. Addition";
      cout<<"\n2. Subtraction";
      cout<<"\n3. Multiplication";
      cout<<"\n4. Division";
      cout<<"\n5. Exit";
      cout<<"\nEnter your choice : ";
      cin>>choice;

      if(choice>=1 && choice<=4)
      {
         cout<<"Enter two numbers : ";
         cin>>a>>b;
      }

      if(choice==1)
      {
         result = a + b;
         cout<<"Result = "<<result<<endl;
      }
      else if(choice==2)
      {
         result = a - b;
         cout<<"Result = "<<result<<endl;
      }
      else if(choice==3)
      {
         result = a * b;
         cout<<"Result = "<<result<<endl;
      }
      else if(choice==4)
      {
         if(b!=0)
         {
            result = a / b;
            cout<<"Result = "<<result<<endl;
         }
         else
         {
            cout<<"Division by zero not possible"<<endl;
         }
      }
      else if(choice==5)
      {
         cout<<"Calculator closed";
      }
      else
      {
         cout<<"Wrong choice"<<endl;
      }

   }while(choice!=5);

   return 0;
}