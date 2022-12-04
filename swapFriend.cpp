#include <iostream>

using namespace std;

class A{
    private:
        int a;
    friend void swaping();
};
class B{
    private:
        int b;
    friend void swaping();
};

void swaping(){
    A objectA;
    B objectB;
    cout<<"Enter a value for X: ";
    cin>>objectA.a;
    cout<<"Enter a value for Y: ";
    cin>>objectB.b;

    //objectA.a=10;
    //objectB.b=20;

    int temp;

    cout<<endl<<"Before swapping: "<<endl;
    cout<<"X= "<<objectA.a<<", Y= "<<objectB.b<<endl;

    temp = objectA.a;
    objectA.a = objectB.b;
    objectB.b = temp;

    cout<<endl<<"After swapping: "<<endl;
    cout<<"X= "<<objectA.a<<", Y= "<<objectB.b<<endl;
}

int main(){
    swaping();
    return 0;
}
