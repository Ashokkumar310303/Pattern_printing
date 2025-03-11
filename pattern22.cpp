#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    for(int i=0;i<(rows*2)-1;++i){

        for(int j=0;j<(rows*2)-1;++j){

            int topToDown=j;
            int leftToRight=i;
            int downToTop=(rows*2)-2-j;
            int rightToLeft=(rows*2)-2-i;

            int firstLower=min(topToDown,leftToRight);
            int secondLower=min(downToTop,rightToLeft);

            int finalMini=min(firstLower,secondLower);

            cout<<rows-finalMini;
        }
        cout<<endl;
    }


    return 0;
}