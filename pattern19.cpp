#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    int space,star;
   

    for(int i=0;i<rows;++i){
        
        star=rows-i;
        space=i*2;
     
        //star
        for(int j=0;j<star;++j){
            cout<<"*";
        }

        //space
        for(int j=0;j<space;++j){
            cout<<" ";
        }

        //star
        for(int j=0;j<star;++j){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<rows;++i){

        for(int j=0;j<i+1;++j){
            cout<<"*";
        }

        for(int j=1;j<((2*rows)-i*2)-1;++j){
            cout<<" ";
        }

        for(int j=0;j<i+1;++j){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}