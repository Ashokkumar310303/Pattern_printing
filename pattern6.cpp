#include<iostream>
using namespace std;

int main(){

    int rows;

    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    for(int i=0;i<rows;++i){
        //space
        for(int j=0;j<rows-i;++j){
            cout<<" ";
        }

        //star
        for(int j=0;j<(2*i)+1;++j){
            cout<<"*";
        }

        for(int j=0;j<rows-i;++j){
            cout<<" ";
        }
        cout<<endl;
    }
}