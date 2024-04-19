#include"Unique.h"
template<typename T>
void Unique(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		T unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;	//������������, ��� ��������������� ���������� ��������� �����,
			//�� ��� ����� ����������:
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
}
template<typename T>
void Unique(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			T unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;	//����������, ��� ��������������� ���������� ��������� �����,
				//�� ��� ����� ����������:
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}