#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int ID;
    char section;
    int batch;
    double cgpa;
};

int main() {
    
    Student a, b, c;

    cin.getline(a.name, 100);
    cin >> a.ID >> a.section >> a.batch >> a.cgpa;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.ID >> b.section >> b.batch >> b.cgpa;
    cin.ignore();
    cin.getline(c.name, 100);
    cin >> c.ID >> c.section >> c.batch >> c.cgpa;
    cout << a.name << " " << a.ID << " " << a.section << " " << a.batch << " " << a.cgpa << endl;
    cout << b.name << " " << b.ID << " " << b.section << " " << b.batch << " " << b.cgpa << endl;
    cout << c.name << " " << c.ID << " " << c.section << " " << c.batch << " " << c.cgpa << endl;
    return 0;
}
