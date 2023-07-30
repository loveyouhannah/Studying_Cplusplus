
#include <iostream>
using namespace std;

///<summary> 이중포인터를 사용하여 두개의 변수의 값을 변화시키는 SWAP함수 </summary>
void swap(int** a, int** b)
{
	int* temp = *a; // ①
	*a = *b;		// ②
	*b = temp;		// ③

	**b = 10;		// ④
}

void main()
{
	int r(1), l(-1);

	int* pr = &r;
	int* pl = &l;

	swap(&pr, &pl);

	// ⑤
	cout << "*pr : " << *pr << "\t*pl : " << *pl << endl;
}