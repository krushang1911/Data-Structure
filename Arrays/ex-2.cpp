#include<iostream>
using namespace std;
int smaximum(int size,int arr[]){
    int max=0,smax;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
    }
    return smax;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int smax=smaximum(size,arr);
    cout<<"Second Maximum Number is:"<<smax<<endl;
    return 0;
}