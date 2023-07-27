#include <iostream>
using namespace std;

///<summary> 윤성우 C++의 4챕터의 문제 04-4 비트연산의 이해 </summary>
void main()
{
	//문제 1
	int num;// = 0; (답안본 이후: 초기화 안해도 된다.)
	cout << "정수를 입력해주시오." << endl;
	cin >> num;
	num = ~num;
	num += 1;
	cout << "정수를 바꿔서 출력하면 '" << num << "'이다." << endl;
	return;
	

	//문제2
	/*
	cout << "3 * 8 / 4 = " << endl;
	int num = 3;
	num = num << 3;
	num = num >> 2;
	cout << num << "입니다." << endl;
	return;
	*/
}