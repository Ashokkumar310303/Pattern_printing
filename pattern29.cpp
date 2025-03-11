#include<bits/stdc++.h>
using namespace std;

int main(){

    
    string name;
    cout<<"It will be printed in z format"<<endl;
    cout<<"Enter the name:"<<endl;
    cin>>name;

    if(name.length()%3==1){
        int first=0;
        int last=name.length()/3;
        int index=0;

        for(int i=0;i<=last;++i){
            for(int j=0;j<=last;++j){
                if(i==0 || j==last-i || i==last){
                    cout<<name[index++];
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    else{
        cout<<"It cannnot be printed";
    }



    return 0;
}