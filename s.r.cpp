#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cin >> a;
	if (a == 1) {
		cout << "плохо";
	}
	else if (a == 2) {
		cout << "неудовлитворительно";
	}
	else if (a == 3) {
		cout << "удовлетворительно";
	}
	else if (a == 4) {
		cout << "хорошо";
	}
	else if (a == 5) {
		cout << "отлично";
	}
	else {
		cout << "ошибка";
	}
	return 0;
}