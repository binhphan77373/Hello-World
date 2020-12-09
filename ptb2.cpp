#include<stdio.h>
#include<math.h>
main()
 {
 float a, b, c;
 float x1, x2;
 float delta = b*b -4*a*c;
  printf("Nhap a (a!=0): ");
  scanf("%d",&a);
  printf("Nhap b: ");
  scanf("%d",&b);
  printf("Nhap c: ");
  scanf("%d",&c);
  if(delta <0) { x1= x2= 0; printf(" Phuong trinh vo nghiem");
  } 
  else { delta = sqrt(delta);
  x1= (-b + delta/(2*a));
  x2= (-b - delta/(2*a)); 
  printf(" Phuong trinh co hai nghiem phan biet \n x1= 4%d \n x2=4%d",x1,x2); }
  if(delta == 0)
  { x1=x2= -b/(2*a); 
  printf("Phuong trinh co nghiem kep x1=x2= 4%d ",x1,x2);
   } 
}

