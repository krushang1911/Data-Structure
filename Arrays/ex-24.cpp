#include<iostream>
using namespace std;
int Consecutive(int size,int arr[]){
    int i,j,temp,count=1,Max=1;
     for (i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(i=0;i<size;i++){
        int x=arr[i]+1;
        for(j=i;j<size;j++){
            if(x==arr[j]){
                count++;
                x=arr[j];
            }
        }
    Max=max(Max,count);
    }
    return Max;
}
main(){
    int arr[7]={13,81,82,83,84,85,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    int R=Consecutive(size,arr);
    cout<<R;
}