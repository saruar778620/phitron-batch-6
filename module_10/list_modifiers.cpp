#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10,20,30,40,50,60,70,80};
    list<int> l2 = {300,400};
    vector<int> v = {500,600};

   
    
    // //jekono possition e value ke accesce korar niyom                I
    // cout<<*next(l.begin(),2);                                        
                                                                        
    // //any possition e value ke insert korar niyom                    N            
    // l.insert(next(l.begin(),2),100);                                 

    // //second list add                                                S
    // l.insert(next(l.begin(),2),l2.begin(),l2.end());

    // //list e vector add
    // l.insert(next(l.begin(),2),v.begin(),v.end());                   E

    // //list er first and last e songkka add kora                      
    // l.push_front(5);                                                 R
    // l.push_back(3);
    // l.pop_front();
    // l.pop_back();     
    
    
    //  //list teke single nbr delete
    // l.erase(next(l.begin(),2));

    //  //list teke multipol nbr delete
    // l.erase(next(l.begin(),2),next(l.begin(),6));

    
    
    
    
    for(int val : l){
        cout<<val<<"\n";
    }
    return 0;
}