#include<iostream>
using namespace std;
int* majority(int size,int arr[],int &k){
    int count=0,Max=3;
    static int temp[5];
    k=0;
    for(int i=0;i<size;i++){
        count=0;
        for(int j=i;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                if(count>=Max){
                    temp[k]={arr[i]};
                    k++;
                }
            }
        }
    }
    return temp;
}
main(){
    int arr[6]={11,33,33,11,33,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=0;
    int* result=majority(size,arr,k);
    for(int i=0;i<k;i++){  //error
        cout<<result[i]<<" ";
    }
}
