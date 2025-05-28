#include<bits/stdc++.h>
using namespace std;
int main(){
    int *ar = new int[3];
    for(int i = 0;i<3;i++){
        cin>>ar[i];
    }
    int ar2[5];
    for(int i = 0;i<3;i++){
        ar2[i] = ar[i];
    }
    delete ar;
    for(int i = 3;i<5;i++){
        cin>>ar2[i];
    }
    cout<<"2nd Array -> "<<endl;
    for(int i = 0;i<5;i++){
        cout<<ar2[i]<<" ";
    }
    cout<<endl<<"1st Array -> "<<endl;
    for(int i = 0;i<3;i++){
        cout<<ar[i]<<" "; //is printting garbage value because it is alredy deleted.
    }
}