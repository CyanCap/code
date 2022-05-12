#include<bits/stdc++.h>

// int i, j;                           //矩阵转置
// using namespace std;
// int main()
// {
//     int r, c;
//     cin >> r >> c;
//     int M[r][c];
//     for (i = 0; i < r;i++)
//         for (j = 0; j < c;j++)
//         {
//             cin >> M[i][j];
//         }
//     cout << endl;
//     for (i = 0; i < r;i++)
//     {
//         for (j = 0; j < c;j++)
//         {
//             cout << M[i][j]<<" ";
//         }
//         cout << endl;
//     }

//     int M_t[c][r];
//     for (i = 0; i < c;i++)
//         for (j = 0; j < r;j++)
//         {
//             M_t[i][j] = M[j][i];
//         }
//     cout << endl;
//     for (i = 0; i < c;i++)
//     {
//         for (j = 0; j < r;j++)
//         {
//             cout << M_t[i][j]<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<stdlib.h>
// #define true 1
// #define false 0
// int *c, steps, sum, dim;
// int fact(int);
// void swap(int *, int *);
// bool sym(int *);
// void perm(int *, int, int);

// int main()
// {
//     int *b, i, j, exit;
// here:
//     system("cls");
//     cin >> dim;
//     b = (int *)malloc(sizeof(int) * a);
//     c = (int *)malloc(sizeof(int) * a * a);
//     for (i = 0; i < dim; i++)
//     {
//         if(i%dim==0)
//             cout << i / dim + 1 << "行" << endl;
//         cin >> c + i;
//     }
//     cout << endl
//          << endl;
//     perm(b, 0, dim - 1);
//     cout << endl
//          << "共有" << fact() << "项" << endl;
//     if(dim%2!=0)
//         j = dim + 1;
//     else
//         j = dim;
//     for (i = 0; i < dim * dim;i++)
//     {
//         if(i/dim+1==j/2 &&i%dim==0)
//             cout << "D = ";
//         else if(i%dim==0)
//             cout << "    ";
//         if(i%dim==0)
//             cout << "|";
//         if((i+1)%dim==0)
//             cout << *(c + i);
//         else
//             cout << *(c + i) << " ";
//         if((i+1)%dim==0)
//             cout << "|";
//         if((i+1)/dim==j/2 && (i+1)%dim==0)
//             cout << " = " << sum << endl;
//         else if((i+1)%dim==0)
//             cout << endl;
//     }
//     cout << endl
//          << endl
//          << "继续？" << endl;
//     cin << exit;
//     if(exit==1)
//         goto here;
//     else if(exit==0)
//         exit(0);
// }

// int fact(int a)
// {
//     int s = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         s *= i;
//     }
//     return s;
// }

// void swap(int *a,int *b)
// {
//     int m = *a;
//     *a = *b;
//     *b = m;
// }

// bool sym(int *l)
// {
//     int n = 0;
//     for (int i = 0; i < dim - 1;i++)
//         for (int j = i + 1; j < dim;j++)    
//             if(l[i]>l[j])
//                 n++;
//     if(n%2==0)
//         return false;
//     else
//         return true;
// }

// void perm(int *l, int k, int m)
// {
//     int i, s = 1;
//     if(k>m)
//     {
//         steps++;
//         for (int j = 0; j < dim;j++)
//             s *= c[l[j] + dim * j];
//         if(sym(l))
//             s *= -1;
//         printf("%5d      完成度：%2.2f%%\n", sum + = s, n / (aq(a) * 0.1) * 10);
//     }
//     else
//     {
//         for (i = k; i <= m;i++)
//         {
//             swap(l + k, l + i);
//             perm(l, k + 1, m);
//             swap(l + k, l + i);
//         }
//     }
// }

#include <malloc.h>
#include <stdlib.h>//包含的头文件不解释
typedef bool int   //因为标准c里边没有bool类型才这么做
#define false 0
#define true 1
    //定义几个全局变量，无奈之举
    int *c,
    n = 0, a, sum = 0;
