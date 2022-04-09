/*  */

#include<iostream>
#include<vector>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int lbound=Val;
    if(lbound<A[0]){
        return -1;
        
    }
    int s=0;
    int e = A.size()-1;
    
    while(s<=e){
        
        int mid = s+e/2;
        
        if(A[mid]==Val){
            return lbound;
        }
        else if(A[mid]>Val){
            e= mid-1;
        }
        else{
            s = mid+1;
        }
        
        
    }
    
    return A[e];
    
    
}