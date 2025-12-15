#include<bits/stdc++.h>
using namespace std;

int main(){
    //list declair and input
    list<int> L;
    int val;
    while (cin>>val && val != -1)
    {
        L.push_back(val);
    }

    //list sort kora and dublicate value delete kora
    L.sort();
    L.unique();

    //final list output
    for(int val: L){
        cout<<val<<" ";
    }
    cout<<"\n";

    return 0;

    
}