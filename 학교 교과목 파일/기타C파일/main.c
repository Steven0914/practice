#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//422 1
//#define SIZE 5
//int main()
//{
//    int scores[SIZE];
//    for(int i=0;i<SIZE;i++)
//        scores[i]=rand()%100;
//
//    for(int i=0;i<SIZE;i++)
//        printf("scores[%d]=%d\n",i,scores[i]);
//}



//423
//#define STUDENTS 5
//int main()
//{
//    int scores[STUDENTS];
//    int sum=0;
//    int i, average;
//
//    for(i=0;i<STUDENTS;i++)
//    {
//        printf("학생들의 성적을 입력하시오: ");
//        scanf("%d",&scores[i]);
//    }
//    for(i=0;i<STUDENTS;i++)
//        sum+=scores[i];
//
//    average=sum/STUDENTS;
//    printf("성적 평균= %d\n",average);
//}



//430
//#define SIZE 6
//int main(void)
//{
//    int freq[SIZE]={0};
//    int i;
//
//    for(i=0;i<10000;i++)
//        ++freq[rand()%6];
//
//    printf("================\n");
//    printf("면 빈도\n");
//    printf("================\n");
//
//    for(i=0;i<SIZE;i++)
//        printf("%3d %3d \n",i+1,freq[i]);
//}






//432
//#define SIZE 10
//int main()
//{
//    char ans1;
//    int ans2,i;
//    int seats[SIZE]={0};
//    while(1)
//    {
//        printf("좌석을 예약하시겠습니까?(y or n):");
//        scanf(" %c",&ans1);
//
//        if(ans1=='n')
//            break;
//        printf("--------------------\n");
//        printf(" 1 2 3 4 5 6 7 8 9 10\n");
//        printf("--------------------\n");
//
//        for(i=0;i<SIZE;i++)
//            printf(" %d",seats[i]);
//        printf("\n");
//
//        printf("몇번째 좌석을 예약하시겠습니까?");
//        scanf("%d",&ans2);
//        if(seats[ans2-1]==0)
//        {
//            seats[ans2-1]=1;
//            printf("예약되었습니다.\n");
//        }
//        else
//            printf("이미 예약된 자리입니다.\n");
//    }
//}




//434
//#define SIZE 10
//
//int main()
//{
//    int prices[SIZE]={0};
//    int i, minimum;
//
//    printf("------------------------\n");
//    printf("1 2 3 4 5 6 7 8 9 10\n");
//    printf("------------------------\n");
//    srand(time(NULL));
//    for(i=0;i<SIZE;i++)
//    {
//        prices[i]=(rand()%100)+1;
//        printf("%-3d",prices[i]);
//    }
//    printf("\n\n");
//
//    minimum=prices[0];
//    for(i=1;i<SIZE;i++)
//    {
//        if(prices[i]<minimum)
//            minimum=prices[i];
//    }
//    printf("최소값은 %d입니다.",minimum);
//}







//435
//#define STUDENTS 5
//int get_average(int scores[],int size);
//
//int main()
//{
//    int scores[STUDENTS]={1,2,3,4,5};
//    int avg;
//
//    avg=get_average(scores,STUDENTS);
//    printf("평균은 %d입니다.\n",avg);
//}
//
//int  get_average(int scores[], int size)
//{
//    int i;
//    int sum=0;
//    for(i=0;i<size;i++)
//        sum+=scores[i];
//    return sum/size;
//}






//437
//#define SIZE 7
//void modify_array(int a[],int size);
//void print_array(int a[],int size);
//
//int main()
//{
//    int list[SIZE]={1,2,3,4,5,6,7};
//    print_array(list, SIZE);
//    modify_array(list, SIZE);
//    print_array(list, SIZE);
//
//}
//
//void modify_array(int a[], int size)
//{
//    int i;
//
//    for(i=0;i<size;i++)
//        ++a[i];
//
//}
//
//void print_array(int a[],int size)
//{
//    int i;
//    for(i=0;i<size;i++)
//        printf("%3d",a[i]);
//    printf("\n");
//}





//440
//#define SIZE 10
//
//int main()
//{
//    int list[SIZE]={3,2,9,7,1,4,8,0,6,5};
//
//    int i,j,temp,least;
//    for(i=0;i<SIZE-1;i++)
//    {
//        least =i;
//        for(j=i+1;j<SIZE;j++)
//            if(list[j]<list[least])
//                least=j;
//        temp=list[i];
//        list[i]=list[least];
//        list[least]=temp;
//
//    }
//    for(i=0;i<SIZE;i++)
//        printf("%d ",list[i]);
//    printf("\n");
//}







//442
//#define SIZE 10
//
//int main()
//{
//    int key,i;
//    int list[SIZE]={1,2,3,4,5,6,7,8,9};
//
//    printf("탐색할 값을 입력하시오: ");
//    scanf("%d",&key);
//
//    for(i=0;i<SIZE;i++)
//        if(list[i]==key)
//            printf("탐색 성공 인덱스=%d\n",i);
//    printf("탐색 종료\n");
//}




//444
//#define SIZE 16
//int binary_search(int list[], int n, int key);
//
//int main()
//{
//    int key;
//    int grade[SIZE]={2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47};
//
//    printf("탐색할 값을 입력하시오?: ");
//    scanf("%d",&key);
//    printf("탐색 결과=%d\n",binary_search(grade,SIZE,key));
//
//}
//
//int binary_search(int list[], int n, int key)
//{
//    int low, high, middle;
//
//    low=0;
//    high=n-1;
//
//    while(low<=high)
//    {
//        printf("[%d %d]\n",low, high);
//        middle = (low+high)/2;
//        if(key==list[middle])
//            return middle;
//        else if(key>list[middle])
//            low=middle+1;
//        else
//            high =middle -1;
//    }
//    return -1;
//}





