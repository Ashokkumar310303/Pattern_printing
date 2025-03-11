#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout<<"Enter the word:"<<endl;
    cin>>s;

    for(int i=0;i<s.length();++i){
        for(int j=0;j<s.length();++j){
            if(i==j){
                cout<<s[j];
            }
            else if(j==(s.length()-1-i)){
                cout<<s[j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }



    return 0;
}