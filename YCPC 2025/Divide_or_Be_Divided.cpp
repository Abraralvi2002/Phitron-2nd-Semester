#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,firdiv = 0,secdiv = 0;
    cin>>n>>x>>y;
    int digit;
    cin>>digit;
    for(int i = n;i>=1;i--){
        int mod = digit % 10;
        if(x == i){
            firdiv = mod;
        }
        if(y == i){
            secdiv = mod;
        }

        digit /= 10;
    }
    if(firdiv == 0 || secdiv == 0){
        cout<<"NO"<<endl;
    }else if(firdiv % secdiv == 0 || secdiv % firdiv == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}