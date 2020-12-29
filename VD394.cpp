#include <stdio.h>
#include <conio.h>
#define MAX 100
void Nhap(int A[MAX][MAX], int n)
{
	int i,j;
	printf("Nhap ma tran A\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		printf("A[%d,%d] = ", i, j);
		scanf("%d", &(A[i][j]));
	}
}
void Xuat(int A[MAX][MAX], int n, char ch)	
{
    int i,j;
	printf("\nMa tran %c : ", ch);
	for(i=1;i<=n;i++)
	{
	    printf("\n");
		for(j=1;j<=n;j++)
		printf("%3d", A[i][j]);
	}
}
void Duongcheochinh(int A[MAX][MAX], int n)
{
    int max, L, i, j;
	for(i=1;i<=n;i++)
	{
	    max=A[i][1]; L=1;
		for(j=2;j<=n;j++)
		if(max<A[i][j])
		{
		    max=A[i][j];
			L=j;
		}
		A[i][L] =A[i][i];
		A[i][i] =max;
	}
}
void Chuyenvi(int E[MAX][MAX], int n)
{
    int i, j, tam;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
	    tam=E[i][j];
		E[i][j]=E[j][i];
		E[j][i]=tam;
	}
}
int main()
{
    int A[MAX][MAX], B[MAX][MAX];
	int i, j, n, m;
	printf("Nhap = ");
	scanf("%d", &n);
	Nhap(A,n);
	Xuat(A,n,'A');
	printf("\n");
	Chuyenvi(A,n);
	printf("Ma tran sau khi chuyen vi");
	Xuat(A,n,'A');
	printf("\n");
	printf("Cac phan tu lon nhat duoc chuyen len duong cheo chinh ");
	Duongcheochinh(A,n);
	Xuat(A,n,'A');
	getch();
	return 0;
}
	
						 			
		
	
