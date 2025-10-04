#include<iostream>
using namespace std;
int main(){
    int a = 10,c=200;
    int *p1,*p2;
    cout << "Output A :" << a << endl;
    p1 = &a;
    p2 = &a;
    p2 = &c;
    cout << "Output P1 :" << *p1 << endl;
    cout << "Output P1 :" << *p2 << endl;
    return 0;
}