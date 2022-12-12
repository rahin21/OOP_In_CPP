#include <iostream>

using namespace std;

int main(){
    int n1, n2, max;
    cout<<"Enter two positive numbers: ";
    cin>>n1>>n2;
    max = (n1 > n2) ? n1 : n2;
    while(1){
        if(max%n1==0 && max%n2==0){
            printf("The LCM of %d and %d is: %d",n1,n2,max);
            break;
        }
        max++;
    }
    return 0;
}