
#include <iostream>
#include <vector>    // std::vector

using namespace std;

int first_vector() {
	/* 배열 */
	int arr1[] = { 1, 2, 3 };
	cout << size(arr1) << endl;   // std::size()

	/* 벡터 */
	vector<int> A;   // 벡터 선언

	// 추가
	A.push_back(1);   // 마지막에 1을 추가
	A.push_back(4);   // 마지막에 4을 추가
	A.push_back(8);   // 마지막에 8을 추가
	A.insert(A.begin(), 7);  // 맨 앞에 7을 추가
	A.insert(A.begin() + 1, 8);   // index 1에 8을 추가
	A.insert(A.begin() + 1, 9);   // index 1에 9를 추가 (원래 1자리에 있던 값을 밀어냄)

	// 수정
	A[1] = -1;

	// 삭제
	A.pop_back();	// 마지막 값 삭제
	A.erase(A.begin() + 1);		// index 1에 해당하는 값 삭제
	// A.clear();	// 모든 값 삭제

	// 정보 가져오기
	int a_size = A.size();    // 데이터 개수
	int a_first = A.front();  // 처음 값
	int a_back = A.back();    // 마지막 값


	// 벡터 내 값들 모두 출력
	// 반복문 1.
	for (int num : A) {
		cout << num << " ";
	}

	// 반복문 2.
	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}

	cout << A.size() << endl;   // vector의 size()
	cout << size(A) << endl;    // std::size()

	return 0;
}