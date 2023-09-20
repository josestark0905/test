#include <stdio.h>
#include <math.h>	       //程序中要调用指数函数pow
#define PI 3.1415926       //宏定义符号常量
const double pi=3.1415926;  //定义常变量(全局变量),类似变量定义,语句后跟分号
void main(){
    double s,r,c,t;
    printf("请输入圆的半径 r= ");
    scanf("%lf",&r);       //用格式声明"%lf"输入双精度型double变量的值
    c=2*PI*r;
    s=pi*r*r;              //常浮点型变量pi,在变量存在期间其值不能改变
    printf("圆的周长c=%lf 面积s=%.10lf\n",c,s);//用格式声明"%lf"输出双精度型double变量的值
}
