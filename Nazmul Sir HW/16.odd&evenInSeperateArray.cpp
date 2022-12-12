#include<iostream>

using namespace std;

int main()
{
    int i, n, item,e=0,o=0;

     cout<<"Enter the size of the array: ";
     cin>>n;
     cout<<endl;

     int arr[n],odd[n],even[n];
     cout<<"Enter the array: "<<endl;
     for(i = 0; i < n; i++)  
        cin>>arr[i];
     for(i = 0; i < n; i++){
        if(arr[i]%2==0){
            even[e]=arr[i];
            e++;
        } else{
            odd[o]=arr[i];
            o++;
        }
     }
     cout<<"The Even array is: ";
     for(i=0;i<e;i++){
        cout<< even[i] <<" ";
     }
     cout<<endl;
     cout<<"The Odd array is: ";
     for(i=0;i<o;i++){
        cout<< odd[i] <<" ";
     }
     cout<<endl;

    cout<<endl;

}