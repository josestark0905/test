#include <stdio.h>
#include <math.h>	       //������Ҫ����ָ������pow
#define PI 3.1415926       //�궨����ų���
const double pi=3.1415926;  //���峣����(ȫ�ֱ���),���Ʊ�������,������ֺ�
void main(){
    double s,r,c,t;
    printf("������Բ�İ뾶 r= ");
    scanf("%lf",&r);       //�ø�ʽ����"%lf"����˫������double������ֵ
    c=2*PI*r;
    s=pi*r*r;              //�������ͱ���pi,�ڱ��������ڼ���ֵ���ܸı�
    printf("Բ���ܳ�c=%lf ���s=%.10lf\n",c,s);//�ø�ʽ����"%lf"���˫������double������ֵ
}
