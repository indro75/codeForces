#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    cin>>s;

    int length=s.size();

    if(length%2!=0){
        cout<<"NO";
    }
    else{
    string a = s.substr(0,length/2);
    string b = s.substr(length/2,length);


    if(a==b){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    }
}
