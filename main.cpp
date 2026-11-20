/*
 * De bai: Nhap vao hai so thuc a va b tu ban phim.
 * Tinh tong va trung binh cong cua hai so roi in ra man hinh.
 * Input: Hai so thuc a, b
 * Output: Tong hai so va trung binh cong
 */
#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
    double tong = a + b;
    double trungBinh = tong / 2.0;
    cout << "Tong hai so: " << tong << endl;
    cout << "Trung binh cong: " << trungBinh << endl;
    return 0;
}
