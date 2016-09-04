#include <stdio.h>

int multiples_3_and_5_sum()
{	int i,sum=0;
	for (i = 999;i>=3;i--)
		{
			if(i % 3 == 0 || i % 5 == 0)
				{
					sum+=i;
				}		
			}

	return sum;
}

int main()
{

	printf("Soma dos multiplos de 3 e 5: %d",multiples_3_and_5_sum());

}
