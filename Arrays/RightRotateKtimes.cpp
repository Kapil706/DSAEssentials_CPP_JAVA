#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& arr, int l , int r){
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;

    }

}

void rotateRightKTimes(vector<int>&arr, int n, int k){

// T(n) = O(n)
k = k%n;

if(k<0){
    k += n;
}

    reverse(arr, 0, n - k-1);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n - 1);
   // return arr; 




}


int main(){

  vector<int> arr = {1,2,3,4,5,6};
  int k = 7;
  

  rotateRightKTimes(arr, arr.size(),k);

}