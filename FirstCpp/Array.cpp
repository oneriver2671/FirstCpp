
#include <iostream>
using namespace std;

int first_array() {
    /* 배열 */
    int arr[] = { 1, 2, 3 };

    for (int i = 0; i < size(arr); i++) {
        cout << arr[i] << " ";
    }


    int my_arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
    cout << endl;
    cout << size(my_arr) << endl;


    // 홀수만 출력하기
    cout << "홀수만 출력: ";
    for (int value : my_arr) {
        if (value % 2 == 1) {
            cout << value << " ";
        }
    }
    cout << endl;

    // 숫자 감소 시 stop
    cout << "숫자 감소 시 출력 stop: ";
    for (int i = 0; i < size(my_arr); i++) {
        if (i > 0 && my_arr[i - 1] > my_arr[i])
            break;
        cout << my_arr[i] << " ";
    }


    char my_string[] = "Hello\0, World!";
    cout << my_string << endl;


	return 0;
}