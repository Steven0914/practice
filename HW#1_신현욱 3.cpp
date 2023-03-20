//2020015029 신현욱
//실습 2-3
#include <iostream>
using namespace std;


bool bigger(int a,int b, int& big){
 //2개의 매개변수를 받고, 1개의 참조 매개변수를 받음
     if(a==b) //만약 a와 b가 같다면
        return true; //true를 반환한다.
     else //그렇지 않다면(a와 b가 다르다면)
         (a>b) ? big= a : big = b;
 //a가 더 크면 참조 변수big에 a 대입, 그렇지 않으면 big에 b 대입
     return false; //false 를 반환
 }
 
int main(){
     int x,y,big; //int 형 변수 x,y,big 선언
     bool b; //bool형 변수 b 선언
     cout << "두 정수를 입력하세요>>" ; // 두수를 입력하라고 출력
     cin >> x >> y; // 두 개의 정수를 입력받아 변수 x,y에 각각 저장
     b= bigger(x,y,big); // bigger함수에 x,y,big을 인수로 줘서 반환값을 b에 대입
     if(b) // 만약 b가 true면(x,y가 같으면)
         cout<<"same"<<endl;//same이라고 출력
     else// b가 false 면(a와 b가 다르다면)
         cout<<"큰 수는 "<<big<< endl;//큰 수는 big값에 있는 값을 출력
 }

