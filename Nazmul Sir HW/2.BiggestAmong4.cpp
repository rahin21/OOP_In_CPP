#include <iostream>

using namespace std;

int main(){

    int w, x, y, z;

    cout<<"---Program to find the greatest number among 4---\n\n";

    cout<<"   Enter 1st number: ";
    cin>>w;

    cout<<"   Enter 2nd number: ";
    cin>>x;

    cout<<"   Enter 3rd number: ";
    cin>>y;

    cout<<"   Enter 4th number: ";
    cin>>z;

    cout<<endl;

    // AND(&&) OR(||) NOT(!=)
    //     0         0        
    if(w > x && w > y && w > z){
        printf("   %i is the greatest number.\n",w);
        // cout<<"   "<<w<<" is the greatest number.\n";
    }//     1         0        0
    else if(x > y && x > z && x > w){
        printf("   %i is the greatest number.\n",x);
    }//     1         0        1
    else if(y > x && y > z && y > w){
        printf("   %i is the greatest number.\n",y);
    }
    else
    {
        printf("   %i is the greatest number.\n",z);
    }
    return 0;
}
