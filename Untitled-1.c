#include<stdio.h>
int main(){
float sin1,sin2,sin3,pro;
  float ort;
	ort=1;
	printf("birinci sinavi giriniz:");
	scanf("%f",&sin1);
	
	printf("ikinci sinavi giriniz:");
	scanf("%f",&sin2);
	
	printf("ucuncu sinavi giriniz:");
	scanf("%f",&sin2);
	
	printf("projeyi giriniz:");
	scanf("%f",&pro);
	
	ort=(sin1+sin2+sin3+pro)/4;
	printf("%f\n",ort);
	
	if(ort<50)
	{
		printf("sinav notu:ff");
	}
	
	if(ort<60 && ort>50)
	{
		printf("sinav notu:dd");
	}
	
	if(ort>60 && ort<70)
	{
		printf("sinav notu:cc");
	}
	
	if(ort>70 && ort<85)
	{
		printf("sinav notu:bb");
	}
	if(ort>85)
	{
		printf("sinav notu:aa");
	}
    return 0;
    }