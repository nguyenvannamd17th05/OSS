#include<iostream>
using namespace std;
int tong(int a, int b)
{
	return a + b;
}
int hieu(int a, int b)
{
	return a - b;
}
int tich(int a, int b)
{
	return a * b;
}
float thuong(int a, int b)
{
	return (float)a / b;
}
int dtvuong(int a)
{
	return a * a;
}
float dttron(int a)
{
	return (float)a * a * 3.14;
}
int dtcn(int a, int b)
{
	return a * b;
}
int main()
{
	cout << "\Tong la: " << tong(5, 7);
	cout << "\nHieu la: " << hieu(5, 7);
	cout << "\nTich la: " << tich(5, 7);
	cout << "\nThuong la: " << thuong(5, 7);
	cout << "\nDien tich tron la: " << dttron(3);
	cout << "\nDien tich vuong la: " << dtvuong(3);
	cout << "\nDien tich chu nhat la: " << dtcn(3, 5);

}