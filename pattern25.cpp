#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="1";

    int rows;
    cout<<"Enter the no of rows:"<<endl;
    cin>>rows;

    for(int i=0;i<rows;++i){
        cout<<s;
        cout<<endl;

        int index=0,count=0;
        char ch;
        string newWord;
        while(index<s.length()){
            if(index==0){
                ch=s[index];
                count++;
            }
            else if(s[index]==ch){
                count++;
            }
            else{
                newWord+=to_string(count);
                newWord+=ch;
                ch=s[index];
                count=0;
                continue;

            }
            index++;
        }

        newWord+=to_string(count);
        newWord+=ch;
        s=newWord;
    }

    return 0;
}