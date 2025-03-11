#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the rows:"<<endl;
    cin>>rows;

    int count;

    for(int i=0;i<(2*rows)-1;++i){

        
        if(i>=rows){
            count--;
        }
        else{
            count=i;
        }

        for(int j=0;j<=count;++j){
            cout<<j+1<<" ";
        }
        cout<<endl;


    }



    return 0;
}