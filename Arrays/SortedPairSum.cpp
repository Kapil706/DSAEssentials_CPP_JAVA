#include<iostream>
#include<vector>
using namespace std;

 /*
         arr= {10,22,28,29,30,40}    x = 54 

         pair in arr such that sum is equal to 54   sum closest to x 
         array is sorted . 

         // two pointer approach T(N) = O(N)
 */

pair<int, int> closestSum(vector<int> arr, int x){
  int s = 0;
    int e = arr.size()-1;
    int l,r;
    int diff= INT_MAX;
    while(s<=e)
    {
        if(abs(arr[s]+arr[e] -x)<diff){
            l = s;
            r = e;
            diff = abs(arr[s]+arr[e]-x);
          
        }
        else if(arr[s]+arr[e]<x){
            s++;
        }
        else{
            e--;
        }
    }
   return {arr[l], arr[r]};
    
}