#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char someText1[64] = "Pls help";
	char someText2[64] = " i don't want to die";

	//-------------------------- ������ ����� strcat ------------------------------------------

	printf("someText1 - %s\n", someText1);
	printf("someText2 - %s\n", someText2);
	strcat(someText1, someText2); // ������� someText2 � �������

	printf("someText1 with someText2 - %s\n\n", someText1);

	//-------------------------- ����������� ��������� ----------------------------------------

	char AnotherSomeText1[64] = "Pls help";
	char AnotherSomeText2[64] = " i don't want to die";

	int count1 = 0;
	while (AnotherSomeText1[count1] != 0)
	{
		count1++; // ���� ����� ������ ������
	}

	int count2 = 0; // ��� ������� �� �������� ������ ������ ������� � 0-� ������
	while (AnotherSomeText2[count2] != 0)
	{ // ���������� ������ ������ ������ ������� ������ ������
		AnotherSomeText1[count1] = AnotherSomeText2[count2];
		count1++;
		count2++;
	}
	printf("AnotherSomeText1 with AnotherSomeText2 - %s", someText1);

	return 0;
}