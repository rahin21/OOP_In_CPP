//Write a c++ program to find the duplicate elements of an array
#include <iostream>

 using namespace std;

 int main()
 {  
     int i, j, n, count=0, z=0;

     cout<<" Enter the size of the array: ";
     cin>>n;
     cout<<endl;
     
     int arr[n], duplicates[n];

     for(i=0; i<n; i++){
        // cout<<" Enter array["<<i<<"]: ";
        printf(" Enter array[%d]: ",i);
        cin>>arr[i];
    }
    cout<<endl;
    //save the values in duplicate array
    for(i=0; i<n; i++){
        //find the duplicates
        for(j=0; j<n; j++){
            //    i=4           j=0
            if(arr[i]==duplicates[j]){
                count=0;
                break;
            }//arr[i]=1    arr[0]=1
            //   i=4     j=0
            if(arr[i]==arr[j]){
                count++;
            }

        }//count=2
        if(count >= 2){
            //               
            duplicates[z]=arr[i];
            z++;
        }
        count=0;
    }
    cout<<" The Duplicate elements are:\n";
    for(i=0;i<z;i++){
        cout<<" "<<duplicates[i]<<" ";
    }
    return 0;
 }

