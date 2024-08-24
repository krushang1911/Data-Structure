#include<iostream>
using namespace std;
bool check(int size,int arr[]){
    bool flag;
    for(int i=0;i<size-1;i++){
        if(arr[i]<arr[i+1]){
            flag=true;
        }
        else{
            return false;
        }
    }
    return flag;
}

main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    bool flag=check(size,arr);
    if(flag){
        cout<<"Array Is Shorted";
    }
    else{
        cout<<"Array Is Not Shorted";
    }
}
