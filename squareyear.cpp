#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int year;
        cin>>year;

        int root = sqrt(year);
        if(root*root==year){
            cout<<0<<' '<<root<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
        return 0;
}
