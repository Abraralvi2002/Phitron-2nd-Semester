#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ospace1 = 0;
    int ispace1 = n;
    int middle = n/2 + 1;
    for (int i = 1; i < middle; i++) {
        for (int j = 1; j <= ospace1; j++){
            cout << " ";
        }
        cout << "\\";
        for (int j = 1; j <= ispace1 - 2; j++){
             cout << " ";
        }
        cout << "/" << endl;
        ospace1++;
        ispace1 -= 2;
    }
    for (int j = 1; j < middle; j++){
         cout << " ";
    }
    cout << "X" << endl;
    int ospace2 = middle - 2;
    int ispace2 = 1;
    for (int i = middle + 1; i <= n; i++) {
        for (int j = 1; j <= ospace2; j++){
            cout << " ";
        }
        cout << "/";
        for (int j = 1; j <= ispace2; j++){
            cout << " ";
        }
        cout << "\\" << endl;
        ospace2--;
        ispace2 += 2;
    }
    return 0;
}