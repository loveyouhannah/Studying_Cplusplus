#include <iostream>
using namespace std;

void SwapByCopy(int _iFirst, int _iSecond);
void SwapByPointer(int* _iFirst, int* _iSecond);
void SwapByReference(int& _iFirst, int& _iSecond);

void main()
{
	int iFirst(1), iSecond(2);

	cout << "1.�ʱ�ȭ : " << iFirst << " " << iSecond << endl;

	SwapByCopy(iFirst, iSecond);
	cout << "2. SwapByCopy : " << iFirst << " " << iSecond << endl;
	
 	SwapByPointer(&iFirst, &iSecond);
	cout << "3. SwapByPointer : " << iFirst << " " << iSecond << endl;
	
	SwapByReference(iFirst, iSecond);
	cout << "4. SwapByReference : " << iFirst << " " << iSecond << endl;
}

///<summary> �� �����Ͽ� ���ÿ������� data ���簡 �Ͼ�� ���� ���� </summary>
void SwapByCopy(int _iFirst, int _iSecond)
{
	int iTemp(0);

	iTemp	 = _iFirst;
	_iFirst  = _iSecond;
	_iSecond = iTemp;
 }

///<summary> �����ͷ� data���� �ּҷ� �̵��� �� Swap </summary>
void SwapByPointer(int* _iFirst, int* _iSecond)
{
	int iTemp = 0;

	iTemp	 = *_iFirst;
	*_iFirst  = *_iSecond;
	*_iSecond = iTemp;
}

///<summary> ���۷���(����)�� data���� �ּҷ� �̵��� �� Swap </summary>
void SwapByReference(int& _iFirst, int& _iSecond)
{
	int iTemp(0);

	iTemp	 = _iFirst;
	_iFirst  = _iSecond;
	_iSecond = iTemp;
}