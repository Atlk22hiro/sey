#include<stdio.h>
#include<stdlib.h>
#define NUM 20


//search�֐��̒�`
void search(void)
{
    char res;

    printf("�������܂����H�iY or N�j:");
    scanf("%s",&res);

    if (res == 'Y' || res == 'y');//printf("Yse��I�����܂���\n");
    else{
        //printf("%c",res);
        printf("�I��");
        exit(0);
    }
}

int main(void)
{
    char str0[4][NUM] = { "fukushima","akita","fukushima","yamagata" };
    char str1[4][NUM] = { "sakura","matsu","take","ume" };
    char str3[NUM];
    int i,a=0;

    for(i=0; i<4; i++){
        printf("[No.%d]\n",i+1);
        printf("���O:%s\n",str1[i]);
        printf("�o�g�n:%s\n",str0[i]);
        puts("");
    }
    
    do{
        //search�֐��Ăяo��
        search();

        printf("��������s���{��������͂��ĉ�����:");
            scanf("%s",str3);
            puts ("");
            puts ("<��������>");

            //for (i=0; i<4; i++){
                //if (strcmp(str3, str0[i]) == 0){
                    //printf("[No.%d]\n",i+1);
                    //printf("���O:%s\n",str1[i]);
                    //printf("�o�g�n:%s\n",str0[i]);
                //}else
                    //puts ("�Y���҂Ȃ�");
            //}
    }while(a!=1);
    
    return 0;
}