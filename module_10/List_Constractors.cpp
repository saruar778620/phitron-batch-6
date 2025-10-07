// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int>l(10,45);
//    for(int val : l){
//         cout<<val<<"\n";
//    }

//     return 0;
// }

// // second list e implement kora
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     list<int>l(10,5);

//     list<int> l2(l);

//     for(int val : l2){
//         cout<<val<<"\n";
//     }
//     return 0;
// }


# include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l(10,6);
    int a[] = {1,3,5};

    list<int> l2(a,a+3);
    for(int val : l2){
        cout<<val<<"\n";
    }

    return 0;
}