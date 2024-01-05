#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	//235
	//int n, d, result;

	//printf("분자를 입력하시오: ");
	//scanf("%d", &n);

	//printf("분모를 입력하시오: ");
	//scanf("%d", &d);

	//if (d == 0)

	//{
	//	printf("0으로 나눌수 없습니다.\n");
	//}
	//else
	//{
	//	result = n / d;
	//	printf("결과는 %d입니다. \n", result);
	//}


	//236
	//int year;
	//printf("연도를 입력하시오: ");
	//scanf("%d", &year);
	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//	printf("%d년은 윤년입니다.\n",year);
	//else
	//	printf("%d년은 윤년이 아닙니다.\n", year);




	//239
	//int score;
	//printf("성적을 입력하시오: ");
	//scanf("%d", &score);

	//if (score >= 90)
	//	printf("학점 A\n");
	//else if (score >= 80)
	//	printf("학점 B\n");
	//else if (score >= 70)
	//	printf("학점 C\n");
	//else if (score >= 60)
	//	printf("학점 D\n");
	//else
	//	printf("학점 F\n");


	//240
	//char ch;
	//printf("문자를 입력하시오: ");
	//scanf("%c", &ch);

	//if (ch >= 'A' && ch <= 'Z')
	//	printf("%c는 대문자입니다.\n", ch);
	//else if (ch >= 'a' && ch <= 'z')
	//	printf("%c는 소문자입니다.\n", ch);
	//else if (ch >= '0' && ch <= '9')
	//	printf("%c는 대문자입니다.\n", ch);
	//else
	//	printf("%c는 기타문자 입니다.\n", ch);



	//241
	//char op;
	//int x, y, result;
	//printf("수식을 입력하시오(예: 2 + 5) \n");
	//printf(">>");
	//scanf("%d %c %d", &x, &op, &y);
	//if (op == '+')
	//	result = x + y;
	//else if (op == '-')
	//	result = x - y;
	//else if (op == '*')
	//	result = x * y;
	//else if (op == '/')
	//	result = x / y;
	//else if (op == '%')
	//	result = x % y;
	//else
	//	printf("지원하지 않는 연산자입니다. \n");

	//printf("%d %c %d = %d \n", x, op, y, result);




	//243
	//double a, b, c, dis;
	//printf("계수 a,계수 b,계수 c를 차례대로 입력하시오: ");
	//scanf("%lf %lf %lf", &a, &b, &c);
	//if (a == 0)
	//	printf("방정식의 근은 %f입니다.", -c / b);
	//else
	//{
	//	dis = b * b - 4.0 * a * c;
	//	if (dis >= 0)
	//	{
	//		printf("방정식의 근은 %f입니다.\n", (-b + sqrt(dis)) / (2.0 * a));
	//		printf("방정식의 근은 %f입니다.\n", (-b - sqrt(dis)) / (2.0 * a));
	//	}
	//	else
	//		printf("실근이 존재하지 않습니다.");
	//}


	//249
	//int month, days;
	//printf("달을 입력하시오: ");
	//scanf("%d", &month);
	//switch (month)
	//{
	//case 2:
	//	days = 28;
	//	break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	days = 30;
	//default:
	//	days = 31;
	//	break;
	//}
	//printf("%d월의 일수는 %d입니다.\n", month, days);

	//251
	//char op;
	//int x, y, result;
	//printf("수식을 입력하시오(예: 2 + 5) \n");
	//printf(">>");
	//scanf("%d %c %d", &x, &op, &y);

	//switch (op)
	//{
	//case '+':
	//	result = x + y;
	//	break;
	//case '-':
	//	result = x - y;
	//	break;
	//case '*':
	//	result = x * y;
	//	break;
	//case '/':
	//	result = x / y;
	//	break;
	//case '%':
	//	result = x % y;
	//	break;

	//default:
	//	printf("지원하지 않는 연산자입니다.\n");
	//	break;
	//}
	//printf("%d %c %d = %d \n", x, op, y, result);


}