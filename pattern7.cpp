#include<iostream>
using namespace std;

int main(){

    int rows;

    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;
    cout<<endl;

    for(int i=0;i<rows;++i){

        for(int j=0;j<i;++j){
            cout<<" ";
        }

        for(int j=0;j<(2*rows)-((2*i)+1);++j){
            cout<<"*";
        }

        for(int j=0;j<i;++j){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}