#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "rus");
	double A1, B1, C1, D1, A2, B2, C2, D2,x0,y0,x1,y1,d,dx,dy;
	printf("Введите коэффициенты первой плоскости (A1, B1, C1, D1):");
	scanf_s("%lf%lf%lf%lf", &A1, &B1, &C1, &D1);
	printf("Введите коэффициенты второй плоскости (A2, B2, C2, D2):");
	scanf_s("%lf%lf%lf%lf", &A2, &B2, &C2, &D2);
	d = (A1*B2) - (A2*B1);
	dx = (B1*D2) - (B2*D1);
	dy = (D1*A2) - (D2*A1);
	x0 = dx / d;
	y0 = dy / d;
	dx = (B1*(D2+C2)) - (B2*(D1+C1));
	dy = ((D1+C1)*A2) - ((D2+C2)*A1);
	x1 = dx / d;
	y1 = dy / d;
	printf("Каноническое уравнение прямой: (x-(%.2lf))/(%.2lf) = (y-(%.2lf))/(%.2lf) = z/1.\n",x0,(x1-x0),y0,(y1-y0));
	system("pause");
	return 0;
}