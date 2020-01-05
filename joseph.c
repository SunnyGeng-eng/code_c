#include <stdio.h>
#include <stdlib.h>

//有8个数，数到3把第三个数取出，一直循环，直到剩最后一个数字为止

int main()
{
	int arr[8] = {0};
	int index = 0;
	int num = 0;
	
	for(int i = 0;i<8;i++)
	{
		arr[i] = i+1;
	}
	
	while(num <= 8)
	{
		for(int  i = 0; i<8; i++)
		{
			if(arr[i] != 0)
			{
				index++;
			}
			if(index == 3)
			{
				printf("%d ",arr[i]);
				arr[i] = 0;
				index = 0;
				num++;
			}
		}
	}
	printf("\n");
	return 0;
}