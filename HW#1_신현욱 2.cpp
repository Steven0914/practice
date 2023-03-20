//2020015029 신현욱
//실습 2-2
#include <iostream>
using namespace std;

bool average(int a[],int size, int& avg){
    //bool형을 반환하고,정수형 배열과 정수, 참조 변수를 매개변수로 받는다.
    if(size>0){//만약 배열의 크기가 0보다 크면
        for(int i=0;i<size;i++)//i=0부터 i가 size-1될때까지 반복
            avg+=a[i];//avg에 a[i]값을 더한다.
        avg/=size;//avg값을 size 값으로 나눈다.
        //여기서 avg는 참조에 의한 호출이므로 바로 main함수의 avg에 반영됨.
        return true; //true를 반환한다.
    }
    else
        return false;//size가 0보다 작다면 false를 반환
}

int main(){
    int x[] = {0, 1, 2, 3, 4, 5}; //배열 x에 6개의 값을 대입
    int avg=0; //평균을 담을 변수 avg를 0으로 초기화
    
    if(average(x,6,avg)) //average 함수에 값을 넣은값이 true면(size가 0보다 크면)
        cout<<"평균은 "<<avg<<endl; //평균은 avg라고 출력
    else //average에서 false가 반환됐으면(size값이 0보다 작으면)
        cout <<"매개 변수 오류"<<endl;//매개변수 오류라고 출력
    
    if(average(x,-1,avg)) // 이는 매개변수에 size가 음수를 넣어 일부로 오류를 출력
        // 위 if문과 같은 꼴이지만 잘 작동하는지 확인을 위해 인수로 -1을 넣음
        cout<<"평균은 "<<avg<<endl;
    else
        cout <<"매개 변수 오류"<<endl; //-1을 인수로 줬으므로 "매개변수 오류"라고 출력됨
}
