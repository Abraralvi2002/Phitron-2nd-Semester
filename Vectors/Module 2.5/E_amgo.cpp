#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cu = 0, cl = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cu++;
        }else if(s[i] >= 'a' && s[i] <= 'z'){
            cl++;
        }
    }
    if(cu>cl){
        
    }
    return 0;
}