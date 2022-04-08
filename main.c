#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) 
{
    //과제 1번(if문 이용)
//    char ch;
//    printf("하나의 문자를 입력하세요(알파벳 a~z): ");
//    scanf("%c",&ch);
//    if(ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e')
//        printf("%c는 모음입니다.\n",ch);
//    else if(ch=='A'||ch=='I'||ch=='O'||ch=='U'||ch=='E')
//        printf("%c는 모음입니다.\n",ch);
//    else
//        printf("%c는 자음입니다.\n",ch);
  
    
    
    //과제 1번(switch case문 이용)
//    char ch;
//    printf("하나의 문자를 입력하세요(알파벳 a~z): ");
//    scanf("%c",&ch);
//    switch(ch)
//    {
//        case 'a':
//        case 'A':
//        case 'e':
//        case 'E':
//        case 'u':
//        case 'U':
//        case 'i':
//        case 'I':
//        case 'o':
//        case 'O':
//            printf("%c는 모음입니다.\n",ch);
//            break;
//        default:
//            printf("%c는 자음입니다.\n",ch);
//            break;
//    }
    
    
    //과제 2번
//    int x,y,z,small;
//    printf("정수 3개를 입력하세요: ");
//    scanf("%d %d %d",&x,&y,&z);
//    if(x>y)
//        small=y;
//    else if(x<y)
//        small=x;
//    else if(x==y)
//        small=x;
//    else
//        printf("오류가 발생했습니다.");
//   //변수 x와 y에 두 정수가 재대로 입력되었으면 문제가 발생할 가능성은 없으나
//   //프로그램의 완성도를 높이기 위해 넣음
//
//    if(small>z)
//        small=z;
//    //small이 작거나 같으면 변수 small에 저장된 값이 가장 작으므로
//    //별도로 small에 다른 값을 넣을 필요가 없다.
//
//    printf("세 값 중 가장 작은 값은 %d입니다.\n",small);
    
    
    //과제 3번
//    double kor, math, eng, sum, avg;
//    printf("국어 점수를 입력하세요: ");
//    scanf("%lf",&kor);
//    printf("수학 점수를 입력하세요: ");
//    scanf("%lf",&math);
//    printf("영어 점수를 입력하세요: ");
//    scanf("%lf",&eng);
//
//    sum=kor+math+eng;
//    avg=sum/3;
//
//    printf("총점: %lf\n",sum);
//    printf("평균 점수: %lf\n",avg);
//
//    //문제에서 한 시험의 만점이 얼마인지 안알려주고 학점도 안알려줘서
//    //임의로 만점(100점)과 학점 구간을 설정하였다.
//    if(avg>=95)
//        printf("학점: A+\n");
//    else if(avg<95&&avg>=90)
//        printf("학점: A\n");
//    else if(avg<90&&avg>=85)
//        printf("학점: B+\n");
//    else if(avg<85&&avg>=80)
//        printf("학점: C\n");
//    else if(avg<80&&avg>=75)
//        printf("학점: D\n");
//    else if(avg<75)
//        printf("학점: F\n");

    
    //과제 4번
    //헤더파일 time.h와 stdlib.h는 메인함수 위에 추가되어있다.
    
//    int com, user;
//    srand(time(NULL));
//    com=rand()%3+1;
//    printf("********가위바위보 게임********\n");
//    printf("컴퓨터와 가위바위보를 해서 이겨보세요!\n");
//    printf("어떤 것을 내실건가요?(가위=1, 바위=2, 보=3):");
//    scanf("%d",&user);
//    printf("\n컴퓨터는 %d를 골랐습니다.\n당신은 %d를 골랐습니다.\n",com,user);
//    if(com==user)
//        printf("당신은 비겼습니다.\n");
//    else if(com==1&&user==2)
//        printf("당신이 이겼습니다.\n");
//    else if(com==2&&user==3)
//        printf("당신이 이겼습니다.\n");
//    else if(com==3&&user==1)
//        printf("당신이 이겼습니다.\n");
//    else if(com==2&&user==1)
//        printf("당신은 졌습니다.\n");
//    else if(com==3&&user==2)
//        printf("당신은 졌습니다.\n");
//    else if(com==1&&user==3)
//        printf("당신은 졌습니다.\n");
//    else
//        printf("프로그램에 오류가 발생했습니다.\n");
    
    //과제 5번
//    unsigned int age;
//    double height;
//    printf("롤러코스터 탑승구입니다.\n");
//    printf("당신의 나이를 알려주세요: ");
//    scanf("%u",&age);
//    printf("당신의 키를 알려주세요: ");
//    scanf("%lf",&height);
//
//    if(age>=10&&height>=140)
//        printf("롤러코스터에 타셔도 좋습니다.\n");
//    else
//        printf("조건이 안돼서 타시면 안돼요!\n");
//
//
  
    
    
    //과제 6번
//    int month;
//    printf("월 번호를 입력하시오(1-12): ");
//    scanf("%d",&month);
//    switch(month)
//    {
//        case 1:
//            printf("JAN\n");
//            break;
//        case 2:
//            printf("FEB\n");
//            break;
//        case 3:
//            printf("MAR\n");
//            break;
//        case 4:
//            printf("APR\n");
//            break;
//        case 5:
//            printf("MAY\n");
//            break;
//        case 6:
//            printf("JUN\n");
//            break;
//        case 7:
//            printf("JUL\n");
//            break;
//        case 8:
//            printf("AUG\n");
//            break;
//        case 9:
//            printf("SEP\n");
//            break;
//        case 10:
//            printf("OCT\n");
//            break;
//        case 11:
//            printf("NOV\n");
//            break;
//        case 12:
//            printf("DEC\n");
//            break;
//        default:
//            printf("오류가 발생했습니다.\n");
//            break;
//    }
    
    
    //과제 7번
//    double x,y;
//    printf("x값을 입력하세요.: ");
//    scanf("%lf",&x);
//    printf("y값을 입력하세요.: ");
//    scanf("%lf",&y);
//    if(x>0&&y>0)
//        printf("1사분면에 (%lf,%lf)가 있습니다.\n",x,y);
//    else if(x<0&&y>0)
//        printf("2사분면에 (%lf,%lf)가 있습니다.\n",x,y);
//    else if(x<0&&y<0)
//        printf("3사분면에 (%lf,%lf)가 있습니다.\n",x,y);
//    else if(x>0&&y<0)
//        printf("4사분면에 (%lf,%lf)가 있습니다.\n",x,y);
//    else
//        printf("(%lf,%lf)는 원점 또는 x축 또는 y 축에 있습니다.\n",x,y);

    
    
    
    
    return 0;
}