//447
//#define ROWS 3
//#define COLS 5
//
//int main()
//{
//    int s[ROWS][COLS];
//    int i,j;
//
//    for(i=0;i<ROWS;i++)
//        for(j=0;j<COLS;j++)
//            s[i][j]=rand()%100;
//
//    for(i=0;i<ROWS;i++)
//    {
//        for(j=0;j<COLS;j++)
//            printf("%02d ",s[i][j]);
//        printf("\n");
//    }
//}





//449
//#define ROWS 3
//#define COLS 5
//int main()
//{
//    int a[ROWS][COLS]={{87,98,80,76,3}
//        ,{99,89,90,90,0},{65,68,50,49,0}};
//
//    int i;
//
//    for(i=0;i<ROWS;i++)
//    {
//        double final_scores=a[i][0]*0.3+a[i][1]*0.4+a[i][2]*0.2+a[i][3]*0.1-a[i][4];
//        printf("학생#%d의 최종 성적=%10.2f \n",i+1,final_scores);
//    }
//
//}




//450
//#define ROWS 3
//#define COLS 3
//int main()
//{
//    int A[ROWS][COLS]={{2,3,0},{8,9,1},{7,0,5}};
//    int B[ROWS][COLS]={{1,0,0},{1,0,0},{1,0,0}};
//    int C[ROWS][COLS];
//    int r,c;
//
//    for(r=0;r<ROWS;r++)
//        for(c=0;c<COLS;c++)
//            C[r][c]=A[r][c]+B[r][c];
//
//    for(r=0;r<ROWS;r++)
//    {
//        for(c=0;c<COLS;c++)
//        printf("%d ",C[r][c]);
//        printf("\n");
//    }
//}







//451
//#define YEARS 3
//#define PRODUCATS 5
//
//int sum(int scores[YEARS][PRODUCATS]);
//
//int main()
//{
//    int sales[YEARS][PRODUCATS]={{1,2,3},{4,5,6},{7,8,9}};
//    int total_sale;
//
//    total_sale=sum(sales);
//    printf("총매출은 %d입니다.\n",total_sale);
//}
//
//int sum(int scores[YEARS][PRODUCATS])
//{
//    int y,p;
//    int total=0;
//
//    for(y=0;y<YEARS;y++)
//        for(p=0;p<PRODUCATS;p++)
//            total+=scores[y][p];
//
//    return total;
//}







//453
//void display(int image[8][16])
//{
//    for(int r=0;r<8;r++){
//        for(int c=0;c<16;c++)
//        {
//            if (image[r][c]==0)
//                printf("*");
//            else
//                printf("_");
//        }
//        printf("\n");}
//}
//
//void inverse(int img[8][16])
//{
//    for(int r=0;r<8;r++)
//        for(int c=0;c<16;c++)
//        {
//            if(img[r][c]==0)
//                img[r][c]=1;
//            else
//                img[r][c]=0;
//        }
//}
//
//int main()
//{
//    int image[8][16]={
//        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
//        {1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1},
//        {1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
//        {1,1,1,0,0,0,1,1,0,0,1,1,1,1,1,1},
//        {1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
//        {1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1},
//        {1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
//        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
//
//    printf("변환전 이미지\n");
//    display(image);
//    inverse(image);
//    printf("\n\n변환후 이미지\n");
//    display(image);
//
//
//
//
//}




//실습과제 1번
//int main ()
//{
//    int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
//    for(int i=1;i<=12;i++)
//    {
//        printf("%d월은 %d일까지 있습니다.\n",i,days[i-1]);
//    }
//}



//실습과제 2번
//int main()
//{
//    srand(time(NULL));
//    int x[10];
//    for(int i=0;i<=9;i++)
//        x[i]=rand();
//    int max=x[0];
//    int min=x[0];
//
//    for(int c=1;c<10;c++)
//    {
//        if(x[c]<min)
//            min=x[c];
//    }
//    for(int b=1;b<10;b++)
//    {
//        if(x[b]>max)
//            max=x[b];
//    }
//
//    printf("최소값: %d\n최대값: %d\n",min,max);
//}



//실습과제 3번
//void array_equal(int a[],int b[],int size)
//{
//    for(int i=0;i<size;i++)
//    {
//        b[i]=a[i];
//    }
//}
//
//int main()
//{
//    int x[10]={1,2,3,0,0,0,0,0,0,0};
//    for(int i=0;i<10;i++)
//    printf("%d ",x[i]);
//    printf("\n");
//    int y[10];
//    array_equal(x,y,10);
//    for(int i=0;i<10;i++)
//    printf("%d ",y[i]);
//    printf("\n");
//}



//실습과제 4번
//int main()
//{
//    srand(time(NULL));
//    int freq[10]={0};
//    for(int i=0;i<100;i++)
//        ++freq[rand()%10];
//    int max=0;
//        for(int b=1;b<10;b++)
//        {
//            if(freq[b]>freq[max])
//                max=b;
//        }
//    printf("가장 많이 나온수: %d\n",max+1);
//}






//실습과제 5번
//int main()
//{
//    int h=0,y=0;
//    int x[][5]={{12,56,32,16,98},
//                {99,56,34,41,3},
//                {65,3,87,78,21}};
//    for(int i=0;i<3;i++)
//    {
//        for(int t=0;t<5;t++)
//            h+=x[i][t];
//        printf("%d행의 합계: %d\n",i,h);
//        h=0;
//    }
//    for(int j=0;j<5;j++)
//    {
//        for(int p=0;p<3;p++)
//            y+=x[p][j];
//        printf("%d열의 합계: %d\n",j,y);
//        y=0;
//    }
//
//}
