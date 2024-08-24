// Move Zeros to end
#include<iostream>
using namespace std;
void move_to_end(int size,int arr[]){
    int i=0,j,count=0;
    for(i=0;i<size;i++){
        if(arr[i]==0){
            j=i;count++;
            for(j;j<size;j++){
                arr[j]=arr[j+1];
            }
        }
    }
    for(i=size;i>size-count-1;i--){
        arr[i]=0;
    }
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
main(){
    int arr[10]={0,1,0,2,0,3,0,4,0,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    move_to_end(size,arr);
}