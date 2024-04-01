// 2 문자 배열 정의 및 사용
// 2-4 문자열 복사
// 문자열 2개를 입력받아 저장한 뒤 각각 출력하고, 그 후 처음 입력받은 문자열 변수에 다음에 입력받은 문자열을 복사한뒤 각각 출력하시오. 단, 문자열을 1개를 출력할 때마다 개행하여 출력하시오.

#include <stdio.h>

int main(void) {
    char word1[20];
    char word2[20];
    gets(word1);
    gets(word2);

    printf("%s\n", word1);
    printf("%s\n", word2);

    strcpy(word1, word2);

    printf("%s\n", word1);
    printf("%s\n", word2);
}