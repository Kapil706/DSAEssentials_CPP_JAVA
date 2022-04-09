#include<iostream>
using namespace std;

void rev_arr(int arr[], int n){

    int s = 0;
    int e = n-1;

    while(s<e){

        swap(arr[s],arr[e]);
        s +=1;
        e -=1;

    }

}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    for(int ar: arr){
        cout<<ar;
    }

    rev_arr(arr,n);
    cout<<endl;

    for(int ar: arr){
        cout<<ar;
    }

}