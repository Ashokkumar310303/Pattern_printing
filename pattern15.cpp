#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    for(int i=0;i<rows;++i){
        char c='A';
        for(char j=0;j<rows-i;++j){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }




    return 0;
}