#include <iostream>

 using namespace std;

 int main()
 {
     int i, j, n, count=0, z=0;

     cout<<" Enter the size of the array: ";
     cin>>n;
     cout<<endl;
     int arr[n],duplicates[n];
     for(i=0; i<n; i++){
        printf(" Enter array[%d]: ",i);
        scanf("%d", &arr[i]);

    }
    cout<<endl;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[i]==duplicates[j]){
                count=0;
                break;
            }
            if(arr[j]==arr[i]){
                count++;
            }

        }
        if(count>=2){
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

