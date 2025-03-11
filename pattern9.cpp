#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    for(int i=0;i<rows;++i){
        for(int j=0;j<i+1;++j){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<rows-1;++i){
        for(int j=0;j<rows-i-1;++j){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;
    // ---------------------------------------------------------

    int star=0;

    for(int i=0;i<(rows*2);++i){
        
        if(i<=rows){
            star=i;
        }
        else{
            star--;
        }
        for(int j=0;j<star;++j){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}