#include <iostream>
 
using namespace std;
 
int main()
{
    int i=0;
    string str;
    cout<< "Enter a string: ";
    getline(cin,str);
    cout<< "The Swap cased string: ";
    for(i=0; 1; i++){
        if(str[i]=='\0')break;
        if(int(str[i])>=97 && int(str[i])<=122){
            cout<<char(int(str[i])-32);
        }
        //str[i]=int(R)=82
        else if(int(str[i])>=65 && int(str[i])<=90){
            // 82+32=114
            cout<<char(int(str[i])+32);
        }
        else{
            cout<<str[i];
        }
    }
    cout<<endl;
 
    return 0;
}