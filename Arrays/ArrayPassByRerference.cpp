#include<iostream>
using namespace std;

void arrRef(int arr[] ){  // or int * arr are same
    int n = sizeof(arr)/sizeof(int);
    
    cout<<"In Function: sizeof arr is:"<<sizeof(arr)<<" "<<n<<endl;
    // ans --> sizeof arr is : 4 bytes
    // because here the address of the array is stored in memory which has 8 byes storage

    
    


}


void printArray(int arr[], int n){

    arr[0]=110;

    cout<<"Printing in Function"<<endl;
     for(int i=0;i<n;i++){
       cout<<arr[i]<<endl;
   }
}


int main(){

   int arr[]= {1,2,3,4,5,6};

   int n = sizeof(arr)/sizeof(int);

   arrRef(arr);

   cout<<"In Main: sizeof arr is : "<<n<<endl;
   // ans : sizeof arr : 6 bytes which is actual size

   printArray(arr , n);

   
   cout<<"Printing in main"<<endl;
   for(int ar: arr){
       cout<<ar<<endl;
   }


}