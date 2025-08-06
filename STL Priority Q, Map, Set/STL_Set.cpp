#include<bits/stdc++.h>
using namespace std;
int main(){
    
    set<int> s;
    int n;
    cin>>n;

    while(n--){
        int val;
        cin>>val;
        s.insert(val);
    }

    for(auto it = s.begin(); it != s.end(); it++){
        cout<< *it <<" ";
    }

    cout<<endl;

    int search_val;
    cin>>search_val;
    if(s.count(search_val)){
        cout<<"Value found"<<endl;
    }else{
        cout<<"Value not found"<<endl;
    }

    return 0;
}