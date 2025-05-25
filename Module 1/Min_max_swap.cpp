#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a = 10,b = 3,c=23,d=12,e=32;

    cout << min({a,b,c,d,e}) << endl;
    cout << max({a,b,c,d,e}) << endl;
    swap(a,b);
    cout << min(a,b) << endl;
    cout << max(a,b) << endl;

    return 0;
}