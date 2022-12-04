#include <iostream>


using namespace std;

int main(){
    string str;
    getline (cin, name);
    for(int i=0; i<sizeof(str);i++){
        cout<<str[i];
        if(str[i]=='\0')break;
    }
}
