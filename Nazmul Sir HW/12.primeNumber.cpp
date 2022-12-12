#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i = num-1; i > 1; i--){
        if(num%i==0){
            cout<<"The number is not a prime number."<<endl;
            return 0;
        }
    }
    cout<<"The number is a prime number."<<endl;
    return 0;
}