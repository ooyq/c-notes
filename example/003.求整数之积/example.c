/* 输入两个数，输出乘积 */

#include <stdio.h>

main(){
    int x,y,m;        /* 定义整型变量x,y,m */
    printf("请输入x和y \n");	/* 输出提示信息 */
		scanf("%d %d",&x,&y);			/* 读入两个乘数，赋给x，y变量 */
		m = x * y;					/* 计算两个乘数的积，赋给变量m */
		printf("%d * %d = %d\n",x,y,m);		/* 输出结果 */
}