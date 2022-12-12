#include<iostream>

using namespace std;
int x=0,y=1,z;
void fibonacci(int n){
    if(n==1){
        cout<<" 0 ";
    }
    else if(n==2){
        cout<<"0 1 ";
    }
    else{
    printf("0  1 ");
    for(int i=1;i<n-1;i++)
    {
        printf(" %d ",x+y);
        z=y;
        y=x+y;
        x=z;
    }
    }
}

int main()
{
    int n;
    cout<<"How many fibonacci do you want:";
    cin>>n;
    cout<<"The Fibonacci series is: ";
    fibonacci(n);
}