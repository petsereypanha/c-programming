#include<iostream>
using namespace std;
int main(){
    int j = 10;
    int *p1;
    int **p2;
    int ***p3;
    int ****p4;

    p1 = &j;
    cout << "Output j  :" << j << endl;
    cout << "Output P1 :" << *p1 << endl;
    cout << "Output Address J  :" << &j << endl;
    cout << "Output Address P1 :" << p1 << endl;

    p2 = &p1;
    cout << "Output P2 :" << **p2 << endl;
    cout << "Output Address P2 :" << *p2 << endl;
    
    p3 = &p2;
    cout << "Output P3 :" << ***p3 << endl;
    cout << "Output Address P3 :" << **p3 << endl;

      *p3  = &p1;
    cout << "Output P3 :" << ***p3 << endl;
    cout << "Output Address P3 :" << **p3 << endl;

    p4  = &p3;
    cout << "Output P4 :" << ****p4 << endl;
    cout << "Output Address P4 :" << ***p4 << endl;

    **p4  = &p1;
    cout << "Output P4 :" << ****p4 << endl;
    cout << "Output Address P4 :" << ***p4 << endl;
    return 0;
}