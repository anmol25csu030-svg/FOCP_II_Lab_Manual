#include<iostream>
using namespace std;

int main()
{
   int quantity;
   float price , total;

   cout<<"quantity"<<endl;
   cin>>quantity;
   cout<<"price"<<endl;
   cin>>price;

   total = quantity*price;

   if(quantity>1000)
   {
      total = total-(total*10/100);
   }

   cout<<"Total expense"<<total<<endl;

   return 0;
}