#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*

�������� ������������ ���������� a, b � � � ������ �� ��������. �����������, ��� a, b, c ���� ������������ ����������� ��������� ������� �� ������� �������� �� ���-��� �1, �2. ������� ��������� ����� �������� �������������, ��� ������� ����� ��-��� ������������.
	����������. ��� ���������� ������� ����������� ������� ���������� ����-������� ����� (���������� � �������), � ��� �� ����� ������ �� �������.
	���������� � ������� - ���������� ������������ ����	 math.h � ������-���� ������� pow, ������ ���������� �������� ������ ���� ���������� ��������, � ������ - �������, ��� ������ double.
	����� ������ - ������������ ���� stdio.h, ������� printf, ������ ���������� �������� ��������� ������, � ����������� - ����������, �������� ������� ������-���� �������.


 run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a,b,c;
	double x1, x2,d;
	a = 3.0;
	b = 4.0;
	c = 2.0;
	
	d = pow(b,2) - 4*a*c;
	x1 = -b + sqrt(d)/(2*a);
	x2 = -b - sqrt(d)/(2*a);
	
	printf("d = %lf/n", d);
	printf("x1 = %lf/n", x1);
	printf("x2 = %lf/n", x2);
	
	return 0;
}
