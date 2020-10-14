#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char someText1[64] = "Pls help";
	char someText2[64] = " i don't want to die";

	//-------------------------- Робимо через strcat ------------------------------------------

	printf("someText1 - %s\n", someText1);
	printf("someText2 - %s\n", someText2);
	strcat(someText1, someText2); // передаём someText2 в функцию

	printf("someText1 with someText2 - %s\n\n", someText1);

	//-------------------------- Придумываем велосипед ----------------------------------------

	char AnotherSomeText1[64] = "Pls help";
	char AnotherSomeText2[64] = " i don't want to die";

	int count1 = 0;
	while (AnotherSomeText1[count1] != 0)
	{
		count1++; // ищем конец первой строки
	}

	int count2 = 0; // для прохода по символам второй строки начиная с 0-й ячейки
	while (AnotherSomeText2[count2] != 0)
	{ // дописываем вконец первой строки символы второй строки
		AnotherSomeText1[count1] = AnotherSomeText2[count2];
		count1++;
		count2++;
	}
	printf("AnotherSomeText1 with AnotherSomeText2 - %s", someText1);

	return 0;
}