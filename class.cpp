#include <iostream>
using namespace std;
class student
{
    private:

    int rollno;
    string name;
    int marks1;
    int marks2;
    int marks3;

public:
    void inputdetails()
    {
        cout << "enter rollno,name,marks1,marks2,marks3";
        cin >> rollno >> name >> marks1 >> marks2 >> marks3;
    }
    int calculations()
    {
        return (marks1 + marks2 + marks3);
    }
    void displaydetails()
    {
        cout << "\n" << rollno;
        cout << "\n" << name;
        cout << "\n" << calculations();
    }
};
int main()
{

    student s1;
    s1.inputdetails();
    s1.displaydetails();

    
    return 0;
}