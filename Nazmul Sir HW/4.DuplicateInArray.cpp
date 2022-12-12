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
           //arr[i]=1    arr[j]=1
            //   i=4     j=0
            if(arr[i]==arr[j]){
                count++;
                // count=1
            }
             //    i=4 =1        j=0 =1
            if(arr[i]==duplicates[j]){
                break;
            }

        }//count=2
        if(count >= 2){
            //z=2
            // duplicates[0] = 1              
            duplicates[z]=arr[i];
            z++;
        }
        count=0;
    }
    if(z>0){
        cout<<" The Duplicate elements are:\n";
        for(i=0;i<z;i++){
            cout<<" "<<duplicates[i]<<" ";
        }
    }
    else{
        cout<<"No Duplicates are found!";
    }
        return 0;
 }

