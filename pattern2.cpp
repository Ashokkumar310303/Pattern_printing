#include<iostream>
using namespace std;

int main(){

    int rows;

    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    for(int i=0;i<rows;i++){
        for(int j=0;j<i+1;++j){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}