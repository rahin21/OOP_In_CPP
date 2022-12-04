#include <iostream>

using namespace std;

int main()
{
    double num1,num2;
    char op;

    cout<<"Calculator:\n1.Enter '0' to exit.\n2.Operation Example: 2 + 3\n3.Operand and operators are divided space.\n\n";
    while(1){
        cin>>num1;
        if(num1 == 0){
            break;}
        cin>>op>>num2;


         if(op == '+'){
            cout<<"="<<num1+num2<<endl;
            cout<<endl;
        }else if(op == '-'){
            cout<<"="<<num1-num2<<endl;
            cout<<endl;
        }else if(op == '*'){
            cout<<"="<<num1*num2<<endl;
            cout<<endl;
        }else if(op == '/'){
            cout<<"="<<num1/num2<<endl;
            cout<<endl;
        }else{
            printf("Invalid operator!!!\n\n");
        }
    }
    return 0;

}
