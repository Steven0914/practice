//
//  main.c
//  function2
//
//  Created by 신현욱 on 2022/05/23.
//

#include <stdio.h>
#include <stdlib.h>
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
//    printf("입금 \t출금\t 잔고\n");
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
//        printf("init(): 네트워크 장치를 초기화합니다.\n");
//        inited=1;
//    }
//    else
//        printf("init(): 이미 초기화가 되었으므로 초기화하지 않습니다.\n");
//}




//395
//원래 소스파일을 2개를 만들어서 하는거지만
//한개의 소스파일에 작성하기 위해 주석으로만 구별하겠습니다.

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
//    printf("정수를 입력하시오: ");
//    scanf("%d",&n);
//    printf("%d!은 %d입니다. \n",n,factorial(n));
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



