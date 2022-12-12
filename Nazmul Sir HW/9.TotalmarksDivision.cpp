#include <iostream>

using namespace std;

int main()
{
    int oop, ds, ode, fbs, ca, total;
    float percentage, division;
    cout<<"Enter the marks of Object Oriented programming: ";
    cin>>oop;
    
    cout<<"Enter the marks of Data Structure: ";
    cin>>ds;
    
    cout<<"Enter the marks of Ordinary Differential Equation: ";
    cin>>ode;
    
    cout<<"Enter the marks of Fundamental Of Business Studies: ";
    cin>>fbs;
    
    cout<<"Enter the marks of Computer Architecture: ";
    cin>>ca;
    
    total = oop + ds + ode + fbs + ca;
    percentage=total/500.0*100;
    cout<<"The total marks: "<<total<<endl;
    cout<<"The percentage :"<<percentage<<" %"<<endl;
    division = (4*total)/500.0;
    if(division>=3.00)
        cout<<"The Division   : 1st Division"<<endl;
    else if(division>=2.25 && division<=2.99)
        cout<<"The Division   : 2nd Division"<<endl;
    else if(division>=2.00 && division<=2.24)
        cout<<"The Division   : 3nd Division"<<endl;
    else
        cout<<"The Division   : Fail"<<endl;
    return 0;
}