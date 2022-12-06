#include <iostream>


using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i=0; i<sizeof(str);i++){
        // cout<<int(str[i])<<endl;
        if(int(str[i])>=65 || int(str[i])<=90){
            str[i] = char(int(abs(str[i])+32));
            cout<<"smaller"<<int(str[i])+32<<endl;
        }
        else if(int(str[i])>=97 || int(str[i])<=122){
            str[i] = char(abs(int(str[i])-32));
            cout<<"bigger"<<int(str[i])-32<<endl;
        }
        if(str[i]=='\0')break;
    }
    cout<<str;
}
