#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cin >> a;
	if (a == 1) {
		cout << "�����";
	}
	else if (a == 2) {
		cout << "�������������������";
	}
	else if (a == 3) {
		cout << "�����������������";
	}
	else if (a == 4) {
		cout << "������";
	}
	else if (a == 5) {
		cout << "�������";
	}
	else {
		cout << "������";
	}
	return 0;
}