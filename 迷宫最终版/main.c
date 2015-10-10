#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

//定义上下左右数值
#define up 8
#define down 2
#define left 4
#define right 6

//定义点标记存储数组
bool s[19][29];
//定义墙壁信息存储数组
bool t[19][29];
//定义未标记邻点存储数组
int evn[5];
//定义未标记邻点数
int num=0;
//定义标记总点数
int sum=0;
//定义方向变量
int direction=0;
//定义键入存储变量
char in;

//定义坐标结构体并申明当前位置、玩家、起点、终点
struct coordinate
{
    int x;
    int y;
}now,player,origin,final;

//定义栈结构并申明
struct stack
{
    int top;
    struct coordinate k[600];
}stk;

//探测未标记邻点函数
int explore()
{
    int num=0;
    //上方
    if(now.x-2>=0 && !s[now.x-2][now.y])
    {
        evn[++num]=up;
    }
    //下方
    if(now.x+2<=18 && !s[now.x+2][now.y])
    {
        evn[++num]=down;
    }
    //左边
    if(now.y-2>=0 && !s[now.x][now.y-2])
    {
        evn[++num]=left;
    }
    //右边
    if(now.y+2<=28 && !s[now.x][now.y+2])
    {
        evn[++num]=right;
    }
    return num;
}

//消去当前点与邻点间的墙壁
void cancle()
{
    switch(direction)
    {
        case up:t[now.x-1][now.y]=true;     break;
        case down:t[now.x+1][now.y]=true;   break;
        case left:t[now.x][now.y-1]=true;   break;
        case right:t[now.x][now.y+1]=true;  break;
    }
}

//将选定的邻点作为当前点
void move()
{
    switch(direction)
    {
        case up:now.x-=2;    break;
        case down:now.x+=2;  break;
        case left:now.y-=2;  break;
        case right:now.y+=2; break;
    }
}

//迷宫构建函数
void mazecreate()
{
    int nb=0,ran,m,n;
    //初始化数组
    memset(s,false,19*29*sizeof(bool));
    memset(t,false,19*29*sizeof(bool));
    //定义起点、终点
    origin.x=0;
    origin.y=0;
    final.x=18;
    final.y=28;
    //初始化栈
    stk.top=0;
    //将当前点置于起点
    now=origin;
    //当前点入栈
    stk.k[stk.top++]=now;
    //标记当前点并消去当前点的墙壁
    s[now.x][now.y]=true;
    t[now.x][now.y]=true;
    sum++;
    //取种子
    srand((unsigned)time(NULL));
    //当未遍历时循环
    while(!s[18][28] || !t[18][28] || sum!=150)
    {
        //探测周围邻点是否有未标记的
        nb=explore();
        //若有未标记的邻点
        if(nb)
        {
            //随机取一个未标记邻点
            ran=rand()%nb+1;
            direction=evn[ran];
            //消去当前点与邻点的墙
            cancle();
            //将邻点作为当前点
            move();
            //标记当前点并消去当前点的墙壁
            s[now.x][now.y]=true;
            t[now.x][now.y]=true;
            sum++;
            //当前点入栈
            stk.k[stk.top++]=now;
        }
        //若没有未标记的邻点
        else
        {
            //当栈不为空时
            if(stk.top)
            {
                //顶点出栈作为当前点
                stk.top--;
                now=stk.k[--stk.top];
            }
            //若栈为空
            else
            {
                //随机取一未标记的点作为当前点
                m=0;
                n=0;
                while(s[m][n])
                {
                    m=(rand()%10)*2;
                    n=(rand()%15)*2;
                }
                now.x=m;
                now.y=n;
                //当前点入栈
                stk.k[stk.top++]=now;
                //标记当前点并消去当前点的墙壁
                s[m][n]=true;
                t[m][n]=true;
                sum++;
            }
        }
    }
}

void mazeprint()
{
    int i,j;
    //打印最上层墙壁
    for(i=1;i<=31;i++)
        printf("■");
        printf("\n");
    for(i=0;i<19;i++)
    {
        //打印左方墙壁
        printf("■");
        for(j=0;j<29;j++)
        {
            if(i==player.x && j==player.y)
                printf("◎");
            else
            {
                if(i==final.x && j==final.y)
                    printf("终");
                else
                {
                    if(t[i][j])
                        printf("  ");
                    else
                        printf("■");
                }
            }
        }
        //打印右方墙壁
        printf("■\n");
    }
    //打印最下方墙壁
    for(i=1;i<=31;i++)
        printf("■");
}

//欢迎界面
void menu()
{
    int i;
    for(i=0;i<34;i++)
        printf("■");
    printf("\n\n\n\n");
    for(i=0;i<10;i++)
        printf("  ");
    printf("欢迎使用随机迷宫程序。\n\n\n\n");
    for(i=0;i<34;i++)
        printf("■");
    printf("\n按任意键继续。\n");
    Sleep(3000);
    getch();
    system("cls");
    printf("操作方式为：\n向上走为8，向下走为2，向左走为4，向右走为6。\n");
    printf("按任意键进入迷宫。\n");
    Sleep(3000);
    getch();

}

//行走函数
void play()
{
    //将玩家置于起点
    player.x=0;
    player.y=0;
    //当未到达终点时循环
    while(player.x!=final.x || player.y!=final.y)
    {
        //键入
        in=getch();
        //根据键入内容，判断是否行走，行走方向
        switch(in)
        {
            case '8':if(t[player.x-1][player.y])    player.x--; break;
            case '2':if(t[player.x+1][player.y])    player.x++; break;
            case '4':if(t[player.x][player.y-1])    player.y--; break;
            case '6':if(t[player.x][player.y+1])    player.y++; break;
        }
        //清屏并重新打印迷宫
        system("cls");
        mazeprint();
    }
    //走到终点跳出循环，成功
    printf("\n成功！恭喜！\n");
}

int main()
{
    menu();
    system("cls");
    mazecreate();
    mazeprint();
    play();
    return 0;
}
