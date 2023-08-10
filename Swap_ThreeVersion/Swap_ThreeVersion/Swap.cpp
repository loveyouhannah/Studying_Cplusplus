#include <iostream>
using namespace std;

void SwapByCopy(int _iFirst, int _iSecond);
void SwapByPointer(int* _iFirst, int* _iSecond);
void SwapByReference(int& _iFirst, int& _iSecond);

void main()
{
	int iFirst(1), iSecond(2);

	cout << "1.초기화 : " << iFirst << " " << iSecond << endl;

	SwapByCopy(iFirst, iSecond);
	cout << "2. SwapByCopy : " << iFirst << " " << iSecond << endl;
	
 	SwapByPointer(&iFirst, &iSecond);
	cout << "3. SwapByPointer : " << iFirst << " " << iSecond << endl;
	
	SwapByReference(iFirst, iSecond);
	cout << "4. SwapByReference : " << iFirst << " " << iSecond << endl;
}

///<summary> 값 복사하여 스택영역에서 data 복사가 일어나는 것을 추적 </summary>
void SwapByCopy(int _iFirst, int _iSecond)
{
	int iTemp(0);

	iTemp	 = _iFirst;
	_iFirst  = _iSecond;
	_iSecond = iTemp;
 }

///<summary> 포인터로 data들의 주소로 이동한 뒤 Swap </summary>
void SwapByPointer(int* _iFirst, int* _iSecond)
{
	int iTemp = 0;

	iTemp	 = *_iFirst;
	*_iFirst  = *_iSecond;
	*_iSecond = iTemp;
}

///<summary> 레퍼런스(참조)로 data들의 주소로 이동한 뒤 Swap </summary>
void SwapByReference(int& _iFirst, int& _iSecond)
{
	int iTemp(0);

	iTemp	 = _iFirst;
	_iFirst  = _iSecond;
	_iSecond = iTemp;
}