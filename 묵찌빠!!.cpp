#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
  char *A[] = {"��", "��", "��"};
  int computer;
  char user[10];

  srand(time(NULL));//�õ尪 ����
  
  for(;;){
    computer = rand() % 3;//0~2���� ������ ��
    printf("��ǻ��: %s\n", A[computer]);//��ǻ�Ͱ� ��, ��, �� �߿��� ������ �� �ϳ� ���
    printf("������� �Է��ϼ��� : ");
    scanf("%s", user);//����ڰ� ����� �� �ϳ� �Է�

    if(strcmp(user, A[computer]) == 0){
      printf("����� �����ϴ�.\n");
      break;//����ڿ� ��ǻ�Ͱ� �� ���� ������(0) ������ Ż���Ѵ�.
    }else{
      printf("��Ƴ��ҽ��ϴ�. �ٽ� �õ��ϼ���.\n\n");//����ڿ� ��ǻ�Ͱ� �� ���� �ٸ��� ������ �̾��.
    }
  }

  return 0;
}
