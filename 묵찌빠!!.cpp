#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
  char *A[] = {"묵", "찌", "빠"};
  int computer;
  char user[10];

  srand(time(NULL));//시드값 설정
  
  for(;;){
    computer = rand() % 3;//0~2까지 랜덤한 수
    printf("컴퓨터: %s\n", A[computer]);//컴퓨터가 묵, 찌, 빠 중에서 랜덤한 것 하나 출력
    printf("묵찌빠를 입력하세요 : ");
    scanf("%s", user);//사용자가 묵찌빠 중 하나 입력

    if(strcmp(user, A[computer]) == 0){
      printf("당신이 졌습니다.\n");
      break;//사용자와 컴퓨터가 낸 것이 같으면(0) 루프를 탈출한다.
    }else{
      printf("살아남았습니다. 다시 시도하세요.\n\n");//사용자와 컴퓨터가 낸 것이 다르면 루프를 이어간다.
    }
  }

  return 0;
}
