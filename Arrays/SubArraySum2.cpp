#include<iostream>
using namespace std;


// PREFIX SUM APPROACH   T(N) = O(N*N)


int largest_SubArray_Sum(int arr[], int n){
       int prefix[100] = {0};
       prefix[0]= arr[0];

       for(int i=1;i<n;i++){
           prefix[i] = prefix[i-1]+arr[i];
       }


       int largest_sum =0;

       for(int i=0;i<n;i++){
           for(int j=i;j<n;j++){
              
               int subArray_sum = i>0? prefix[j]-prefix[i-1]:prefix[j];
               
               largest_sum = max(largest_sum, subArray_sum);
            
           }
       }

       return largest_sum;

}



int main(){


    int arr[]={-2,3,4,-1,5,-12,6,1,3};

    int n = sizeof(arr)/sizeof(int);

    cout<<largest_SubArray_Sum(arr, n);




}