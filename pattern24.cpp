#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the rows:"<<endl;
    cin>>rows;

    for(int i=0;i<rows;++i){

        //space
        for(int j=0;j<rows-i-1;++j){
            cout<<" ";
        }

        //star
        for(int j=0;j<rows;++j){
            cout<<"*";
        }

        cout<<endl;
    }



    return 0;
}