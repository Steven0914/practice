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
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &x);
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &y);
//
//	int larger;
//	larger = max(x, y);
//	printf("�� ū���� %d �Դϴ�. \n", larger);
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
//	printf("�˰� ���� ���丮���� ����? ");
//	scanf("%d", &n);
//	printf("%d!�� ���� %d�Դϴ�.", n, factorial(n));
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
//	printf("'c' �����µ����� ȭ���µ��� ��ȯ\n");
//	printf("'f' ȭ���µ����� �����µ��� ��ȯ\n");
//	printf("'q' ����\n");
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
//		printf("�޴����� �����ϼ���.");
//		choice = getchar();
//		if (choice == 'q')
//			break;
//		else if (choice == 'c')
//		{
//			printf("���� �µ�: ");
//			scanf("%lf", &temp);
//			printf("ȭ���µ�: %lf \n", C2F(temp));
//		}
//		else if (choice == 'f')
//		{
//			printf("ȭ�� �µ�: ");
//			scanf("%lf", &temp);
//			printf("�����µ�: %lf \n", F2C(temp));
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
//	printf("������ �Է��Ͻÿ�: ");
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
//	printf("������ �Է��Ͻÿ�: ");
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
//		printf("%d�� �Ҽ��Դϴ�.\n", n);
//	else
//		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
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
//	printf("�������� ����(������ ����): ");
//	scanf("%lf", &distance);
//	printf("�������� Ű(������ ����): ");
//	scanf("%lf", &height);
//	printf("����(������ ��): ");
//	scanf("%lf", &degrees);
//	radians = degrees * (3.141592 / 180.0);
//	tree_height = tan(radians) * distance + height;
//	printf("������ ����(������ ����): %lf \n", tree_height);
//}


//�ǽ� �ڷ�1
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
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &input);
//	if (even(input) == 1)
//		printf("even()�� ���: ¦��\n");
//	else if (even(input) == 0)
//		printf("even()�� ���: Ȧ��\n");
//	printf("absolute()�� ���: %d \n", absolute(input));
//	if (sign(input) == 1)
//		printf("signed()�� ���: ���\n");
//	else if (sign(input) == -1)
//		printf("signed()�� ���: ����\n");
//	else if (sign(input) == 0)
//		printf("signed()�� ���: 0\n");
//
//}


//�ǽ����� 2��
//double f_to_c(double f)
//{
//	return 5.0/9.0*(f-32.0);
//}
//int main()
//{
//	double temp;
//	printf("��ȯ�� ȭ�� �µ��� �����ּ���: ");
//	scanf("%lf",&temp);
//	printf("��ȯ�� ���� �µ��� %lf �Դϴ�. ", f_to_c(temp));
//}

//�ǽ� ���� 3�� 
//double cal_area(double radius)
//{
//	return 3.141592 * radius * radius;
//}
//
//int main()
//{
//	double r;
//	printf("���� �������� �Է��Ͻÿ�: ");
//	scanf("%lf", &r);
//	printf("���� ������ %f�Դϴ�.", cal_area(r));
//}


//�ǽ� ���� 4��
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
//	printf("�ҵ��� �Է��Ͻÿ�(����): ");
//	scanf("%d",&suip);
//	printf("�ҵ漼�� %lf�Դϴ�.", get_tax(suip));
//}

//�ǽ� ���� 5��
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


//�ǽ����� 6��
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
//	printf("(x1,y1),(x2,y2)�� ���� ������� �ۼ����ּ���:  ");
//	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//	printf("���� ������ �Ÿ��� %lf �Դϴ�.", get_distance(x1, y1, x2, y2));
//}

//�ǽ� ���� 7��
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
