// 3 포인터
// 3-3 포인터 반환
// 총 5개의 정수를 입력받아 정수형 1차원 배열에 저장하고 이 중 가장 작은 원소가 있는 곳의 주소값을 리턴하는 find() 함수를 작성하고 main() 함수에서 포인터 변수를 활용해 해당 주소값을 넘겨받아 출력하시오. 단, 배열의 인덱스를 넘겨선 안되고 반드시 주소값을 넘겨야한다

#include <stdio.h>

int* find(int arr[]) {
    int min = 0;
    for(int i=1; i<5; i++) {
        if(arr[min] > arr[i])
            min = i;
    }
    return &arr[min];
}

int main(void) {
    int arr[5];
    int num=0;
    int *p;

    for(int i=0; i<5; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }
    p = find(arr);
   printf("%d", *p);
}
