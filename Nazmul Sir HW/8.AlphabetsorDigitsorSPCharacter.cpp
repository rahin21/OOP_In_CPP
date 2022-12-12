#include <iostream>
 
using namespace std;
 
int main()
{
    char c;
    cout<< "Enter a character: ";
    cin>>c;
    
    if((int(c)>=97 && int(c)<=122)||(int(c)>=65 && int(c)<=90)){
        cout<<"The character is an Alphabet";
    }
    else if((int(c)>=48 && int(c)<=57)){
        cout<<"The character is a Digit";
    }
    else{
        cout<<"The character is a special character";
    }
    cout<<endl;
 
    return 0;
}