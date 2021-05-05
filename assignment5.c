#include <stdio.h>

int combination(int n, int r) { //조합을 나타내는 함수, 재귀함수를 사용.
	if (n == r || r == 0) // n=r or r=0이면 1을 반환
	{
		return 1;
	}
	else // nCr = (n-1 C r-1) + (n-1 C r), n=r or r=0이 될때까지 계속해서 리턴후 더해줌.
	{
		return combination(n - 1, r - 1) + combination(n - 1, r);
	}
}

int main() {
	int num, nCr; 
	int sum = 0;
	printf("값을 입력하세요 : ");
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		if (num-i >= i) //피자 나누기의 수학적 규칙성 num = n 이면 n C 0 + n-1 C 1+....+n-kCk(단 n-k >= k이다.)
		{
			nCr = combination(num - i, i); //규칙성에 맞추어서 함수의 호출
			sum = sum + nCr; // nCr이 실행될때마다 sum이 더해짐.
		}
	}
	printf("나눈갯수 : %d\n", sum);
	return 0;
}

