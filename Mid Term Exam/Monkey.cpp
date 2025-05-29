#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    while(cin.getline(s,100001)){
        int len = strlen(s);
        int j = 0;
        for(int i = 0;i<len;i++){
            if(s[i] != ' '){
                s[j++] = s[i];
            }
        }
        sort(s,s+j);
        for(int i = 0;i<j;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
