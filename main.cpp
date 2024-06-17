#include <iostream>
#include <string>
using namespace std;

// f(x) = x^2 + 2
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars " << endl;
    }
    void getsecretPassword()
    {
        cout << "The secret password of employee is " << this->secretPassword;
    }

private:
    int secretPassword;
};

class Programmer : public Employee
{
public:
    int errors;
};

int
main()
{
    /*cout<<"Hello World Vansh"<<endl;
    cout<<"Next line";*/

    // int a,b,c;
    // short sa=9;
    // short Sa=91;
    // cout<<sa<<endl;
    // cout<<Sa;

    // CamelCase Notation
    // int marksInMaths=98;
    // cout<<marksInMaths<<endl;
    // cout<<"The marks of vansh in maths is "<<marksInMaths;

    // DataTypes
    // int b;
    // short a;
    // long c;
    // long long d;
    // float const score = 45.32;
    // double score2 = 45.332;
    // long double score3 = 45.3332;
    // // score = 34.3;
    // cout<<"The Score is "<<score;

    // operator
    // int a,b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;

    // cout<<"a+b is "<<a+b<<endl;
    // cout<<"a-b is "<<a-b<<endl;
    // cout<<"a*b is "<<a*b<<endl;
    // cout<<"a/b is "<<(float)a/b<<endl;

    // If else
    // int age;
    // cout<<"Enter your age"<<endl;
    // cin>>age;

    // if(age>150 || age<1){
    //     cout<<"Invalid age"<<endl;
    // }

    // else if(age>=18){
    //     cout<<"You can vote"<<endl;
    // }

    // else{
    //     cout<<"you can not vote";
    // }

    // Switch
    // int age;
    // cout<<"Enter your age"<<endl;
    // cin>>age;

    // switch (age)
    // {
    // case 12:
    //     cout<<"you are 12 years old";
    //     break;

    // case 18:
    //     cout<<"you are 18 years old";
    //     break;

    // default:
    //     cout<<"you are neither 12 or 18 yeards old";
    //     break;
    // }

    // Loops
    // int index = 0;
    // while(index<34){
    //     cout<<"We are at index number "<<index<<endl;
    //     index++;
    // }

    // do{
    //     cout<<"We are at index number "<<index<<endl;
    //     index++;
    // }
    // while(index<45);

    // for (int i = 0; i < 34; i++)
    // {
    //     cout<<"We are at index number "<<i<<endl;
    // }

    // string harry = "Best!!";
    // cout<<harry;

    // int a, b;
    // cout << "Enter first number" << endl;
    // cin >> a;

    // cout << "Enter second number" << endl;
    // cin >> b;

    // cout << "a+b is " << add(a, b) << endl;

    // Arrays

    // int arr[]={1,3,4};
    // cout<<arr[1];

    // int marks[6];

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //     cin>>marks[i];
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    // }

    // int arr2d[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
    //     }
    // }

    // Type Casting

    // int a=324;
    // cout<<a/5<<endl;
    // cout<<(float)a/5<<endl;
    // int b= 87.34;
    // cout<<(int)b;

    // string name = "vansh";
    // cout<<" The name is "<<name;

    // string name = "vansh";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length of name is "<<name.length()<<endl;
    // cout<<"The name is "<<name.substr(0,2)<<endl;
    // cout<<"The name is "<<name.substr(2,3)<<endl;

    // PONTERS

    // int a = 16;
    // int *ptra;
    // ptra =&a;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptra<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<ptra<<endl;

    // Classes and Objects

    Employee har("Harry constructor", 40000, 24865);
    // har.name = "harry";
    // har.salary = 100;
    har.printDetails();
    har.getsecretPassword();
    // cout<<har.secretPassword;
    // cout<<"The name of our first employee is "<< har.name <<" and his salary is "<< har.salary<<" Dollars "<<endl;

    return 0;
}