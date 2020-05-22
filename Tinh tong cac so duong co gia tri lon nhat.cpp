#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	do{
		printf("Nhap vao so luong o nho khoi tao ");
		scanf("%d",&n);
	} while(n<0);
    int *p;
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
    	printf("Nhap ptu thu %d ",i);
    	scanf("%d",(p+i));
	}
    int tong=0;
    int tongmax=-1;//khoi tao gia tri be hon 0, chang may no trung lai khong thuc hien thi bay mau
	int count=0;
	int count1=0;
	for(int i=0;i<n;i++){
	    if(*(p+i)>0){
		    count++; //khoi tao bien dem
			tong+=*(p+i); //khoi tao tong
			if(tong>tongmax){
			   tongmax=tong;//update bien dem va tongmax o day moi lan chay bien tong se cap nhat nen no se dem so voi thang tongmax cu
			   count1=count;
			}  
		}	
		else{
			count=0;  //neu gap thang am thi no se khoi tao lai bien count,tong.
			tong=0;
		}
	}
	printf("Tong cac phan tu duong lien tiep lon nhat la %d",tongmax);
}

