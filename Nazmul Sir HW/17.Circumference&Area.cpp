#include<iostream>
#define pi 3.1416 

using namespace std;

void circle(int r){
    cout<<"The area of the circle is: "<< pi * r * r<<endl;
    cout<<"The area of the circle is: "<< 2 * pi * r<<endl;
}

int main()
{
    int radius;
    cout<<"Enter the radius: ";
    cin>>radius;
    circle(radius);
    return 0;
}