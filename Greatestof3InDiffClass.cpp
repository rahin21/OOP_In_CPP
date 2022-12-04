#include <iostream>

using namespace std;

class Number1{
    int x;
    friend void greatest();
};

class Number2{
    int y;
    friend void greatest();
};

class Number3{
    int z=10;
    friend void greatest();
};

void greatest(){
    Number1 n1;
    Number2 n2;
    Number3 n3;

    cout<<"Enter X: ";
    cin>>n1.x;

    cout<<"Enter Y: ";
    cin>>n2.y;

    cout<<"Enter Z: ";
    cin>>n3.z;

    cout<<endl;

    if(n1.x > n2.y && n1.x > n3.z){
        printf("%i is the greatest number.\n",n1.x);
    }
    else if(n2.y > n1.x && n2.y > n3.z){
        printf("%i is the greatest number.\n",n2.y);
    }
    else
    {
        printf("%i is the greatest number.\n",n3.z);
    }
}

int main()
{
    greatest();
    return 0;
}
