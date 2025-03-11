#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout<<"Enter the word:"<<endl;
    cin>>s;

    int index=0;

    while(index<s.length()){
        if(index%4){
            cout<<" ";
        }
        else{
            cout<<s[index];
        }
        index++;
    }
    
    cout<<endl;

    index=1;
    while(index<s.length()){
        if(index & 1){
            cout<<s[index];
        }
        else{
            cout<<" ";
        }
        index++;
    }

    cout<<endl;


    index=2;
    while(index<s.length()){
        if((index-2)%4){
            cout<<" ";
        }
        else{
            cout<<s[index];
        }
        index++;
    }


    return 0;

}