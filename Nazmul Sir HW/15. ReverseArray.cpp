#include <iostream>

 using namespace std;

 int main()
 {
     int i, n, item;

     cout<<"Enter the size of the array: ";
     cin>>n;
     cout<<endl;
     int arr[n];
     cout<<"Enter the array: "<<endl;
     for(i = 0; i < n; i++)  
        cin>>arr[i];
    cout<<endl;

    cout<<"The reversed array is: { ";
    for(i=n-1; i>=0; i--){
        cout<<arr[i];
        if(i!=0)cout<<", ";
    }
    cout<<" }";
    return 0;
 }
