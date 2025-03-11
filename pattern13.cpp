#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    int value=1;

    for(int i=0;i<rows;++i){

        for(int j=0;j<i+1;++j){
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }



    return 0;
}