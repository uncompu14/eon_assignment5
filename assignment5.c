#include <stdio.h>

int combination(int n, int r) { //������ ��Ÿ���� �Լ�, ����Լ��� ���.
	if (n == r || r == 0) // n=r or r=0�̸� 1�� ��ȯ
	{
		return 1;
	}
	else // nCr = (n-1 C r-1) + (n-1 C r), n=r or r=0�� �ɶ����� ����ؼ� ������ ������.
	{
		return combination(n - 1, r - 1) + combination(n - 1, r);
	}
}

int main() {
	int num, nCr; 
	int sum = 0;
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		if (num-i >= i) //���� �������� ������ ��Ģ�� num = n �̸� n C 0 + n-1 C 1+....+n-kCk(�� n-k >= k�̴�.)
		{
			nCr = combination(num - i, i); //��Ģ���� ���߾ �Լ��� ȣ��
			sum = sum + nCr; // nCr�� ����ɶ����� sum�� ������.
		}
	}
	printf("�������� : %d\n", sum);
	return 0;
}

