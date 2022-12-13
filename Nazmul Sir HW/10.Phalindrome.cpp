#include<iostream>

using namespace std;

int main()
{
    int len, i, j;
    string str;
    
    cout<<"Enter a string: ";
    cin>>str;
    
    len=str.length();
    char strRev[len];
    for(i=0, j=len-1;i<len;i++,j--){
        strRev[i]=str[j];
        cout<<str[j]<<endl;
    }
    for(i=0;i<len;i++){
        if(strRev[i]!=str[i]){
            cout<<"The string is not a phalindrome!";
            return 0;
        }
     
    }
    cout<<"The string is a phalindrome!";
    return 0;
}
