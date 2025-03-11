#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    int firstValue=rows;
    int secondValue=1;
    bool change=false;

    for(int i=0;i<rows;++i){
        for(int j=0;j<rows;++j){

            if(i==j && j==(rows-i-1)){

                cout<<firstValue;
                firstValue++;
                secondValue--;
                change=true;
            }

            else if(i==j){
                cout<<firstValue;
                if(change){
                    firstValue++;
                }
                else{
                    firstValue--;
                }
            }
            else if(j==(rows-i-1)){
                cout<<secondValue;
                if(change){
                    secondValue--;
                }
                else{
                    secondValue++;
                }
                
            }
            else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }



    return 0;
}