#include<stdio.h>
#include<stdlib.h>
#define NUM 20


//search関数の定義
void search(void)
{
    char res;

    printf("検索しますか？（Y or N）:");
    scanf("%s",&res);

    if (res == 'Y' || res == 'y');//printf("Yseを選択しました\n");
    else{
        //printf("%c",res);
        printf("終了");
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
        printf("名前:%s\n",str1[i]);
        printf("出身地:%s\n",str0[i]);
        puts("");
    }
    
    do{
        //search関数呼び出し
        search();

        printf("検索する都道府県名を入力して下さい:");
            scanf("%s",str3);
            puts ("");
            puts ("<検索結果>");

            //for (i=0; i<4; i++){
                //if (strcmp(str3, str0[i]) == 0){
                    //printf("[No.%d]\n",i+1);
                    //printf("名前:%s\n",str1[i]);
                    //printf("出身地:%s\n",str0[i]);
                //}else
                    //puts ("該当者なし");
            //}
    }while(a!=1);
    
    return 0;
}