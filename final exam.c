#include <stdio.h>

//기컴프 기말과제
//수학과2020015029 신현욱


//1번 문제(성적 관리 프로그램)
//int total(int kor, int eng, int mat); // 세과목의 점수를 넘겨받아 총점 반환
//double average(int tot); // 총점을 넘겨 받아 평균 반환
//void print_title(void); //점수를 제외한 나머지 부분 출력
//char get_grade(double *avg)
//{
//    if(*avg>=90)
//        return 'A';
//    else if(*avg<90&&*avg>=80)
//        return 'B';
//    else if(*avg<80&&*avg>=70)
//        return 'C';
//    else if(*avg<70&&*avg>=60)
//        return 'D';
//    else
//        return 'F';
//}
//
//int main()
//{
//    int a,b,c,hab;
//    double pyoung;
//    char grade;
//    printf("세 과목의 점수 입력 : ");
//    scanf("%d %d %d",&a,&b,&c);
//    hab=total(a,b,c);
//    pyoung=average(hab);
//    grade=get_grade(&pyoung);
//    print_title();
//    printf("%d\t%d\t%d\t%d\t%.1lf\t%c\n",a,b,c,hab,pyoung,grade);
//    return 0;
//}
//
//int total(int kor, int eng, int mat)
//{
//    return kor+eng+mat;
//}
//double average(int tot)
//{
//    return (double)tot/3;
//}
//void print_title(void)
//{
//    printf("=========< 성적표 >=========\n");
//    printf("--------------------------------\n");
//    printf("국어\t영어\t수학\t총점\t평균\t\t학점\n");
//    printf("--------------------------------\n");
//}



//2번문제(함수를 이용한 사칙연산 프로그램)
//double add(double,double); //덧셈 함수
//double sub(double,double); //뺄셈 함수
//double mul(double,double); //곱셈 함수
//double divi(double,double); //나눗셈 함수
//void menu_disp(); //메뉴를 보여주는 함수
//void res_disp(double); //결과를 보여주는 함수
//
//int main()
//{
//    int input;
//    double a,b,result;
//    menu_disp();
//    scanf("%d",&input);
//    printf("두개의 숫자를 입력하세요 : ");
//    scanf("%lf %lf",&a,&b);
//    switch(input)
//    {
//        case 1:
//            result=add(a,b);
//            break;
//        case 2:
//            result=sub(a,b);
//            break;
//        case 3:
//            result=mul(a,b);
//            break;
//        case 4:
//            result=divi(a,b);
//            break;
//    }
//    res_disp(result);
//}
//
//double add(double a,double b)
//{
//    return a+b;
//}
//
//double sub(double a,double b)
//{
//    return a-b;
//}
//
//double mul(double a,double b)
//{
//    return a*b;
//}
//
//double divi(double a,double b)
//{
//    return a/b;
//}
//
//void menu_disp()
//{
//    printf("1. 덧셈(addition)\n");
//    printf("2. 뺄셈(subtraction)\n");
//    printf("3. 곱셈(multiplication)\n");
//    printf("4. 나눗셈(division)\n");
//    printf(">>원하는 메뉴를 선택하세요 : ");
//}
//void res_disp(double a)
//{
//    printf("결과 값은 %f 입니다.\n",a);
//}




// 3번 문제
//3번문제의 원형의 주석에서 입력받은 숫자까지의 짝수의 합까지의 홀수의합과
//입력받은 숫자까지의 짝수의 합을 구하는 함수라고 되어있지만
//실행결과를 토대로 발때 입력받은 수까지의 짝수의 합과
//짝수합까지의 홀수의 합을 구하는게 맞는거 같아
//실행결과와 똑같이 나오게 코드를 작성하였습니다.

//int oddsum(int num); // 입력받은 수까지의 짝수의 합
//int evensum(int num); // 짝수합까지의 홀수의 합
//
//int main()
//{
//    int a,odd,even;
//    printf("하나의 숫자를 입력하세요:");
//    scanf("%d",&a);
//    odd=oddsum(a);
//    even=evensum(odd);
//    printf("입력받은 수까지의 짝수의 합: %d\n",odd);
//    printf("짝수합까지의 홀수의 합: %d\n",even);
//}
//
//int oddsum(int num)
//{
//    int result=0;
//    if(num%2==0)
//        for(int i=1;i<=num/2;i++)
//            result+=i;
//    else
//        for(int j=1;j<=(num-1)/2;j++)
//            result+=j;
//
//    return result*2;
//
//}
//int evensum(int num)
//{
//    int i, result=0;
//    for(i=0;i<num/2;i++)
//        result+=2*i+1;
//    return result;
//
//}
