#include<iostream>
using namespace std;

int b_search(int arr[], int n, int val){
           
    int s=0;
    int e = n-1;

    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid]==val){
            return mid;
        }

        else if(arr[mid]>val){
            e = mid-1;
        }
        else 
           s = mid+1;
    }

    return -1; // element not found

}


int main(){

    // search space must be sorted for binary search
    int arr[]={10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Enter the Value to be Searched For: "<<endl;
    int key;
    cin>>key;
    
    int index = b_search(arr,n,key);
    if (index !=-1)
    {
        cout<<key<< " present at index "<< index <<endl;
    }
    else 
        cout<<key<< " Not Found"<<endl;
    

}