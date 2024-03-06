#include "PhanSo.h"
#include<iostream>

using namespace std;
PhanSo::PhanSo() {
    tuso = 0;
    mauso = 1;
}
PhanSo::PhanSo(int tu, int mau) {
    tuso = tu;
    mauso = mau;
}
void PhanSo::nhap() {
    cout << "Nhap tu so: ";
    cin >> tuso;
    cout << "Nhap mau so: ";
    cin >> mauso;

    while (mauso == 0) {
        cout << "Mau so khong duoc bang 0. Nhap lai mau so: ";
        cin >> mauso;
    }
}
void PhanSo::xuat() {
    cout << tuso << "/" << mauso;
}
PhanSo PhanSo::cong(const PhanSo& ps) {
    PhanSo tong;
    tong.tuso = tuso * ps.mauso + ps.tuso * mauso;
    tong.mauso = mauso * ps.mauso;
    return tong;
}

