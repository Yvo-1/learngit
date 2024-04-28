//#include <stdio.h>

//int main()
//{
	//printf("比特");

	//return 0;
//}

//#include <stdio.h>
//char--字符类型
//int main()
//{
	//char ch = 'A';
	//printf("hello world");
	//return 0;
//}

//2.58
//#include <stdio.h>
//typedef unsigned char* byte_pointer;
//int is_little_endian() {
//	int val = 0x12;
//	byte_pointer valp = (byte_pointer)&val;
//	if (valp[0] == 0x12) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	if (is_little_endian())
//		printf("is little.");
//	else
//		printf("is big");
//	return 0;
//}

//2.62
//#include <stdio.h>
//int int_shifts_are_arithmetic() {
//	int test = 1;
//	int result = test >> 1;
//	if (result ==0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	if (int_shifts_are_arithmetic()) {
//		printf("1");
//	}
//	else {
//		printf("0");
//	}
//	return 0;
//}

//2.74
//#include <stdio.h>
//int tsub_ok(int x, int y) {
//	int result = x - y;
//	if ((result > 0 && x < 0 && y>0) || (result < 0 && x>0 && y < 0))
//		return 0;
//	else
//		return 1;
//}
//int main() {
//	printf("%d", tsub_ok(222, -111));
//	return 0;
//}

//2.77
//#include <stdio.h>
//int A(int x) {
//    return (x << 4) + x;
//}
//int B(int x) {
//    return x - (x << 3);
//}
//int C(int x) {
//    return (x << 6) - (x << 2);
//}
//int D(int x) {
//    return (x << 4) - (x << 7);
//}
//int main() {
//    printf("%d\n", A(111) == 17 * 111);
//    printf("%d\n", B(111) == (-7) * 111);
//    printf("%d\n", C(111) == 60 * 111);
//    printf("%d\n", D(111) == (-112) * 111);
//    return 0;
//}

#include <stdio.h>
#include <math.h>

int main()
{
    int flag = -1;
    double e, x, d = 2;
    double sum = 1, c = 1;
    double jiecheng(int a);
    double fenzi, fenmu;
    scanf_s("%lf,%lf", &e, &x);
    while (c>e)
    {
        fenzi = pow(x, d);
        fenmu = jiecheng(d);
        c =  fenzi / fenmu;
        sum = sum +flag* c;
        flag = -flag;
        d = d +2;
    }
    printf("%lf", sum);
    return 0;
}
double jiecheng(int a)
{
    int i, s=1;
    for (i = 1; i <= a; i++)
    {
        s = s * i;
    }
    return s;
}
//#include <stdio.h>
//#include <math.h>
//
//double funcos(double e, double x);
//
//int main()
//{
//	double e, x;
//
//	scanf_s("%lf %lf", &e, &x);
//	printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
//
//	return 0;
//}
//
///* 你的代码将被嵌在这里 */
//double funcos(double e, double x) {
//	int flag = -1;
//	double item = 1, m = 2, sum = 1;
//	double fenmu = 1, fenzi;
//
//	while (item > e) {
//		for (int i = 1; i <= m; i++) {
//			fenmu = fenmu * i;
//		}
//		fenzi = pow(x, m);
//		item = fenzi / fenmu;
//		sum = sum + flag * item;
//		m = m + 2;
//		fenmu = 1;
//		flag = -flag;
//	}
//	return sum;
//}