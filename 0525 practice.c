#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//385
//void sub()
//{
//    static int scount =0;
//    int acount =0;
//    printf("scount = %d\t",scount);
//    printf("acount = %d\n",acount);
//    scount++;
//    acount++;
//}
//
//int main()
//{
//    sub();
//    sub();
//    sub();
//}

//388
//void save(int amount)
//{
//    static long balance=0;
//
//    if(amount>=0)
//        printf("%d \t\t",amount);
//    else
//        printf("\t %d \t",-amount);
//
//    balance +=amount;
//    printf("%d \n",balance);
//}
//
//int main()
//{
//    printf("====================\n");
//    printf("�Ա� \t���\t �ܰ�\n");
//    printf("====================\n");
//    save(10000);
//    save(50000);
//    save(-10000);
//    save(30000);
//    printf("====================\n");
//
//}





//389
//void init();
//int main()
//{
//    init();
//    init();
//    init();
//}
//
//void init()
//{
//    static int inited=0;
//    if(inited==0)
//    {
//        printf("init(): ��Ʈ��ũ ��ġ�� �ʱ�ȭ�մϴ�.\n");
//        inited=1;
//    }
//    else
//        printf("init(): �̹� �ʱ�ȭ�� �Ǿ����Ƿ� �ʱ�ȭ���� �ʽ��ϴ�.\n");
//}




//395
//���� �ҽ������� 2���� ���� �ϴ°�����
//�Ѱ��� �ҽ����Ͽ� �ۼ��ϱ� ���� �ּ����θ� �����ϰڽ��ϴ�.

//random.c
//#define SEED 17
//int MULT=25173;
//int INC=13849;
//int MOD=65536;
//static unsigned int seed = SEED;
//
//unsigned random_i()
//{
//    seed =(MULT*seed+INC)%MOD;
//    return seed;
//}
//
//double random_f()
//{
//    seed= (MULT*seed+INC)%MOD;
//    return seed/(double)MOD;
//}

//main.c
//extern unsigned random_i(void);
//extern double random_f();
//
//extern int MOD;
//
//int main()
//{
//    int i;
//
//    MOD=10;
//    for(i=0; i<10; i++)
//        printf("%d ", random_i());
//    printf("\n");
//}


//397
//long factorial(int n)
//{
//    printf("factorial(%d)\n",n);
//    if(n<=1)
//        return 1;
//    else
//        return n*factorial(n-1);
//}
//
//int main()
//{
//    int n;
//    printf("������ �Է��Ͻÿ�: ");
//    scanf("%d",&n);
//    printf("%d!�� %d�Դϴ�. \n",n,factorial(n));
//}

//400
//void print_binary(int x);
//
//int main()
//{
//    print_binary(9);
//    printf("\n");
//}
//
//void print_binary(int x)
//{
//    if(x>0)
//    {
//        print_binary(x/2);
//        printf("%d",x%2);
//    }
//}


//401
//int gcd(int x, int y);
//
//int main()
//{
//    printf("%d\n",gcd(30,20));
//
//}
//
//int gcd(int x, int y)
//{
//    if(y==0)
//        return x;
//    else
//        return gcd(y,x%y);
//}



//�ǽ����� 1��

//static �̿�
//int add(int a, int b);
//int bbe(int a, int b);
//int gob(int a, int b);
//int na(int a, int b);

//int main()
//{
//	int a1, a2;
//	char aaa;
//	while (1)
//	{
//	printf("�ΰ��� ���� �����ڸ� �Է��Ͻÿ�: ");
//	scanf("%d %c %d",&a1,&aaa,&a2);
//	
//	if (aaa == '+')
//		add(a1, a2);
//	else if (aaa == '-')
//		bbe(a1, a2);
//	else if (aaa == '*')
//		gob(a1, a2);
//	else if (aaa == '/')
//		na(a1, a2);
//	else
//		break;
//	}
//}
//
//int add(int a, int b)
//{
//	static int count1 = 0;
//	count1++;
//	printf("������ �� %d�� ���� �Ǿ����ϴ�.\n", count1);
//	printf("������: %d\n", a + b);
//}
//
//int bbe(int a, int b)
//{
//	static int count2 = 0;
//	count2++;
//	printf("������ �� %d�� ���� �Ǿ����ϴ�.\n", count2);
//	printf("������: %d\n", a - b);
//}
//
//int gob(int a, int b)
//{
//	static int count3 = 0;
//	count3++;
//	printf("������ �� %d�� ���� �Ǿ����ϴ�.\n", count3);
//	printf("������: %d\n", a * b);
//}
//
//int na(int a, int b)
//{
//	static int count4 = 0;
//	count4++;
//	printf("�������� �� %d�� ���� �Ǿ����ϴ�.\n", count4);
//	printf("������: %d\n", a / b);
//}




