
#include <iostream>
using namespace std;

///<summary> ���������͸� ����Ͽ� �ΰ��� ������ ���� ��ȭ��Ű�� SWAP�Լ� </summary>
void swap(int** a, int** b)
{
	int* temp = *a; // ��
	*a = *b;		// ��
	*b = temp;		// ��

	**b = 10;		// ��
}

void main()
{
	int r(1), l(-1);

	int* pr = &r;
	int* pl = &l;

	swap(&pr, &pl);

	// ��
	cout << "*pr : " << *pr << "\t*pl : " << *pl << endl;
}