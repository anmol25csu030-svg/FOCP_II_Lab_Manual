#include<iostream>

using namespace std;
int main(){
    float price[10];
    float max;
    
    for(int i=0;i<10;i++){
        cout<<"enter the price"<<i<<""<<endl;
        cin>>price[i];

        
    }
    max=price[0];
    for(int i=0;i<10;i++){
        if(max<price[i]){
            max=price[i];
        }
    }
    cout<<"max price is : "<<max<<endl;
}
