#include <iostream>

using namespace std;

void Spin();

void main()
{
	Spin();
}

///<summary> 2���� �迭�� ���� ȸ���ϱ� </summary>
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
	iHeightLength = sizeof(iArray) / sizeof(iArray[0]);// 2���� �迭�� ���� ũ��

	//ù ��° ���
	for (int i = 0; i < iWidthLength; ++i)
	{
		for (int j = 0; j < iHeightLength; ++j)
		{
			cout << iArray[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;


	//�� ��° ���
	for (int j = 0; j < iWidthLength; ++j)
	{
		for (int i = iHeightLength - 1; 0 <= i; --i)
		{
			cout << iArray[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;


	//�� ��° ���
	for (int i = iHeightLength - 1; 0 <= i; --i)
	{
		for (int j = iWidthLength - 1; 0 <= j; --j)
		{
			cout << iArray[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;


	//�� ��° ���
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