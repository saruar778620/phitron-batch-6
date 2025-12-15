#include<bits/stdc++.h>
using namespace std;

int main(){
    char C;
    cin>>C;

    if(C== 'z'){
        cout<<'a'<<"\n";
    }
    else{
        cout<<char(C+1);
    }

    return 0;
}