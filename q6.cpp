#include <iostream>
using namespace std;

int main(){
    int n;
    float salary, bonus, netsalary;
    int i;

    cout << "Enter number of employees"<<endl;
    cin >> n;

    for(i=1; i<=n; i++)
    {
        cout <<"Enter salary before bonus "<<i<<endl;
        cin >>salary;

        bonus = salary * 12 / 100;
        netsalary =salary+bonus;

        cout << "Bonus = " << bonus<<endl;
        cout << "Net Salary = "<<netsalary<<endl;
    }
    return 0;
}