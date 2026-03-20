#include<iostream>   
using namespace std;

class Student {
    public :
    int rollno ;
    string name;
    int marks1; int marks2; int marks3;

    void inputDetails (){
        cout<<"enter roll no";
        cin>>rollno;
        cout<<"enter name";
        cin>>name;
        cout<<"enter marks";
        cin>>marks1>>marks2>>marks3;
    }
    int calculateTotal(){
        return marks1+marks2+marks3;
    }
    void displaydetails(){
        cout<<"rollno"<<rollno;
        cout<<"name"<<name;
        cout<<"total marks"<<calculateTotal();
    }};
    int main(){
        Student s;
        s.inputDetails();
        s.displaydetails();
        

    }

