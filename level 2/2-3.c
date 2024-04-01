// 2 문자 배열 정의 및 사용
// 2-3 문자열 비교
// 영어 단어 2개를 입력받아 각각 저장한뒤 , 두 단어를 비교하여 사전 순으로 더 빠른 단어를 출력하시오. 만약 동일한 단어라면 해당 단어를 출력하시오.

#include <stdio.h>

int main(void) {
    char word1[20];
    char word2[20];
    gets(word1);
    gets(word2);

    if(strcmp(word1, word2) < 0) {
        printf("%s", word1);
    } 
    else {
        printf("%s", word2);
    }
}