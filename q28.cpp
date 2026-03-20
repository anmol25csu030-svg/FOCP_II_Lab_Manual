#include<iostream>
using namespace std ;
class car {
  string color ;
  int make_year;
  string car_type;
  public:
  string brand;

  void display()
  {
    cout<<"colour of the car"<<color<<endl;
    cout<<"car type "<<car_type<<endl;
    cout<<"brand is  "<<brand<<endl;

   
  }
  void entry (){
    cout<<"enter the color ,make year,car type,brand";
    cin>>color>>make_year>>car_type>>brand;
  }      };
  int main(){
    car c1;
    
  }













