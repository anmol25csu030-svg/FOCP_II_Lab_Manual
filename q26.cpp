#include<iostream>
using namespace std;
int main(){
    float total=0;
    float marks[5];
    
    for (int i = 0;i<5;i++){
        cout<<"enter the  marks of subject "<<i<<"--";
        cin>>marks[i];
        total=total+marks[i];
        

    }
    float percentage=(total/500)/100;
    cout<<"total marks is : "<<total<<endl;
    cout<< "percentage is : "<<percentage<<endl;

}
