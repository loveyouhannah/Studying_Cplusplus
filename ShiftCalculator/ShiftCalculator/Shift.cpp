#include <iostream>
using namespace std;

///<summary> ������ C++�� 4é���� ���� 04-4 ��Ʈ������ ���� </summary>
void main()
{
	//���� 1
	int num;// = 0; (��Ⱥ� ����: �ʱ�ȭ ���ص� �ȴ�.)
	cout << "������ �Է����ֽÿ�." << endl;
	cin >> num;
	num = ~num;
	num += 1;
	cout << "������ �ٲ㼭 ����ϸ� '" << num << "'�̴�." << endl;
	return;
	

	//����2
	/*
	cout << "3 * 8 / 4 = " << endl;
	int num = 3;
	num = num << 3;
	num = num >> 2;
	cout << num << "�Դϴ�." << endl;
	return;
	*/
}