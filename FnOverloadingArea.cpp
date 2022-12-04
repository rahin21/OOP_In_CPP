#include <iostream>
#define pi 3.14159
using namespace std;

class Area{
    public:
        float area(int a, int b){
            return a*b;
        };
        float area(float r){
            return r*r*pi;
        };
        float area(float a, float b, float c){
            float s;
            s=(a+b+c)/2;
            float area=s*(s-a)*(s-b)*(s-c);
            return area;
        };
};

int main()
{
    int radius, length, breadth, a, b, c;
    Area circle, triangle, rectangle;

    cout<<"-----For Circle's Area-----\n";
    cout<<"Enter Radius for the circle: ";
    cin>>radius;

    cout<<"\n-----For Rectangle's Area-----\n";
    cout<<"Enter Length for rectangle: ";
    cin>>length;
    cout<<"Enter Breadth for rectangle: ";
    cin>>breadth;

    cout<<"\n-----For Triangle's Area-----\n";
    cout<<"Enter 1st for triangle: ";
    cin>>a;
    cout<<"Enter 2nd for triangle: ";
    cin>>b;
    cout<<"Enter 3rd for triangle: ";
    cin>>c;

    cout<<"\n-----The Areas are-----\n";
    cout<<"The area of the Circle is: "<<circle.area(radius)<<endl;
    cout<<"The area of the Rectangle is: "<<rectangle.area(length, breadth)<<endl;
    cout<<"The area of the triangle is: "<<triangle.area(a, b, c)<<endl;


    return 0;
}
