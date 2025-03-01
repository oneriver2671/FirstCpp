

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
		cout << "입력: ";
		cin >> input_num;

		if(input_num > number)
			cout << "너무 커요!" << endl;
		else if (input_num < number)
			cout << "너무 작아요!" << endl;
		else {
			cout << "정답입니다!" << endl;
			cout << "number: " << number << ", input_num: " << input_num << endl;
			isOk = true;
		}
	}

	return 0;
}