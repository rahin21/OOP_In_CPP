#include <iostream>

using namespace std;

class fact{

    int totalFact = 1;
    int n;
    public:
        fact(int n){
            for(int i=n; i>0; i--){
                totalFact *= i;
            }
            cout<<totalFact;
        };
};

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The Factorial of "<< n <<" is : ";
    fact object(n);
    cout<<endl;
    return 0;
}
