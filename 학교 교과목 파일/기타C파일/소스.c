#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

//329
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
//int main(void)
//{
//	int x, y;
//	printf("정수를 입력하시오: ");
//	scanf("%d", &x);
//	printf("정수를 입력하시오: ");
//	scanf("%d", &y);
//
//	int larger;
//	larger = max(x, y);
//	printf("더 큰값은 %d 입니다. \n", larger);
//	return 0;
//}




//332
//int factorial(int n)
//{
//	long result = 1;
//	for (int i = 1; i <= n; i++)
//		result *= i;
//	return result;
//
//}
//
//int main()
//{
//	int n;
//	printf("알고 싶은 팩토리얼의 값은? ");
//	scanf("%d", &n);
//	printf("%d!의 값은 %d입니다.", n, factorial(n));
//
//}


//333
//int getchar()
//{
//	char a;
//	scanf("%c",&a);
//	return a;
//}
//void print0ptions()
//{
//	printf("'c' 섭씨온도에서 화씨온도로 변환\n");
//	printf("'f' 화씨온도에서 섭씨온도로 변환\n");
//	printf("'q' 종료\n");
//}
//
//double C2F(double c_temp)
//{
//	return 9.0 / 5.0 * c_temp + 32;
//
//}
//
//double F2C(double f_temp)
//{
//	return (f_temp - 32.0) * 5.0 / 9.0;
//
//}
//
//int main()
//{
//	char choice;
//	double temp;
//	while (1)
//	{
//		print0ptions();
//		printf("메뉴에서 선택하세요.");
//		choice = getchar();
//		if (choice == 'q')
//			break;
//		else if (choice == 'c')
//		{
//			printf("섭씨 온도: ");
//			scanf("%lf", &temp);
//			printf("화씨온도: %lf \n", C2F(temp));
//		}
//		else if (choice == 'f')
//		{
//			printf("화씨 온도: ");
//			scanf("%lf", &temp);
//			printf("섭씨온도: %lf \n", F2C(temp));
//		}
//		getchar();
//	}
//	return 0;
//}

//335
//long combination(int n, int r)
//{
//	return (factorial(n) / (factorial(r) * factorial(n - r)));
//}
//
//int get_interger(void)
//{
//	int n;
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n);
//	return n;
//}
//
//long factorial(int n)
//{
//	int i;
//	long result = 1;
//	for (i = 1; i <= n; i++)
//		result *= i;
//	return result;
//}
//
//int main(void)
//{
//	int a, b;
//	a = get_interger();
//	b = get_interger();
//	printf("C(%d, %d) = %d \n", a, b, combination(a, b));
//	return 0;
//}


//337
//int get_interger(void)
//{
//	int n;
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n);
//	return n;
//}
//
//int is_prime(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main(void)
//{
//	int n, result;
//	n = get_interger();
//	if (is_prime(n) == 1)
//		printf("%d은 소수입니다.\n", n);
//	else
//		printf("%d은 소수가 아닙니다.\n", n);
//	return 0;
//}

//346
//void disp_car(int car_number, int distance)
//{
//	int i;
//	printf("CAR #%d:", car_number);
//	for (i = 0; i < distance / 10; i++)
//		printf("*");
//	printf("\n");
//}
//
//int main()
//{
//	int i;
//	int car1_dist = 0, car2_dist = 0;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 6; i++)
//	{
//		car1_dist += rand() % 100;
//		car2_dist += rand() % 100;
//		disp_car(1, car1_dist);
//		disp_car(2, car2_dist);
//		printf("-----------------\n");
//	}
//	return 0;
//}

//353

//int main()
//{
//	double height, distance, tree_height, degrees, radians;
//	printf("나무와의 길이(단위는 미터): ");
//	scanf("%lf", &distance);
//	printf("측정자의 키(단위는 미터): ");
//	scanf("%lf", &height);
//	printf("각도(단위는 도): ");
//	scanf("%lf", &degrees);
//	radians = degrees * (3.141592 / 180.0);
//	tree_height = tan(radians) * distance + height;
//	printf("나무의 높이(단위는 미터): %lf \n", tree_height);
//}


//실습 자료1
//int even(int n)
//{
//	if (n % 2 == 0)
//		return 1;
//	else if (n % 2 == 1)
//		return 0;
//}
//
//int absolute(int n)
//{
//	if (n < 0)
//		n = ~n + 1;
//	return n;
//}
//
//int sign(int n)
//{
//	if (n < 0)
//		return -1;
//	else if (n > 0)
//		return 1;
//	else if (n == 0)
//		return 0;
//}
//
//int main()
//{
//	int input;
//	printf("정수를 입력하시오: ");
//	scanf("%d", &input);
//	if (even(input) == 1)
//		printf("even()의 결과: 짝수\n");
//	else if (even(input) == 0)
//		printf("even()의 결과: 홀수\n");
//	printf("absolute()의 결과: %d \n", absolute(input));
//	if (sign(input) == 1)
//		printf("signed()의 결과: 양수\n");
//	else if (sign(input) == -1)
//		printf("signed()의 결과: 음수\n");
//	else if (sign(input) == 0)
//		printf("signed()의 결과: 0\n");
//
//}


//실습과제 2번
//double f_to_c(double f)
//{
//	return 5.0/9.0*(f-32.0);
//}
//int main()
//{
//	double temp;
//	printf("변환할 화씨 온도를 적어주세요: ");
//	scanf("%lf",&temp);
//	printf("변환된 섭씨 온도는 %lf 입니다. ", f_to_c(temp));
//}

//실습 과제 3번 
//double cal_area(double radius)
//{
//	return 3.141592 * radius * radius;
//}
//
//int main()
//{
//	double r;
//	printf("원의 반지름을 입력하시오: ");
//	scanf("%lf", &r);
//	printf("원의 면적은 %f입니다.", cal_area(r));
//}


//실습 과제 4번
//double get_tax(int income)
//{
//	if (income > 1000)
//		return 80+(income-1000)*0.1;
//	if (income <= 1000)
//		return 0.08*income;
//}
//
//int main()
//{
//	int suip;
//	printf("소득을 입력하시오(만원): ");
//	scanf("%d",&suip);
//	printf("소득세는 %lf입니다.", get_tax(suip));
//}

//실습 과제 5번
//int b_rand()
//{
//		return rand() % 2;
//}
//
//int main()
//{
//	srand(time(NULL));
//	for (int i = 1; i <= 5; i++)
//	{
//		printf("%d ", b_rand());
//	}
//}


//실습과제 6번
//double get_distance(double x1, double y1, double x2, double y2)
//{
//	double dis= sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
//	return dis;
//
//}
//
//int main()
//{
//	double x1, x2, y1, y2;
//	printf("(x1,y1),(x2,y2)의 값을 순서대로 작성해주세요:  ");
//	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//	printf("두점 사이의 거리는 %lf 입니다.", get_distance(x1, y1, x2, y2));
//}

//실습 과제 7번
//int is_prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	printf("2 ");
//	for (int i = 3; i <= 100; i++)
//	{
//		if(is_prime(i)==1)
//		printf("%d ", i);
//	}
//	
//}
