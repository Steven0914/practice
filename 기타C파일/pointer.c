#include <stdio.h>
#include <stdlib.h>




//476
//int main()
//{
//    int i=3000;
//    int *p=NULL;
//    p=&i;
//    printf("p= %u\n",p);
//    printf("&i=%u\n\n",&i);
//
//    printf("i = %d\n",i);
//    printf("*p = %d\n",*p);
//}



//477
//int main()
//{
//    int x=10,y=20;
//    int *p;
//
//    p=&x;
//    printf("p=%d\n",p);
//    printf("*p=%d\n\n",*p);
//
//    p=&y;
//    printf("p=%d\n",p);
//    printf("*p=%d\n\n",*p);
//}




//482
//int main()
//{
//    char *pc;
//    int *pi;
//    double *pd;
//
//    pc=(char*)10000;
//    pi=(int*)10000;
//    pd=(double*)10000;
//    printf("증가 전 pc=%d, pi=%d, pd=%d\n",pc,pi,pd);
//
//    pc++;
//    pi++;
//    pd++;
//    printf("증가 후 pc=%d, pi=%d, pd=%d\n",pc,pi,pd);
//
//    printf("증가 전 pc+2=%d, pi+2=%d, pd+2=%d\n",pc+2,pi+2,pd+2);
//}




//484
//int main()
//{
//    int i=10;
//    int *pi=&i;
//
//    printf("i= %d, pi= %p\n",i,pi);
//    (*pi)++;
//    printf("i= %d, pi= %p\n",i,pi);
//
//    printf("i= %d, pi= %p\n",i,pi);
//    *pi++;
//    printf("i= %d, pi= %p\n",i,pi);
//}




//486
//void swap(int x,int y)
//{
//    int tmp;
//    printf("x= %d y=%d\n",x,y);
//
//    tmp=x;
//    x=y;
//    y=tmp;
//    printf("x= %d y=%d\n",x,y);
//
//}
//
//int main()
//{
//    int a=100,b=200;
//    printf("a=%d b=%d\n",a,b);
//    swap(a,b);
//    printf("a=%d b=%d\n",a,b);
//
//}



//488
//void swap(int *x,int *y)
//{
//    int tmp;
//
//    tmp=*x;
//    *x=*y;
//    *y=tmp;
//
//}
//
//int main()
//{
//    int a=100,b=200;
//    printf("a=%d b=%d\n",a,b);
//    swap(&a,&b);
//    printf("a=%d b=%d\n",a,b);
//
//}





//490
//int get_line_parameter(int x1,int y1,int x2,int y2,float *slope,float *yintercept)
//{
//    if(x1==x2)
//        return -1;
//    else
//    {
//        *slope =(float)(y2-y1)/(float)(x2-x1);
//        *yintercept = y1-(*slope)*x1;
//        return 0;
//    }
//}
//
//int main()
//{
//    float s,y;
//
//    if(get_line_parameter(3, 3, 6, 6, &s, &y)==-1)
//        printf("에러\n");
//    else
//        printf("기울기는 %f,y절편은 %f\n",s,y);
//}




//493
//int main()
//{
//    int a[]={10,20,30,40,50};
//    printf("a=%u\n",a);
//    printf("a+1=%u\n",a+1);
//    printf("*a=%d\n",*a);
//    printf("*(a+1)=%d\n",*(a+1));
//}




//494
//int main()
//{
//    int a[]={10,20,30,40,50};
//    int *p;
//
//    p=a;
//    printf("a[0]=%d a[1]=%d a[2]=%d \n",a[0],a[1],a[2]);
//    printf("p[0]=%d p[1]=%d p[2]=%d \n\n",p[0],p[1],p[2]);
//
//    p[0]=60;
//    p[1]=70;
//    p[2]=80;
//
//    printf("a[0]=%d a[1]=%d a[2]=%d \n",a[0],a[1],a[2]);
//    printf("p[0]=%d p[1]=%d p[2]=%d \n\n",p[0],p[1],p[2]);
//
//}



//495
//void sub(int b[],int size)
//{
//    b[0]=4;
//    b[1]=5;
//    b[2]=6;
//}
//
//int main()
//{
//    int a[3]={1,2,3};
//    printf("%d %d %d \n",a[0],a[1],a[2]);
//    sub(a,3);
//    printf("%d %d %d \n",a[0],a[1],a[2]);
//}




//498
//#define SIZE 5
//void print_image(int image[SIZE][SIZE])
//{
//    int r,c;
//    for(r=0;r<SIZE;r++)
//    {
//        for(c=0;c<SIZE;c++)
//            printf("%03d ",image[r][c]);
//        printf("\n");
//    }
//    printf("\n");
//}
//
//void brighten_image(int image[SIZE][SIZE])
//{
//    int r,c;
//    int *p;
//    p=&image[0][0];
//    for(r=0;r<SIZE;r++)
//    {
//        for(c=0;c<SIZE;c++)
//        {
//            *p+=10;
//            p++;
//        }
//    }
//}
//
//
//int main()
//{
//    int image[SIZE][SIZE]={{10,20,30,40,50},
//                           {10,20,30,40,50},
//                           {10,20,30,40,50},
//                           {10,20,30,40,50},
//                           {10,20,30,40,50}};
//
//    print_image(image);
//    brighten_image(image);
//    print_image(image);
//
//}



//실습과제 1번
//void get_sum_diff(int x,int y, int *p_sum,*p_diff)
//{
//    *p_sum=x+y;
//    *p_diff=x-y;
//}
//
//int main()
//{
//    int x=100,y=200,sum,diff;
//    get_sum_diff(x, y, &sum, &diff);
//    printf("원소들의 합=%d\n",sum);
//    printf("원소들의 차=%d\n",diff);
//}

//실습과제 2번
//void array_fill(int *A, int size)
//{
//    for(int i=0;i<size;i++)
//    {
//        A[i]=rand();
//    }
//}
//
//int main()
//{
//    int a[10]={0};
//    array_fill(a, 10);
//    for(int t=0;t<10;t++)
//        printf("%d ",a[t]);
//    printf("\n");
//}



//실습과제 3번
//void array_print(int *A, int n)
//{
//    int i;
//    printf("A[]={ ");
//    for(i=0;i<n;i++)
//        printf("%d ",A[i]);
//    printf("}\n");
//}
//
//int main()
//{
//    int x[10]={1,2,3,4};
//    array_print(x, 10);
//}
//
