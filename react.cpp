#include <iostream>
using namespace std;
class rectangle
{
    float width;
    float length;
    public:

    void inputDimensions();
    float calculateArea();
    float calculatePerimeter();
    void displayResult();
};

void rectangle::inputDimensions(){
    cout<<"enter width & length-";
    cin>>width>>length;
}
float rectangle::calculateArea(){
    return(length*width);
}
float rectangle:: calculatePerimeter(){
    return(2*(length+width));
}
void rectangle:: displayResult(){
    cout<<"the perimeter is --"<< calculatePerimeter();
    cout<<"\n the area is --"<< calculateArea();
}
int main (){

    rectangle r1;
    r1.inputDimensions();
   // r1.calculatePerimeter();
    r1.displayResult();
    return 0 ;
}