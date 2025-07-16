#include<bits/stdc++.h>
using namespace std;

void print_left_to_right(list<int> l){
    cout<<"L -> ";
    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
}

void print_right_to_left(list<int> l){
    list<int> tmp = l;
    tmp.reverse();
    cout<<"R -> ";
    for(int i : tmp){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    
    list<int> l;
    int q,x,val;
    cin>>q;
    for(int i = 1;i<=q;i++){
        cin>>x>>val;
        if(x == 0){
            l.push_front(val);
        }else if(x == 1){
            l.push_back(val);
        }else if(x == 2){
            int sz = l.size();
            if(val >= 0 && val < sz){
                l.erase(next(l.begin(),val));
            }
        }

        print_left_to_right(l);
        print_right_to_left(l);

    }
    return 0;
}