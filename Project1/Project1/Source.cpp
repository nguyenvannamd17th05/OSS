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
int cvvuong(int a)
{
	return a * 4;
}
float cvtron(int a)
{
	return (float)a * 2 * 3.14;
}
int cvcn(int a, int b)
{
	return (a + b) * 2;
}
int main()
{
	cout << "\Tong la: " << tong(5, 7);
	cout << "\nHieu la: " << hieu(5, 7);
	cout << "\nTich la: " << tich(5, 7);
	cout << "\nThuong la: " << thuong(5, 7);
	cout << "\nCVvuong la: " << cvvuong(5);
	cout << "\nCVtron la: " << cvtron(3);
	cout << "\nCV chu nhat la: " << cvcn(3, 5);
}