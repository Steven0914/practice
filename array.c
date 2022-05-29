#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//519
//int main()
//{
//    char str1[6]="Seoul";
//    char str2[3]={'i','s','\0'};
//    char str3[]="the capital city of Korea.";
//
//    printf("%s %s %s\n",str1,str2,str3);
//}




//520
//int main()
//{
//    char src[]="The worst things to eat before you sleep";
//    char dst[100];
//    int i;
//
//    printf("원본 문자열=%s\n",src);
//    for(i=0;src[i]!='\0';i++)
//        dst[i]=src[i];
//
//    dst[i]='\0';
//    printf("복사된 문자열=%s\n",dst);
//}





////527
//int main()
//{
//    char name[100];
//    char address[100];
//
//    printf("이름을 입력하시오: ");
//    scanf("%s",&name);
//    printf("현재 거주하는 주소를 입력하시오: ");
//    scanf("%s",&address);
//
//    printf("이름: %s \n",name);
//    printf("주소: %s \n",address);
//
//}





//528
//gets_s 함수와 puts 함수가 작동되지 않음;;
//int main()
//{
//    char name[100];
//    char address[100];
//
//    printf("이름을 입력하시오: ");
//    gets_s(name, 100);
//    printf("현재 사는 주소를 입력하시오: ");
//    gets_s(address, 100);
//
//    puts(name);
//    puts(address);
//
//}


//531
//int count_word(char *s);
//int main()
//{
//    int wc=count_word("the c book...");
//    printf("단어의 개수: %d \n",wc);
//
//}
//
//int count_word(char *s)
//{
//    int i,wc=0,waiting=1;
//    for(i=0;s[i]!=NULL;++i)
//        if(isalpha(s[i]))
//        {
//            if(waiting)
//            {
//
//             wc++;
//            waiting=0;
//            }
//        }
//        else
//            waiting =1;
//
//    return wc;
//}





//534
//int main()
//{
//    char string[80];
//
//    strcpy(string,"hello world from ");
//    strcat(string,"strcpy ");
//    strcat(string,"and ");
//    strcat(string,"strcat!");
//    printf("string =%s\n",string);
//
//}





//535
//int main()
//{
//    char s1[80];
//    char s2[80];
//    int result;
//
//    printf("첫번째 단어를 입력하시오: ");
//    scanf("%s",s1);
//    printf("두번째 단어를 입력하시오: ");
//    scanf("%s",s2);
//
//    result=strcmp(s1,s2);
//    if(result<0)
//        printf("%s가 %s보다 앞에 있습니다.\n",s1,s2);
//    else if(result ==0)
//        printf("%s가 %s와 같습니다.\n",s1,s2);
//    else
//        printf("%s가 %s보다 뒤에 있습니다.\n",s1,s2);
//
//}




//537
//int main()
//{
//    char s[]="language";
//    char c='g';
//    char *p;
//    int loc;
//
//    p=strchr(s,c);
//    loc =(int)(p-s);
//    if(p!=NULL)
//        printf("%s에서 첫번째 %c가 %d에서 발견되었음\n",s,c,loc);
//    else
//        printf("%c가 발견되지 않았음\n",c );
//
//}




//538
//int main()
//{
//    char s[]="A joy that's shared is a joy made double";
//    char sub[]="joy";
//    char *p;
//    int loc;
//    p=strstr(s,sub);
//
//    loc=(int)(p-s);
//    if(p!=NULL)
//        printf("%s에서 첫번째 %s가 %d에서 발견되었음\n",s,sub,loc);
//    else
//        printf("%s가 발견되지 않았음\n",sub);
//
//}



//539
//char s[]="Man is immortal, because he has a soul";
//char seps[]= " ,\t\n";
//char *token;
//
//int main()
//{
//    token=strtok(s,seps);
//    while(token!=NULL)
//    {
//        printf("토큰: %s\n",token);
//        token=strtok(NULL,seps);
//
//    }
//}




//541
//int main()
//{
//    char filename[100];
//    char s[100];
//    int i;
//
//    for(i=0;i<6;i++)
//    {
//        strcpy(filename,"image");
//        sprintf(s,"%d",i);
//        strcat(filename,s);
//        strcat(filename,".jpg");
//        printf("%s \n",filename);
//    }
//
//
//
//}


//542
//int main()
//{
//    char s1[]="100";
//    char s2[]="12.93";
//    char buffer[100];
//
//    int i;
//    double d;
//    double result;
//
//    i=atoi(s1);
//    d= atof(s2);
//    result=i+d;
//
//    sprintf(buffer, "%f",result);
//    printf("연산 결과는 %s 입니다.\n",buffer);
//
//
//}



