#include <iostream>

using namespace std;

void main()
{
	/*
	//C��� å 284p ����2

	int num1(10), num2(20);
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	cout << "ptr1�� ����Ű�� ���� " << *ptr1 << ", ptr2�� ����Ű�� ���� " << *ptr2 << endl;
	*/



	/* 
	//C��� å 299������ ���� 1 (���� 307)

	int arr[5] = { 1, 2, 3, 4, 5 };

	int* ptr = arr; //int* ptr = &arr[0];
	//������ ���� ptr�� ����� ���� ������Ű�� ������ ����

	for (int i = 0; i < 5; ++i)
	{
		ptr = &arr[i];	//���⼭ ������ ptr++�� ���. �̰� ���ǵ����⿡.
		*ptr += 2;
		cout << arr[i] << endl;
	}

	//������� 3 4 5 6 7
	*/



	/*
	//C��� å 300������ ���� 2 (���� 307)
	int arr[5] = {1, 2, 3, 4, 5};

	int* ptr = arr;

	// 1�������� ptr�� ����� ���� �����Ű�鼭 �迭��ҿ� �����Ͽ���. ��, ptr++�� Ȱ���Ͽ� �迭�� �̵��Ͽ���.
	// 2�������� ptr�� ����� ���� �����Ű�� �ʰ�,
	// ptr�� ������� ���������� �Ͽ�, �� ����� ��ȯ�Ǵ� �ּ� ���� ���� ��� �迭��ҿ� �����Ͽ� ���� 2�� �������Ѻ���.

	for (int i = 0; i < 5; ++i)
	{
		*(ptr + i) += 2;

		cout << arr[i] << endl;
	}
	*/



	/*
	//C��� å 300������ ���� 3 (���� 308)
	int iSum(0);
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];

	for (int i = 0; i < 5; ++i)
	{
	iSum += *ptr;

	cout << "ptr�� ����Ű�� �� : " << *ptr << ", sum : " << iSum << endl;

	--ptr;

	//����������
	//iSum += *(ptr--); //���⼭ --ptr�̸� �ȵǰڱ���. isum�� �������� ���� �켱������ �ϴϱ�. �׸��� ���� ptr�� ���ҵǾ���ϱ� ������.
	}
	*/



	/* C��� å 300������ ���� 4 (���� 308)
	int iArr[6] = { 1,2,3,4,5,6 };
	int iTemp(0);

	//�迭�� ������ �ٲ㺸��.
	//	��, �迭�� �հ� �ڸ� ����Ű�� ������ ���� �ΰ��� �����ؼ� �̸� Ȱ���Ͽ� ����� ���� ������ �ڹٲ�� �Ѵ�.

	int* ptr1 = &iArr[0];
	int* ptr2 = &iArr[5];

	for (int i = 0; i < 3; ++i)
	{
		iTemp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = iTemp;

		++ptr1; //iArr[0]���� iArr[1]�� �ڸ� �̵�
		--ptr2;	//iArr[5]���� iArr[4]�� �ڸ� �̵�
	}

	for (int i = 0; i < (sizeof(iArr)/sizeof(iArr[0])); i++)
	{
		cout << "�迭"<< i << "�ڸ� > "<< iArr[i] << endl;
	}
	*/

}