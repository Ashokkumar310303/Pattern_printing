#include<iostream>
using namespace std;

int main(){

    int rows;
    
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    int star=0,space=0;

    for(int i=1;i<=(rows*2);++i){

        if(i<=rows){
            star=i;
            space=(rows*2)-(2*i);
        }
        else{
            star=i-(2*(i-rows));
            space=(i-rows)*2;
        }

        for(int j=1;j<=star;++j){
            cout<<"*";
        }

        for(int j=1;j<=space;++j){
            cout<<" ";
        }

        for(int j=1;j<=star;++j){
            cout<<"*";
        }

        cout<<endl;
    }



    return 0;
}