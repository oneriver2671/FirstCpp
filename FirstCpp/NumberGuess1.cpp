

#include <iostream>
#include <random>
using namespace std;


int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(1, 99);  // [1, 99]

	int number = distrib(gen);

	int input_num;
	bool isOk = false;

	while (!isOk) {
		cout << "�Է�: ";
		cin >> input_num;

		if(input_num > number)
			cout << "�ʹ� Ŀ��!" << endl;
		else if (input_num < number)
			cout << "�ʹ� �۾ƿ�!" << endl;
		else {
			cout << "�����Դϴ�!" << endl;
			cout << "number: " << number << ", input_num: " << input_num << endl;
			isOk = true;
		}
	}

	return 0;
}