//�������� �̿�
//int add(int a, int b);
//int bbe(int a, int b);
//int gob(int a, int b);
//int na(int a, int b);
//
//int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
//
//int main()
//{
//	int a1, a2;
//	char aaa;
//	while (1)
//	{
//	printf("�ΰ��� ���� �����ڸ� �Է��Ͻÿ�: ");
//	scanf("%d %c %d",&a1,&aaa,&a2);
//	
//	if (aaa == '+')
//		add(a1, a2);
//	else if (aaa == '-')
//		bbe(a1, a2);
//	else if (aaa == '*')
//		gob(a1, a2);
//	else if (aaa == '/')
//		na(a1, a2);
//	else
//		break;
//	}
//}
//
//int add(int a, int b)
//{
//
//	count1++;
//	printf("������ �� %d�� ���� �Ǿ����ϴ�.\n", count1);
//	printf("������: %d\n", a + b);
//}
//
//int bbe(int a, int b)
//{
//
//	count2++;
//	printf("������ �� %d�� ���� �Ǿ����ϴ�.\n", count2);
//	printf("������: %d\n", a - b);
//}
//
//int gob(int a, int b)
//{
//
//	count3++;
//	printf("������ �� %d�� ���� �Ǿ����ϴ�.\n", count3);
//	printf("������: %d\n", a * b);
//}
//
//int na(int a, int b)
//{
//	count4++;
//	printf("�������� �� %d�� ���� �Ǿ����ϴ�.\n", count4);
//	printf("������: %d\n", a / b);
//}



//�ǽ����� 2��
//int i = 0;
//
//int get_dice_face()
//{
//	static a = 0;
//	static b = 0;
//	static c = 0;
//	static d = 0;
//	static e = 0;
//	static f= 0;
//	int r = rand() % 6;
//	switch (r)
//	{
//	case 0:
//		a++;
//		break;
//	case 1:
//		b++;
//		break;
//	case 2:
//		c++;
//		break;
//	case 3:
//		d++;
//		break;
//
//	case 4:
//		e++;
//		break;
//	case 5:
//		f++;
//		break;
//	}
//	i++;
//	if (i == 100)
//	{
//		printf("1=>%d\n", a);
//		printf("2=>%d\n", b);
//		printf("3=>%d\n", c);
//		printf("4=>%d\n", d);
//		printf("5=>%d\n", e);
//		printf("6=>%d\n", f);
//	}
//}
//
//
//int main()
//{
//	
//	srand(time(NULL));
//	for (int j = 0; j < 100; j++)
//		get_dice_face();
//
//}

//�ǽ� ���� 3��

//int add(int a);
//
//int main()
//{
//	int a;
//	printf("������ ���� �Է��Ͻÿ�: ");
//	scanf("%d", &a);
//	printf("1���� %d������ ��: %d", a, add(a));
//}
//
//int add(int a)
//{
//	if (a <= 1)
//		return 1;
//	else
//		return a + add(a - 1);
//}




//�ǽ����� 4��
//#define PASS 1234
//
//int check(int a);
//
//int main()
//{
//	int input;
//	int bull = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		printf("��й�ȣ: ");
//		scanf("%d", &input);
//		bull=check(input);
//		if (bull == 1)
//		{
//			printf("�����Դϴ�.");
//			break;
//		}
//	}
//	if(bull!=1)
//		printf("�α��� �õ�Ƚ�� �ʰ�");
//}
//
//int check(int a)
//{
//	if (a == PASS)
//		return 1;
//	else
//		return 0;
//}