#include<iostream>
using namespace std;

int main(){
    
    int rows;
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    char c='A';

    for(int i=0;i<rows;++i){

        for(int j=0;j<i+1;j++){
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }



    return 0;
}