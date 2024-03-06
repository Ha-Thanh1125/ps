
#include <iostream>
#include "PhanSo.h"
using namespace std;

int main() {
    PhanSo ps1, ps2, tong;

    cout << "Nhap phan so thu nhat:\n";
    ps1.nhap();

    cout << "Nhap phan so thu hai:\n";
    ps2.nhap();

   
    tong = ps1.cong(ps2);

   
    cout << "\nTong hai phan so la: ";
   
    ps1.xuat();
    cout << " + ";
    ps2.xuat();
    cout << " = ";
    tong.xuat();

    return 0;
}
