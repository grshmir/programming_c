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
	printf("Vvedite a:\n");
	scanf("%lf", &a);
	printf("Vvedite b:\n");
	scanf("%lf", &b);
	printf("Vvedite c:\n");
	scanf("%lf", &c);

	d = pow(b,2) - 4*a*c;
	if (d < 0) printf("KORNEI NET");
	if (d > 0) {
		
	x1 = -b + sqrt(d)/(2*a);
	x2 = -b - sqrt(d)/(2*a);
	
	printf("d = %lf/n", d);
	printf("x1 = %lf/n", x1);
	printf("x2 = %lf/n", x2);
		
	}
	if (d == 0) {
		x1 = -b + sqrt(d)/(2*a);
		printf("Only one root x = %lf/n", x1);
	}
	

	
	return 0;
}
