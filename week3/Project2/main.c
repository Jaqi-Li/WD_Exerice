#include<stdio.h>
int main()
{
	/*ĳ���뽫���е�һ����ֵ100Ԫ������һ���10Ԫ��5Ԫ��2Ԫ��1Ԫ��ֵ��Ʊ�ӡ�
	Ҫ������40�ţ���ÿ��Ʊ������һ�š��ʣ��м��ֻ�����*/
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