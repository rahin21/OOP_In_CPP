#include <iostream>

 using namespace std;

 int main()
 {
     int i, n, item;

     cout<<"Enter the size of the array: ";
     cin>>n;
     cout<<endl;
     int arr[n];
     for(i = 0; i < n; i++){
        printf("Enter array[%d]: ",i);
        scanf("%d", &arr[i]);

    }
    cout<<endl;

    cout<<"Enter the element to search it: ";
    scanf("%d", &item);
    cout<<endl;
    //       0<5
    for(i=0; i<n; i++){
        //   5 != arr[4](5)
        if (item==arr[i]){
            printf("The element: %d is in Index: %d.\n",arr[i],i);
            // break;
            return 0;
        }
    }
    printf("The element is not found!\n");
    return 0;
 }
