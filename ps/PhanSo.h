#pragma once
class PhanSo
{private :
	int tuso, mauso;
public :
	PhanSo();
	PhanSo(int tu, int mau);
	void nhap();
	void xuat();
	PhanSo cong(const PhanSo& ps);
};