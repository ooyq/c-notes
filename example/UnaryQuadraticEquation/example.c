/*
 * 一元二次方程 *

【题目描述】
        输入系数 a、 b 和 c，求方程 ax2 + bx + c ＝ 0的根。

【输入格式】
        输入数据有多组。每组数据包括三个系数 a, b, c。当 a = 0 时，输入数据结束。

【输出格式】
        输出方程的根，格式参见输出样例，保留到小数点后2位。

【输入样例】
        1 2 1
        1.0 -4.0 3.0
        1.5 2.0 1.5
        0 0 0

【输出样例】
        x1 = x2 = -1.00
        x1 = 3.00, x2 = 1.00
        x1 = -0.67 + 0.75i, x2 = -0.67 - 0.75i

【编程思路】
        一元二次方程根的情况：
            ① 两个不等实根
            ② 两个相等实根
            ③ 共轭复根（）
            ③ 无解
*/

#include <stdio.h>

#include <math.h>

int main()

{

    double a, b, c, D, real, imag, x1, x2; // a b c 为未知数系数或常量，D 为 一元二次函数根的判别式Δ

    scanf("%lf %lf %lf", &a, &b, &c); // 输入方程式系数

    D = b * b - 4 * a * c;
    while (1)

    {

        if (a == 0) // 当 a = 0 时，输入数据结束
            break;

        // 不等实根
        if (D > 0)

        {

            x1 = (-b + sqrt(D)) / (2 * a);

            x2 = (-b - sqrt(D)) / (2 * a);

            printf("x1 = %.2f, x2 = %.2f \n", x1, x2);
        }

        // 相等实根
        else if (D == 0)

        {

            x1 = x2 = (-b) / (2 * a);

            printf("x1 = x2 = %.2f \n", x1);
        }

        // 共轭复根 （D < 0）
        else

        {

            real = (-b) / (2 * a);

            imag = sqrt(-D) / (2 * a);

            printf("x1 = %.2f + %.2fi, x2 = %.2f - %.2fi \n", real, imag, real, imag);
        }
    }
    return 0;
}