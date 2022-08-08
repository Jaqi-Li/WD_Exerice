#include<stdio.h>
int main()
{
	/*某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。
	要求换正好40张，且每种票子至少一张。问：有几种换法？*/
	int tenNum, fiveNum, twoNum, oneNum;
	int num = 0;
	for (tenNum = 1; tenNum <= 40; ++tenNum)
	{
		for (fiveNum = 1; fiveNum <= 40; ++fiveNum)
		{
			for (twoNum= 1; twoNum <= 40; ++twoNum)
			{
				for ( oneNum = 1; oneNum <= 40; ++oneNum)
				{
					if (tenNum + fiveNum + twoNum + oneNum == 40 && 10 * tenNum + 5 * fiveNum + 2 * twoNum + oneNum == 100)
					{
						num++;
					}
				}
			}
		}
	}
	printf("%d", num);

	return 0;
}