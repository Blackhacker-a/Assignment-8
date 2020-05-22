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
    int max=0;//chon 1 so de no luon khac so count, chang may no trung lai khong thuc hien thi bay mau
	int count=0;
	for(int i=0;i<n;i++){
	    if(*(p+i)>0){
		    count++;
		    if(count>max){
			   max=count;  
			}
		}	
		else{
			count=0;
		}
	}
	printf("So luong cac phan tu duong lien tiep nhieu nhat la %d",max);
}

