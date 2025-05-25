#include<iostream>
using namespace std;
int main(){
    int a;
    char s[100];
    cin >> a ;
    cin.ignore();
    cin.getline(s,100);
    cout << a << endl << s << endl;
    return 0;
}