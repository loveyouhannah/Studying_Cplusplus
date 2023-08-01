#include <iostream>

using namespace std;

void Spin();

void main()
{
	Spin();
}

///<summary> 2차원 배열로 만들어서 회전하기 </summary>
void Spin()
{
	int iWidthLength(0);
	int iHeightLength(0);
	int iArray[3][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	iWidthLength = sizeof(iArray[0]) / sizeof(int);
	iHeightLength = sizeof(iArray) / sizeof(iArray[0]);// 2차원 배열의 세로 크기

	//첫 번째 출력
	for (int i = 0; i < iWidthLength; ++i)
	{
		for (int j = 0; j < iHeightLength; ++j)
		{
			cout << iArray[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;


	//두 번째 출력
	for (int j = 0; j < iWidthLength; ++j)
	{
		for (int i = iHeightLength - 1; 0 <= i; --i)
		{
			cout << iArray[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;


	//세 번째 출력
	for (int i = iHeightLength - 1; 0 <= i; --i)
	{
		for (int j = iWidthLength - 1; 0 <= j; --j)
		{
			cout << iArray[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;


	//네 번째 출력
	for (int j = iWidthLength - 1; 0 <= j; --j)
	{
		for (int i = 0; i < iWidthLength; ++i)
		{
			cout << iArray[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

}