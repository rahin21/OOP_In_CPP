//1. Write a c++ program to define all data type variables and assign user inputs

#include <iostream>

using namespace std;

int main(){
    string name, married;
    int age;
    float gpa;
    double height;
    char grade;
    bool maritalStatus;

    cout<<"Enter your name  : ";
    getline(cin, name);
    // cin>>name;

    cout<<"Enter your age   : ";
    cin>>age;

    cout<<"Enter your height: ";
    cin>>height;

    cout<<"Enter your GPA: ";
    cin>>gpa;

    cout<<"Enter your grade : ";
    cin>>grade;

    cout<<"(Enter 0 if False or 1 if True)\nEnter Your Marital Status: ";
    cin>>maritalStatus;

    cout<<"\nName   : "<<name<<endl;
    cout<<"Age    : "<<age<<" years"<<endl;
    cout<<"Height : "<<height<<" ft"<<endl;
    cout<<"Grade  : "<<grade<<endl;
    cout<<"GPA    : "<<gpa<<endl;
    married = maritalStatus ? " (True)" : " (False)";
    cout<<"Married: "<<maritalStatus<<married<<endl;
    return 0;
}
