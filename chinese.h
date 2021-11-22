#ifndef CHINESE_H
#define CHINESE_H
/* header begin */
  
#define  包含 include
#define  标准输入输出库 <stdio.h>
#define  布尔逻辑库 <stdbool.h>


#define  主函数 main
#define  返回 return
#define  开始 {
#define  结束 }



// #define  不能修改 const
#define  常量 const
#define  布尔数 bool
#define  真 true
#define  假 false
#define  整数 int
#define  实数 float
#define  字符 char
#define  字符串指针 char *
#define  字符串(c) char c[1024] 
#define  空 void
#define  整数数组(c,l) int (c)[(l)] 
#define  数组项(c,l) (c)[(l)-1]
#define  枚举 enum 



#define  将 
#define  如果 if
#define  否则 else
#define  循环 for
#define  循环正序次数i(c) for(int 当前次数i = 1; 当前次数i  <= c ; 当前次数i++)
#define  循环正序次数j(c) for(int 当前次数j = 1; 当前次数j  <= c ; 当前次数j++)
#define  循环正序次数k(c) for(int 当前次数k = 1; 当前次数k  <= c ; 当前次数k++)
#define  执行 do
#define  当 while
#define  判断 switch
#define  当等于 case
#define  跳出 break
#define  继续 continue 

#define  设为 =
#define  等于 ==
#define  不等于 !=
#define  大于 >
#define  大于等于 >=
#define  小于 <
#define  小于等于 <=

#define  加 +
#define  减 -
#define  乘 *
#define  除 /
#define  余数 %






// #define  屏幕输出 printf
#define  屏幕输出整数函数(c) printf("%d", c)
#define  屏幕输出字符串函数(c) printf("%s", c)
#define  屏幕输出字符函数(c) printf("%c", c)
#define  空格 printf("%c",' ')
#define  换行 printf("\n")
#define  屏幕输入整数函数(c)   scanf("%d", &c)
#define  屏幕输入字符函数   getchar()


#define  正常退出 0
#define  换行符号 '\n'
#define  字符串结束符号 '\0'
/* header end */
#endif