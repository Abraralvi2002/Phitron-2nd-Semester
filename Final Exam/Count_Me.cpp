#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        map<string,int> mp;
        queue<string> q;


        while(ss >> word){
            mp[word]++;
            q.push(word);
        }

        int checker = INT_MIN;

        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second > checker){
                checker = it->second;
            }
        }

        while(!q.empty()){
            string front = q.front();
            q.pop();
            if(mp[front] == checker){
                cout<<front<<" "<<checker<<endl;
                break;
            }
        }
        
    }
    return 0;
}