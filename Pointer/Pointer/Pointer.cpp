#include <iostream>

using namespace std;

void main()
{
	/*
	//C언어 책 284p 문제2

	int num1(10), num2(20);
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	cout << "ptr1가 가리키는 수는 " << *ptr1 << ", ptr2가 가리키는 수는 " << *ptr2 << endl;
	*/



	/* 
	//C언어 책 299페이지 문제 1 (답은 307)

	int arr[5] = { 1, 2, 3, 4, 5 };

	int* ptr = arr; //int* ptr = &arr[0];
	//포인터 변수 ptr에 저장된 값을 증가시키는 형태의 연산

	for (int i = 0; i < 5; ++i)
	{
		ptr = &arr[i];	//여기서 답지는 ptr++을 사용. 이게 주의도였기에.
		*ptr += 2;
		cout << arr[i] << endl;
	}

	//결과값은 3 4 5 6 7
	*/



	/*
	//C언어 책 300페이지 문제 2 (답은 307)
	int arr[5] = {1, 2, 3, 4, 5};

	int* ptr = arr;

	// 1번에서는 ptr에 저장된 값을 변경시키면서 배열요소에 접근하였다. 즉, ptr++을 활용하여 배열을 이동하였다.
	// 2번에서는 ptr에 저장된 값을 변경시키지 않고,
	// ptr을 대상으로 덧셈연산을 하여, 그 결과로 반환되는 주소 값을 통해 모든 배열요소에 접근하여 값을 2씩 증가시켜보자.

	for (int i = 0; i < 5; ++i)
	{
		*(ptr + i) += 2;

		cout << arr[i] << endl;
	}
	*/



	/*
	//C언어 책 300페이지 문제 3 (답은 308)
	int iSum(0);
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];

	for (int i = 0; i < 5; ++i)
	{
	iSum += *ptr;

	cout << "ptr가 가리키는 값 : " << *ptr << ", sum : " << iSum << endl;

	--ptr;

	//답지에서는
	//iSum += *(ptr--); //여기서 --ptr이면 안되겠구나. isum에 더해지는 것이 우선무여야 하니까. 그리고 나서 ptr이 감소되어야하기 때문에.
	}
	*/



	/* C언어 책 300페이지 문제 4 (답은 308)
	int iArr[6] = { 1,2,3,4,5,6 };
	int iTemp(0);

	//배열의 순서를 바꿔보자.
	//	단, 배열의 앞과 뒤를 가리키는 포인터 변수 두개를 선언해서 이를 활용하여 저장된 값의 순서를 뒤바꿔야 한다.

	int* ptr1 = &iArr[0];
	int* ptr2 = &iArr[5];

	for (int i = 0; i < 3; ++i)
	{
		iTemp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = iTemp;

		++ptr1; //iArr[0]에서 iArr[1]로 자리 이동
		--ptr2;	//iArr[5]에서 iArr[4]로 자리 이동
	}

	for (int i = 0; i < (sizeof(iArr)/sizeof(iArr[0])); i++)
	{
		cout << "배열"<< i << "자리 > "<< iArr[i] << endl;
	}
	*/

}