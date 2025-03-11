#include<iostream>
using namespace std;

int main(){

    int row,columns;

    cout<<"Enter the no of rows:"<<endl;
    cin>>row;
    cout<<"Enter the no of columns:"<<endl;
    cin>>columns;

    for(int i=0;i<row;++i){
        for(int j=0;j<columns;++j){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }




}