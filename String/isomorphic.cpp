#include <iostream>
#include <string>

using namespace std;

void isomorphic(string str1 , string str2){
   
    int n1=str1.length();
    int n2=str2.length();
    string a[4],b[4];
    int i,j,count1=0,count2=0,count3=0,c1[n1],c2[n2];
    if(n1==n2){
        for(i=0;i<n1;i++){
            a[i]=str1[i];
            cout<<a[i];
        }
        cout<<endl;
        for(i=0;i<n1;i++){
            b[i]=str2[i];
            cout<<b[i];
        }
        cout<<endl;
        for(i=0;i<n1;i++){
            if(a[i]==a[i+1]){
                count1++;
            }
            else{
                count1=0;
            }
            c1[i]=count1;
            if(b[i]==b[i+1]){
                count2++;
            }
            else{
                count2=0;
            }
            c2[i]=count2;
        }
        for(i=0;i<n1;i++){
                if(c1[i]==c2[i]){
                    count3++;
                }
                else{
                    count3=0;
                }
            }
            if(count3==n1){
                cout<<"string is isomorphic"<<endl;
            }
            else{
                cout<<"string is not isomorphic"<<endl;
            }
            
            }
    else{
        cout<<"string is not isomorphic"<<endl;
    }
}

int main(){
	string str1,str2;
	cout << "Enter a string: ";
	getline(cin, str1);
	cout << "Enter another string: ";
	getline(cin, str2);
    isomorphic(str1,str2);
}