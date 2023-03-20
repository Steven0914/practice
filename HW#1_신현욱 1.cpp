//2020015029 신현욱
//실습 2-1
#include <iostream>
using namespace std;


int main(){
    
    int M[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //크기가 3X3인 2차원 배열 선언하면서 값 초기화
    int (*ptr)[3]; //크기가 3인 포인터 배열 선언
    int *p; // 포인터 변수 p 선언
    int **pt; //이중 포인터 pt 선언
    
    ptr = M; //포인터 배열 ptr에 배열 M의 주소값 대입(&M[0])
    cout << "after ptr = M" << endl;// ptr = M 했다고 출력
    
    
    cout << "ptr:" << ptr <<"\t\t\tM:"<< M <<endl;
    //ptr과 M의 값 출력, 포인터 ptr에 M의 값(배열 M의 주소=&M[0])를 대입 했으므로 같은 값 출력
    //여기 주석에서 편의를 위해 =은 대입이 아니라 같다로 씀
    cout <<"ptr+1:" << ptr+1 << "\t\tM+1:"<< M+1 << endl;
    //(ptr+1)=(M+1)=&M[1] 이므로 같은 값 출력, 이때 M[1]의 주소는 M[0]의 주소 + 4*3
    //주소 +1을 했는데 +4가 아닌 12가 증가하는 이유는 M이 가르키는건 M[0][0]가 아닌 M[0]의 주소이기 때문
    cout << "*(ptr+1):" << *(ptr+1) << "\tprt[1]:"<<ptr[1] <<endl;
    //*(ptr+1)와 prt[1]은 prt이 포인터 배열이므로 안에 주소값이 저장되어있음
    //ptr+1과 *(ptr+1)이 같은 이유는 prt+1=&prt[1] 이고 *(ptr+1)=&prt[1][0]인데
    //ptr[1]과 ptr[1][0]의 주소는 같기 때문
    cout <<"*(M+1):" << *(M+1) <<"\t\tM[1]:"<< M[1] << endl;
    //M이 2차원 배열이므로 *(M+1)와 M[1]는 주소값이 출력됨
    cout << "**(ptr+1):" << **(ptr+1) << "\t\t\t\t**(M+1):"<< **(M+1)<<endl;
    //포인터 ptr 배열에 저장된 주소가 가르키는 값(M[1][0])을 출력
    //위에서 ptr+1 과 M+1 은 같으므로 똑같이 M[1][0]값이 출력됨
    cout <<"*M[1]:"<< *M[1] <<"\t\t\t\t\tM[1][0]:"<< M[1][0] <<"\n\n";
    //바로 위에서와 같은 이유로 값이 출력됨
    //즉 위에 내용을 정리하면 prt+1 = M+1 = *(ptr+1) = M[1]
    
    p = M[0]; //p에 M[0]의 값을 넣어줌(M[0]는 M이 2차원 배열이므로 주소값, 이때 M=M[0])
    cout<<"after p = M[0]\n";// p = M[0] 했다고 출력
    
    
    cout<< "p:"<<p <<"\tM[0]:"<< M[0] <<"\t*M:"<< *M<<endl;
    // 포인터 p에 M[0](주소값)를 대입했으므로 같고, *M = M[0]이므로 세 값은 모두 같다.
    // 이때 위에서와는 다르게 M[0] = &M[0][0]이다.
    cout<<"p+1:"<< p+1 <<"\tM[0]+1:"<< M[0]+1 <<"\t*M+1:"<< *M+1<<endl;
    // 마찬가지로 p=M[0]=*M은 주소값이므로 +1 해준 값은 모두 같다.
    // 이때 위에서와는 다르게 가르키는 주소가 M[0]가 아닌 M[0][0]의 주소이므로 셋다 +1을 해주면 M[0][1]의 주소이다.
    cout<< "*(p+1):"<<*(p+1) << "\t\t*(M+1):" << *(M[0]+1) << "\t\t\t*(*M+1):"<< *(*M+1)<<endl;
    //이때 p+1 = M[0]+1 = *M+1 은 M[0][1]의 주소를 가르키므로 간접참조연산자 *를 붙이면
    //M[0][1]의 값 즉 2를 출력한다.
    
    
    pt= &p; // pt에 p의 주소값을 넣어줌
    cout<<"\nafter pt= &p\n";// pt= &p 했다고 출력
    //이중 포인터 pt에 포인터 p의 주소를 넣게 되면 아래와 같이 *pt = p, **pt = *p가 된다.
    
    cout<<"*pt:"<< *pt << "\tp:"<<p <<endl;
    //pt에 간접참조 연산자를 붙이게 되면 p의 값, 즉 M[0] = &M[0][0] 가 출력된다.
    //이때 주소값을 확인해보면 prt=p=*pt인 것을 확인 할 수 있는데
    //이는 ptr = &M[0] ,p =&M[0][0]=*p인데 M[0]의 주소값은 M[0][0]과 같기 때문
    cout<< "**pt:"<< **pt<< "\t\t\t*p:"<<*p<<endl;
    //pt에 간접참조 연산자를 2번 사용하면 p가 가르키는 값 즉 M[0][0]의 값(1)이 출력된다.
}

