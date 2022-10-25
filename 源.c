//#include<stdio.h>
//void main()
//{
//	printf("This is a program\n");
//}

//#include<stdio.h>
//void main()
//{
//	int a, b, sum;
//	a = 123; b = 456;
//	sum = a + b;
//	printf("sum is%d\n", sum);
//}
//#include<stdio.h>
//void main()
//{
//	int max(int x, int y);
//	int a, b, c;
//	scanf_s("%d,%d", &a, &b);
//	c = max(a, b);
//	printf("max=%d\n",c);
//}
//int max(int x, int y)
//{
//	int z;
//	if (x > y) z = x;
//	else z = y;
//	return(z);
//}
//#include<stdio.h>
//void main()
//{
//	char a, b, c;
//	a = 'B', b = 'O', c = 'Y';
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//}
//
//#include<stdio.h>
//void main()
//{
//	int a = 66, b = 79, c = 89;
//	a = '66', b = '79', c = '89';
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//}

//#include<stdio.h>
//void main()
//{
//	char a, b, c;
//	a = getchar();
//	b = getchar();
//	c = getchar();
//	putchar(a); 
//    putchar(b);
//    putchar(c);
//	putchar('\n');
//}

//#include<stdio.h>
//void main()
//{
//	char a, b, c;
//	a = 'B'; b = 'O'; c = 'Y';
//	putchar(a); putchar('\n'); putchar(b); putchar('\n'); putchar(c); putchar('\n');
//}

//#include<stdio.h>
//void main()
//{
//	putchar(getchar());
//	putchar(getchar());
//	putchar(getchar());
//	putchar('\n');
//}

//#include<stdio.h>
//void main()
//{
//	if (getchar() != 0)
//		printf("fedfsdg\n");
//}

//#include<stdio.h>
//void main()
//{
//	char c = 'a';
//	int i = 97;
//	printf("c=%c,c=%d\n", c, c);
//	printf("i=%c,i=%d\n", i, i);
//}

//#include<stdio.h>
//void main()
//{
//	printf("%s\n", "CHINA");
//}
//
//#include<stdio.h>
//void main()
//{
//	float a, b;
//	a = 111111.111; b = 222222.222;
//	printf("%f\n", a + b);
//}

//#include<stdio.h>
//void main()
//{
//	double a, b;
//	a = 11111111.11111111; b = 22222222.22222222;
//	printf("%f\n", a + b);
//}

//#include<stdio.h>
//void main()
//{
//	printf("%e", 123.456);
//}

//#include<stdio.h>
//void main()
//{
//	int a, b, c;
//	scanf_s("%d%d%d", &a, &b, &c);
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//}

//#include<stdio.h>
//void main()
//{
//	int a, b, c;
//	scanf_s("a=%d,b=%d,c=%d", &a, &b, &c);
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//}

//#include<stdio.h>
//#include<math.h>
//void main()
//{
//	float a, b, c, s, area;
//	printf("输入三个边长");
//	scanf_s("%f,%f,%f", &a, &b, &c);
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		s = (a + b + c) / 2;
//		area = sqrt(s * (s - a) * (s - b) * (s - c));
//		printf("a=%.2f,b=%.2f,c=%.2f\n", a, b, c);
//		printf("area=%.4f\n，area");
//	}
//	else printf("不能构成三角形!\n");
//
//}

//#include<stdio.h>
//void main()
//{
//	char c1, c2;
//	c1 = getchar();
//	printf(" % c, % d\n", c1, c1); 
//	c2 = c1 + 32;
//	printf("%c,%d\n", c2, c2);
//}

//#include<stdio.h>
//void main()
//{
//	putchar(getchar() + 32);
//	putchar(getchar() + 32);
//	putchar(getchar() + 32);
//	putchar('\n');
//}

//#include<stdio.h>
//#include<math.h>
//void main()
//{
//	double a, b ,c, disc, x1, x2, p, q;
//	scanf_s("a=%if,b=%if,c=%if", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	p = -b / (2 * a);
//	q = sqrt(disc) / (2 * a);                       //不理解，最后的输出结果不太对
//	x1 = p + q; x2 = p - q;
//	printf("x1=%.2f\nx2=%.2f\n", x1, x2);
//}

