#include <iostream>
#include <random>
using namespace std;

/* ����Ǯ��. ���� ���� */
int num_guess() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib(1, 99);  // [1, 99]

	int number = distrib(gen);

	while (1) {
		int input_num;
		cout << "�Է�: ";
		cin >> input_num;

		if (input_num > number)
			cout << "�ʹ� Ŀ��! ���̳��� ũ��: " << abs(number - input_num) << endl;
		else if (input_num < number)
			cout << "�ʹ� �۾ƿ�! ���̳��� ũ��: " << abs(number - input_num) << endl;
		else {
			cout << "�����Դϴ�!" << endl;
			cout << "number: " << number << ", input_num: " << input_num << endl;
			break;
		}
	}

	//int input_num;
	//bool isOk = false;

	//while (!isOk) {
	//	cout << "�Է�: ";
	//	cin >> input_num;

	//	if(input_num > number)
	//		cout << "�ʹ� Ŀ��!" << endl;
	//	else if (input_num < number)
	//		cout << "�ʹ� �۾ƿ�!" << endl;
	//	else {
	//		cout << "�����Դϴ�!" << endl;
	//		cout << "number: " << number << ", input_num: " << input_num << endl;
	//		isOk = true;
	//	}
	//}

	return 0;
}