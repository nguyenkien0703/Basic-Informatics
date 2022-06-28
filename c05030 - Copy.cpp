#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
void nhap(int a[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}

int kt( int a[][100], int m, int n)
{


	int dem = 0;

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] == 1 || a[i][j] == 2)
			{
				for(int k = j+1; k < n; k++)
				{

					if(a[i][k] == 1 && a[i][j] == 2 || a[i][k] == 2 && a[i][j] == 1)
					{
						for(int h = i+1; h < m; h++)
						{

							if(a[h][k] == a[i][j] && a[h][k] !=a[j][k])
							{

								dem++;

							}

						}
					}
				}
                
			}

		}
	}

	return dem;

}


main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int m, n;
		scanf("%d %d", &m, &n);
		int  a[100][100];
		nhap(a,m,n);
		printf("%d\n", kt(a, m, n));
	}
}