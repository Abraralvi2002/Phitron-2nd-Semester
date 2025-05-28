#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ma = max({a,b,c});
    int mi = min({a,b,c});
    cout<<mi<<" "<<ma;
    return 0;
}