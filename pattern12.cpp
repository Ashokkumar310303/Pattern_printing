#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    for(int i=1;i<=rows;++i){

        for(int j=1;j<=i;++j){
            cout<<j;
        }
    
        for(int j=1;j<=(2*rows)-(i*2);++j){
            cout<<" ";
        }

        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }




    return 0;
}