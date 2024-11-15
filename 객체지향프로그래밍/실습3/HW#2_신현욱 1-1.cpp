#include <iostream>

using namespace std;
/***************************************************************/
/*             HW#4 : 개선된 함수 기능                            */
/*  작성자 : 신현욱                    날짜 : 2023년 3월 27일       */
/*                                                             */
/* 문제 정의 : 함수 오버로딩을 이용해 인자들의 크기 비교                */
/*                - - - - - - -                                */
/***************************************************************/
//실습 3-1(1)
//함수 오버로딩을 이용한 다형성
int big(int a,int b){ //정수형 인자 2개를 받는 함수 big
                    //big 함수에 인자 2개를 넣으면 이 함수가 작동
    int c = (a>b) ? a: b; //a가 b보다 크면 a를 c에 대입,
                          //그렇지 않으면(b가 a보다 더 크거나 같으면) b를 c에 대입
    if(c<100) //만약 c가 100보다 작으면
        return c; //c를 반환
    else //그렇지 않으면
        return 100; //100을 반환
}

int big(int a,int b, int c){//위에 big함수와 이름은 같지만 정수 인자 3개를 받는 함수(오버로딩 이용)
                            //big 함수에 인자 3개를 넣으면 이 함수가 작동
    int d = (a>b) ? a: b; //a가 b보다 크면 a를 d에 대입,
    //그렇지 않으면(b가 a보다 더 크거나 같으면) b를 d에 대입
    if(d<c)//d가 c보다 작으면
        return d;//d를 반환
    else//그렇지 않으면
        return c;//c를 반환
}

int main() {
    int x = big(3, 5); //정수형 변수 x에 big에 3,5를 인자로 줘서 대입
    //3과 5 중에 더 큰값을 100과 비교해 더 작은 값을 대입>> 5
    int y = big(300, 60); //정수형 변수 y에 big에 300,60를 인자로 줘서 대입
    //300과 60 중에 더 큰값을 100과 비교해 더 작은 값을 대입>> 100
    int z = big(30, 60, 50);//정수형 변수 z에 big에 300,60,50를 인자로 줘서 대입
    //30과 60중 더 큰값을 50과 비교해 더 작은 값을 대입 >>50
    cout << x << ' ' << y << ' ' << z << endl; //변수 x y z를 출력하고 줄띄우기
}
