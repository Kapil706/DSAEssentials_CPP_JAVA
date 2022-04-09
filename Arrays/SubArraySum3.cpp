#include<iostream>
using namespace std;


// Kadane's APPROACH 


int largest_SubArray_Sum(int arr[], int n){    // T(N) = O(N)  // linear

     int curr_sum =0;
     int max_sum =0;

     for(int i=0;i<n;i++){
         
         curr_sum = curr_sum + arr[i];

         if(curr_sum<0){
             curr_sum=0;
         }

         max_sum = max(max_sum,curr_sum);
     }

     return max_sum;


}


//For all negative


int largest_SubArraySum_Negative(int arr[], int n){
    int cs = 0;
    int largeSum = INT_MIN;

    for(int i = 0;i<n;i++){

        cs = cs+arr[i];

        if(cs<arr[i]){
            cs = arr[i];
        }

        largeSum = max(largeSum, cs);

    }
    return largeSum;
}


int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};

    int n = sizeof(arr)/sizeof(int);

    cout<<largest_SubArray_Sum(arr, n);
}