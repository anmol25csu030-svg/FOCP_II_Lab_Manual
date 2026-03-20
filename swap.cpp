#include<iostream> 
using namespace std;
void swap(int &a ,int &b)
{
int x;
x=a;
a=b;
b=x;
}
int main(){
int a,b;

cout<<"enter the value a and b ";
cin>>a>>b;
swap(a,b);
cout<<"value of a : "<<a<<"the value of b is : "<<b;
return 0;

}
