//#include<stdio.h>
//void main()
//{
//	double r = 3.67, c, s;
//	c = 2 * 3.1415926 * r;
//	s = 3.1415926 * r * r;
//	printf("c=%f\ns=%f\n",c,s);
//
//}

//#define PI 3.1415926
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	double r = 3.67, c, s;
//	c = 2 * PI * r;
//	s = PI * r * r;
//	//printf("c=%f\ns=%f\n",c,s);
//}
// 
// 
// 
//#include<stdio.h>
//void main()
//{
//	char c1 = 'a', c2 = 'b';
//	c1 = c1 - 32;
//	c2 = c2 - 32;
//	printf("%c,%c\n",c1,c2);
//}
//
// 
// 
//#include<stdio.h>
//void main()
//{
//	char c1 = 97, c2 = 98;
//	printf("%c,%c\n",c1,c2);
//	printf("%d,%d\n",c1,c2);
//}
// 
// 
// 
//#include<stdio.h>
//void main()
//{
//	char a = 'C', b = 'H', c = 'I', d = 'N', e = 'A';
//	printf("%c%c%c%c%c\n",a,b,c,d,e);
//	printf("%c%c%c%c%c\n",e,d,c,b,a);
//}
//
// 
//#include<stdio.h>
//void main()
//{
//	double f1;
//	double f2;
//	f1 = 1 / 3;
//	f2 = 0.1 / 0.3;
//	printf("f1=%f\nf2=%f\n",f1,f2);
//}
// 
// 
//#include<stdio.h>
//void main()
//{
//	int i = 6, a, b;
//	printf("%d\n",++i);
//	printf("%d\n",i++);
//	a = --i, ("%d\n", a);
//	b = i--, ("%d\n", b);
//	printf("%d\n",-i++);
//	printf("i=%d\n",i);
//}


//#include<stdio.h>
//void main()
//{
//	float f = 3.6; int i;
//	i = (int)f;
//	printf("f=%f,i=%d\n",f,i);
//
//}
//
//#include<stdio.h>
//void main()
//{
//	int a = 12, b;
//	b = (a += a -= a * a);
//	printf("a=%d,b=%d\n",a,b);
//}

//
#include<stdio.h>
void main()
{
	int a = 2, b = 4, c = 6;
	int x, y;
	y = ((x = a + b), (b + c));
	printf("x=%d,y=%d\n",x,y);
}