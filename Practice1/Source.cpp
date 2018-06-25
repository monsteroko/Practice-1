/**
* @file Source.cpp
* @author Олейник О.К., гр. 515а
* @date 25 июня 2018
* @brief Летняя практика
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <locale.h>

void pryam(double A1,double B1,double C1,double D1,double A2,double B2,double C2,double D2);

int main(void)
{
	setlocale(LC_ALL, "rus");
	double A1, B1, C1, D1, A2, B2, C2, D2;
	printf("Введите коэффициенты первой плоскости (A1, B1, C1, D1):");
	scanf_s("%lf%lf%lf%lf", &A1, &B1, &C1, &D1);
	printf("Введите коэффициенты второй плоскости (A2, B2, C2, D2):");
	scanf_s("%lf%lf%lf%lf", &A2, &B2, &C2, &D2);
	pryam(A1, B1, C1, D1, A2, B2, C2, D2);
	system("pause");
	return 0;
}

/**
* Расчёт уравнения прямой.
*@param A1,B1,C1,D1,A2,B2,C2,D2 - коэффициенты плоскостей.
*/
void pryam(double A1, double B1, double C1, double D1, double A2, double B2, double C2, double D2)
{
	double x0, y0, x1, y1, d, dx, dy;
	d = (A1*B2) - (A2*B1);
	dx = (B1*D2) - (B2*D1);
	dy = (D1*A2) - (D2*A1);
	x0 = dx / d;
	y0 = dy / d;
	dx = (B1*(D2 + C2)) - (B2*(D1 + C1));
	dy = ((D1 + C1)*A2) - ((D2 + C2)*A1);
	x1 = dx / d;
	y1 = dy / d;
	printf("Каноническое уравнение прямой: (x-(%.2lf))/(%.2lf) = (y-(%.2lf))/(%.2lf) = z/1.\n", x0, (x1 - x0), y0, (y1 - y0));
}