// 4 조건문
// 4-3 여러 가지 조건에 따라 서로 다른 실행문 실행
// 시험 점수를 입력했을 때, 해당 점수에 맞는 성적을 A~F까지 나타내는 프로그램을 작성하시오.

#include <stdio.h>

int main() {

 int score;

 scanf("%d", &score); 

 if(score>=51){

   if(score>=86)

     printf("A");

   else if(score>=71&&score <=85)

     printf("B");

   else if(score<71)

     printf("C");

 }

 else{

   if(score>=36)

     printf("D");

   else if(score>=21&&score<=35)

     printf("E");

   else

     printf("F");

 } 

   return 0;

}

 

//2번 풀이

#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if(score>=86)
        printf("당신의 성적은 A 입니다!");
    else if(score>=71&&score<=85)
        printf("당신의 성적은 B 입니다!");
    else if(score<=70&&score>=51)
        printf("당신의 성적은 C 입니다!");
    else if(score<=50&&score>=36)
        printf("당신의 성적은 D 입니다!");
    else if(score>=21&&score<=35)
        printf("당신의 성적은 E 입니다!");

    else
        printf("당신의 성적은 F 입니다!");
    return 0;
}