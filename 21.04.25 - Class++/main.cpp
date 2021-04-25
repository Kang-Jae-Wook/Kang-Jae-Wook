#include <iostream>

int main()
{
	//	if 문제
	//	1. int 형식의 4	인 value 변수를 선언한다.
	//	2. int 형식의 12	인 minus 변수를 선언한다.
	//	3. 1번째와 2번째를 뺀 값을 int result 변수에 넣는다.
	//	4. 만약 result 가 음수이면 "minus" 라는 문자열을 출력하고
	//	   아니면 "Plus" 라는 문자열을 출력한다
	{
		int value = 4;
		int minus = 12;

		int result = value - minus;
		
		if (result < 0)
		{
			std::cout << "Minus" << std::endl;
		}
		else
		{
			std::cout << "Plus" << std::endl;
		}
	}

	//	1.	int 형식의 배열 10칸인 arrays 변수를 선언한다
	//	2.	arrays 배열에는 0 부터 9까지의 순서를 순차적으로 삽입한다
	//	3.	for 문을 이용하여 arrays 값을 출력하되, 출력 시 배열의 맨 마지막 부터 출력한다
	// 	4.	출력 시 한 라인에 모두 출력할 것
	// 예시 ) 9,8,7,...,2,1,0
	{
		int array[10] = { 0, };

		for (int i = 0; i < 10; i++)
		{
			array[i] = i;
		}
		for(int j = 0; j < 10; j++)
			std::printf("%d\n", array[9 - j]);

	}

	//	int value 안에 임의의 숫자를 받는다(cin)
	//	받은 숫자에 10을 곱하여 출력한다
	{
		int value = 0;
		std::printf("\n\n");
		std::cin >> value;
		std::printf("%d\n", value * 10);
	}


	return 0;	// Exit code == -1, 0, 1 etc ...
}
