#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    int currentValue=0;

    for(int i=0;i<rows;++i){
        
        if(i & 1){
            //odd
            currentValue=0;

        }
        else{
            currentValue=1;
        }

        for(int j=0;j<=i;++j){
            cout<<currentValue<<" ";
            currentValue^=1;
        }
        cout<<endl;
    }




    return 0;
}