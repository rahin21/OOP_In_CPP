#include <iostream>

using namespace std;

int factorial(int num);

int main()
{
    int num, fact;
    cout<<"Enter a number: ";
    cin>>num;
    fact = factorial(num);
    printf("The factorial of %d is: %d\n",num,fact);
}

int factorial(int num){
    if(num!=1){
        return num*factorial(num-1);
    }
    else{
        return num;
    }
}
