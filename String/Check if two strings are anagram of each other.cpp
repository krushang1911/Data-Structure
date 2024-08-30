#include <iostream>
#include <string>

using namespace std;
void anagram(string str1, string str2){
   
    int i,j,count=0;
    int n1=str1.length();
    int n2=str2.length();
    char arr1[n1],arr2[n2];
    if(n1==n2){
        cout<<"first array is :"<<endl;
        for(i=0;i<n1;i++){
        arr1[i]=str1[i];
        cout<<arr1[i];
    }
    cout<<endl;
    cout<<"second array is :"<<endl;
    for(i=0;i<n1;i++){
        arr2[i]=str2[i];
        cout<<arr2[i];
    }
    cout<<endl;
    for(i=0;i<n1;i++){
        for(j=0;j<n1;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
    }
    if(count==n1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    }
    
}
int main(){
	 string str1,str2;
	cout << "Enter a string: ";
	getline(cin, str1);
	cout << "Enter another string: ";
	getline(cin, str2);
    anagram(str1,str2);
}