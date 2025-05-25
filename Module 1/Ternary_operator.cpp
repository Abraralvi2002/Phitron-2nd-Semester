#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the number to check.." <<endl;
    cin >> a;
    (a%2==0) ? cout << "Even" : cout << "Odd" ;
    return 0;
}