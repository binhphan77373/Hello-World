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
void Tinh(int X[MAX], int A[MAX][MAX], int n)
{
	int i,j,max,min,L,k;
	for(i=1;i<=n;i++)
	{
		max=A[i][1];
		min=A[i][1];
		for(j=1;j<=n;j++)
		{
			if(max<A[i][j]) max=A[i][j];
			if(min>A[i][j]) min=A[i][j];
		}
		    X[i] =max-min;
	}
	printf("\nVecto sau khi tinh");
	for(i=1;i<=n;i++)
	printf("%7d", X[i]);
}
int Tong(int X[MAX], int n)
{
    int Sum,i;
	Sum=0;
	for(i=1;i<=n;i++)
	Sum+=X[i];
	return Sum;
}
void doics(int s, int cs)
{
    int i=1;
	int gt[]={ 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	if(s>0)
	{
	     gt[i]=s%cs;
		 s=s/cs;
		 if(gt[i]<10)	
		 printf("%d",gt[i]);
		 else printf("%c", gt[i]+55);
	}
}
int main()
{
     int A[MAX][MAX];
	 int X[100];
	 int i,j,n,h,c,max,min,k,s,cs;
	 do 
	 {
	      printf("Nhap gia tri n (3 - 5) : ");
		  scanf("%d", &n);
	 }
	 while(n<3 || n>5);
	 Nhap(A,n);
	 Xuat(A,n,'A');
	 printf("\n");
	 Tinh(X,A,n);
	 s=Tong(X,n);
	 printf("\n");
	 printf("Ket qua cua tong S=%d\n",s);
	 printf("Nhap co so can ban muon doi=");
	 scanf("%d",&cs);
	 doics(s,cs);
	 getch();
	 return 0;
}
	 	  		 			