//545
//int main()
//{
//    int i;
//    char menu[5][10]={
//        "init",
//        "open",
//        "close",
//        "read",
//        "write"
//    };
//
//    for(i=0;i<5;i++)
//        printf("%d번째 메뉴: %s \n",i,menu[i]);
//
//}






//546
//int main()
//{
//    int i;
//    char fruits[3][20];
//
//    for(i=0;i<3;i++)
//    {
//        printf("과일의 이름을 입력하시오: ");
//        scanf("%s",fruits[i]);
//    }
//    for(i=0;i<3;i++)
//        printf("%d번째 과일: %s\n",i,fruits[i]);
//}





//547
//#define WORDS 5
//
//int main()
//{
//    int i, index;
//    char dic[WORDS][2][30]={
//        {"book","책"},
//        {"boy","소년"},
//        {"computer","컴퓨터"},
//        {"lanuguage","언어"},
//        {"rain","비"}
//    };
//
//    char word[30];
//    printf("단어를 입력하시오:");
//    scanf("%s",word);
//
//    index=0;
//    for(i=0;i<WORDS;i++)
//    {
//        if(strcmp(dic[index][0],word)==0)
//        {
//            printf("%s: %s\n",word,dic[index][i]);
//            return 0;
//        }
//        index++;
//    }
//    printf("사전에서 발견되지 않았습니다.\n");
//}


//548
//void encrypt(char cipher[],int shift);
//
//int main()
//{
//    char cipher[50];
//    int shift=3;
//
//    printf("문자열을 입력하시오: ");
//    gets_s(cipher,500);
//    encrypt(cipher,shift);
//}
//
//void encrypt(char cipher[],int shift)
//{
//    int i=0;
//    while(cipher[i]!='\0')
//    {
//        if(cipher[i]>='A'&&cipher[i]<='z')
//        {
//            cipher[i]+=shift;
//            if(cipher[i]>'z')
//                cipher[i]-=26;
//        }
//        i++;
//    }
//}


//550
//int check(char s[],char a[],char ch);
//int main()
//{
//    char solution[100]="meet at midnight";
//    char answer[100]="____ __ ________";
//    char ch;
//
//    while(1)
//    {
//        printf("문자열을 입력하시오: %s \n",answer);
//        printf("글자를 추측하시오: ");
//        ch=getchar();
//        if(check(solution,answer,ch)==1)
//            break;
//        getchar();
//    }
//
//}
//
//int check(char s[],char a[],char ch)
//{
//    int i;
//
//    for(i=0;s[i]!=0;i++)
//    {
//        if(s[i]==ch)
//            a[i]=ch;
//    }
//    if(strcmp(s,a)==0)
//        return 1;
//    else
//        return 0;
//}





//실습과제 1번
//int main()
//{
//    char a;
//    printf("문자를 입력하시오: ");
//    scanf("%c",&a);
//    printf("아스키 코드 값=%d\n",a);
//
//}



//실습과제 2번
//void blank(char a[]);
//
//int main()
//{
//    char input[100];
//    printf("공백 문자가 있는 문자열을 입력하시오: ");
//    gets_s(input,100);
//    blank(input);
//    printf("\n");
//
//}
//
//void blank(char a[])
//{
//    for(int i=0;a[i]!='\0';i++)
//    {
//        if(a[i]!=' ')
//            printf("%c",a[i]);
//    }
//}


//실습과제 3번
//int str_chr(char *s,int c);
//
//int main()
//{
//    char input[100];
//    char a;
//    printf("문자열을 입력하시오: ");
//    gets_s(input);
//    printf("개수를 셀 문자를 입력하시오: ");
//    a = getchar();
//    printf("%c의 개수: %d", a, str_chr(input, a));
//    return 0;
//
//}
//
//int str_chr(char *s, int c)
//{
//    int count=0;
//    for(int i=0;s[i]!=0;i++)
//    {
//        if(s[i]==c)
//            count++;
//    }
//    return count;
//}




//실습과제 4번
//int main()
//{
//    char input[100];
//    char ch;
//    int count=0;
//    printf("문자열을 입력하시오: ");
//    gets_s(input);
//    for (int j='a';j<='z';j++)
//    {
//
//        for(int i=0; input[i] != '\0'; i++)
//        {
//            if(input[i] == (char)j)
//                count++;
//        }
//        printf("%c : %d\n",j, count);
//        count=0;
//    }
//}





//실습과제 5번
//int main()
//{
//    int ch = 0;
//
//    while(1)
//    {
//        printf("문자를 입력하시오: ");
//        ch = getchar();
//        if(ch == '.')
//            break;
//        if(ch>='a'&&ch<='z')
//        {
//            ch-=32;
//            putchar(ch);
//        }
//        else if(ch>='A'&&ch<='Z')
//        {
//            ch+=32;
//            putchar(ch);
//        }
//        printf("\n");
//
//    }
//
//}
 




