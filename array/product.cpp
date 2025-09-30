#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int code[10],qty[10];
    char name[10][20];
    float price[10];
    double total[10];
    int i,n;

    cout << "Input Element Of Product :";
    cin >> n;
    for(i=0; i<n ; i++){
        cout << endl << "Input Code  :"; cin >> code[i];
        cout << "Input Name  :"; cin.ignore();cin.getline(name[i],20);
        cout << "Input Qty   :"; cin >> qty[i];
        cout << "Input Price :"; cin >> price[i];
        total[i] = qty[i] * price[i];
    }
    cout << setw(14) << "Code" << setw(14) << "Name" << setw(13) << "QTY" << setw(15) << "Price" << setw(15) << "Total" << endl;
    for(i=0 ; i<n ; i++){
    cout << setw(14) << code[i] << setw(14) << name[i] << setw(13) << qty[i] << setw(15) << price[i] << setw(15) << total[i] << endl;
    }
    return 0;
}