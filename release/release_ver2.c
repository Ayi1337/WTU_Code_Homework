#include<stdio.h>
#include<stdlib.h>

#define PLAYER 10
#define TEACHER 7

void menu();
void in_name();
void sub_menu_1();
void sub_menu_2();
void sub_menu_3();
void sub_menu_4();
void sub_menu_5();
void clean_screen();

struct players
{
	int player_number;
	char player_name[PLAYER];
	char player_gender;
	int player_score[PLAYER];
	float player_ave;
}player[PLAYER]={
             {1,"王小红1",'M',0,0,0,0,0,0,0,0,0,0},
             {2,"王小红2",'M',10,2,6,4,7,8,5,1,4,7},
             {3,"王小红3",'M',10,3,6,4,7,8,5,1,4,7},
             {4,"王小红4",'M',10,4,6,4,7,8,5,1,4,7},
             {5,"王小红5",'M',10,5,6,4,1,8,5,1,4,7},
             {6,"王小红6",'M',10,6,6,4,7,8,5,1,4,7},
             {7,"王小红7",'M',10,7,6,1,7,8,5,1,4,7},
             {8,"王小红8",'M',10,8,6,4,7,8,5,1,4,7},
             {9,"王小红9",'M',10,0,6,4,7,8,5,1,4,7},
             {10,"王小红0",'M',10,0,6,4,7,8,5,1,4,7}
             },temp;
int main()
{
	menu();
}  

void menu()
{
	int choice;
	printf("*******************请选择操作代码***********************\n");
    printf("*    1.录入姓名及性别\n");
	printf("*    2.输入分数\n");
	printf("*    3.计算平均分\n");
	printf("*    4.显示选手最后得分\n");
	printf("*    5.删除无效选手成绩\n");
	printf("*    6.显示选手排名次序\n");
	printf("*    7.退出系统\n");
	printf("*********************************************************\n");
	scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        in_name();
        break;
    
    case 2:
        sub_menu_1();
        break;

    case 3:
        sub_menu_2();
        break;

    case 4:
        sub_menu_3();
        break;

    case 5:
        sub_menu_4();
        break;

    case 6:
        sub_menu_5();
        break;

    case 7:
        exit(0);
    
    default:
        printf("您的输入不合法，请重试\n");
        menu();
    }
}

void in_name()
{
    clean_screen();
    for (int i = 0; i < PLAYER; i++)
    {   
        printf("请输入选手%d的姓名为和性别(男性请输入M,女性输入F)：\n",i+1);
        scanf("%s %s",&player[i].player_name,&player[i].player_gender);
        player[i].player_number=i+1;
    }
    menu();
}

void sub_menu_1()
{
    clean_screen();
    printf("现在请评委打分\n");
    for (int i = 0; i < PLAYER; i++)
    {
        for (int x = 0; x < TEACHER; x++)
        {
            scanf("%d",&player[i].player_score[x]);
            if (player[i].player_score[x]>10||player[i].player_score[x]<0)
            {
                printf("输入不合法，请重试\n");
                x--;
                continue;
            }
            printf("评委%d给参赛选手%d出的分数为：%d\n",x+1,i+1,player[i].player_score[x]);
        }
        printf("参赛选手%d成绩输入完毕\n",i+1);
    }
    printf("全部%d名参赛选手成绩输入完毕\n",PLAYER);
    menu();
}

void sub_menu_2()
{
    clean_screen();
    float sum;
    printf("现在进入计算平均分环节：\n");
    int i,x,j,temp;
    for(i=0;i<PLAYER;i++)
    {
        for(x=0;x<PLAYER;x++)
        {
            for(j=0;j<TEACHER-1;j++)
            {
                if(player[x].player_score[j]>player[x].player_score[j+1])
                {
                    temp=player[x].player_score[j+1];
                    player[x].player_score[j+1]=player[x].player_score[j];
                    player[x].player_score[j]=temp;
                }
            }
        }
    }
    for ( i = 0; i < PLAYER; i++)
    {
        sum=0;
        printf("第%2d名选手的分数为：",i+1);
        for ( x = 0; x < TEACHER; x++)
        {
            printf("%3d",player[i].player_score[x]);
            sum+=player[i].player_score[x];
        }
        player[i].player_ave=(sum-player[i].player_score[0]-player[i].player_score[6])/5.0;
        printf("\t去除最低分%d与最高分%d后最后得分为：%.2f",player[i].player_score[0],player[i].player_score[6],player[i].player_ave);
        printf("\n");
    }
    menu();
}

void sub_menu_3()
{
    clean_screen();
    for (int i = 0; i < PLAYER; i++)
    {
        printf("%2d号选手%10s,性别%c,最后得分为%.2f\n",player[i].player_number,player[i].player_name,player[i].player_gender,player[i].player_ave);
    }
    menu();
}

void sub_menu_4()
{
    clean_screen();
    for (int i = 0; i < PLAYER; i++)
    {
        if(player[i].player_ave<6.0)
        {
            printf("%d号选手因其中一项0分成绩无效，被删除\n",player[i].player_number);
            player[i].player_ave=0;
            continue;
        }
        for (int x = 0; x < TEACHER; x++)
        {
            if (player[i].player_score[x]==0)
            {
                printf("%d号选手成绩无效，被删除\n",player[i].player_number);
                player[i].player_ave=0;
                break;
            }
        }
    }
    printf("成绩筛选完成\n\n");
    menu();
}

void sub_menu_5()
{
    clean_screen();
    for (int i = 0; i < PLAYER-1; i++)
    {
        for (int j = i+1; j < PLAYER; j++)
        {
            if (player[i].player_ave < player[j].player_ave)
            {
                temp=player[i];
                player[i]=player[j];
                player[j]=temp;
            }
        }
    }
    for ( int i = 0; i < PLAYER; i++)
    {
        if(player[i].player_ave==0)
        {
            printf("%2d号选手%10s,性别%c,最后得分%.2f,无排名\n",player[i].player_number,player[i].player_name,player[i].player_gender,player[i].player_ave);
        }else
            printf("第%2d名为%2d号选手%10s,性别%c,最后得分为%.2f\n",i+1,player[i].player_number,player[i].player_name,player[i].player_gender,player[i].player_ave);
    }
    menu();
}

void clean_screen()
{
    system("cls");
}