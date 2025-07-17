#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> checker(n);
    for(int i = 0;i<n;i++){
        checker[i] = i+1;
    }
    int x,y;
    cin>>x;
    vector<int> vx(x);
    for(int i = 0;i<x;i++){
        cin>>vx[i];
    }
    cin>>y;
    vector<int> vy(y);
    for(int i = 0;i<y;i++){
        cin>>vy[i];
    }
    vx.insert(vx.end(),vy.begin(),vy.end());

    sort(vx.begin(),vx.end());
    
    vx.erase(unique(vx.begin(), vx.end()), vx.end());


    if(checker == vx){
        cout<<"I become the guy"<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}