int aq(int a)              //计算阶乘的函数，就不多解释了
{
    int s = 1;
    for (int i = 1; i <= a; i ++)
        s *= i;
    return s;
}
void swap(int *a, int *b)  //利用地址传递，交换两个数的值
{
    int m = * a;
    * a = * b;
    *b = m;
}
bool sa(int *l) //计算在行列式计算过程中每一项前边的符号是正还是负
{
    int n = 0;//n为行列式展开式每一项的逆序数
    for (int i = 0; i < a - 1; i ++)
        for (int j = i + 1; j < a; j++)
            if (l[i] > l[j])n++; //不断通过条件判断累加逆序数得出最终的逆序数
    if (n % 2 == 0) return false; //若为正，则返回false
    return true;//否则返回true
}
void perm(int *l, int k, int m) //整个程序里边的核心函数，找出在不同行不同列的所有组合
{
    int i, s = 1;
    if (k > m)
    {
        n++;//每递归回来一次，将记录运行次数加一
        for (int j = 0; j < a; j ++)
            s *= c[ l[ j ] + a * j ];//算出此次行列式展开式的这项的值
        if ( sa( l ) ) s * = -1; //确定这一项的符号
        //输出当前sum内的值（即到当前为止所得到的结果是多少）
        //输出运行的完成程度（即当前运行的次数除以总次数）
        printf("%5d      完成度：%2.2f%%\n", sum + = s, n / ( aq( a ) * 0.1 ) * 10 );
    }
    else  //不断的向内递归，就不多解释了，因为很多大公司招聘的时候，全排列问题在笔试环节是必出题，百度里有很多解释
    {
        for (i = k; i <= m; i++)
        {
            swap(l + k, l + i);
            perm(l, k + 1, m);
            swap(l + k, l + i);
        }
    }
}
void main()//主函数
{
    int *b, //一个辅助变量，在递归函数中将b指向的空间内的值进行全排列，也即行列式展开式不同组合的下标
        i, //循环中的辅助变量
        f, //在格式化输出行列式的辅助变量
        e;//判断是否退出程序的标志位
    system("color 3e");//设置程序运行的前景色和背景色
u: system("cls");//清空屏幕
    printf("请输入行列式的阶数：\n");
    scanf("%d", &a);//获取行列式的阶数
    b = ( int *) malloc ( sizeof ( int ) * a ); //为变量申请空间
    c = ( int *) malloc ( sizeof ( int ) * a * a );
    for ( i = 0; i < a; i++)
        * ( b + i ) = i;//为辅助变量也即行列式下标逐个赋值
    for ( i = 0; i < a * a; i++)
    {
        if ( i % a == 0 )
            printf("请依次输入行列式中第%d行的值（以空格分隔）：\n", i / a + 1 ); //提示输入行列式的值
        scanf("%d", c + i );
    }
    printf("\n\n");
    perm( b, 0, a - 1 );//计算行列式的值
    printf("\n行列式展开式共有%d项\n", aq( a ) );//打印出来行列式的各种信息
    if ( a % 2 != 0 ) f = a + 1;//判断当前的行列式是偶数行还是奇数行
    else f = a;
    for ( i = 0; i < a * a; i ++ )
    {
        if ( i / a + 1 == f / 2 && i % a == 0) //判断是否达到行列式中间的一行行首
            printf("D = ");//输出“D = ”
        else if ( i % a == 0) //判断是否是每一行的行首，若是则输出四个空格，保证输出的格式优美
            printf("    ");
        if ( i % a == 0) //判断是否是行首，若是输出制表符竖线，可与上一句写到一块儿
            printf("┃");
        if ( ( i + 1 ) % a == 0) //判断是否是行列式某一行的最后一个数
            printf("%2d", * ( c + i ) );
        else printf("%2d ", * ( c + i ) );//若不是行列式某一行的最后一个数则在数字后边加一个空格
        if ( ( i + 1 ) % a == 0 ) //判断是否到达一行的行末
            printf("┃");
        if ( ( i + 1 ) / a == f / 2 && ( i + 1 ) % a == 0) //判断是否达到行列式中间一行的行末，输出整个行列式的值
            printf(" = %d\n", sum);
        else if ( ( i + 1 ) % a == 0 ) //判断是否到达行末输出换行
            printf("\n");
    }
    printf("\n\n");
    printf("是否继续？（ 1 / 0 ）\n");//提示是否退出
    scanf("%d", &e);
    n = 0;//每次都将都将上一次的运行记录消除
    if ( e == 1 ) goto u; //判断是否推出
    else if ( e == 0 ) exit( 0 );
}