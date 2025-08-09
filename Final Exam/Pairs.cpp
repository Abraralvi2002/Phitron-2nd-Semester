#include<bits/stdc++.h>
using namespace std;

class cmp{
    public:
        bool operator()(pair<string,int> &p1, pair<string,int> &p2){
            if(p1.first == p2.first)
                return p1.second > p2.second;
            else
                return p1.first < p2.first;
        }
};

int main(){
    
    int n;
    cin>>n;
    vector<pair<string,int>> v(n);

    for(int i = 0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),cmp());

    for(int i = 0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }


    return 0;
}