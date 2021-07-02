#include "CalcModule.h"

int calculate(int pos_x, int pos_y, int dir_x, int dir_y)
{
	int result = 0;
	while (true)
	{
		pos_x += dir_x;
		pos_y += dir_y;

		if (pos_x >= 0 && pos_x < 8 && pos_y >= 0 && pos_y < 8)
			result++;
		else
			break;
	}
	return result;
}
