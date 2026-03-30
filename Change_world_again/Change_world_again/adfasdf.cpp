#include<stdio.h>
int main(){
	while(true){
	printf("请输入:\n");
	int x,y,t;
	t=0;
	scanf("%d%d",&x,&y);
	printf("\n");
	printf("以下是输出内容:\n");
	printf("坐标：\n");
	
	if(x>0){
		if(y>0)
			printf("point(%d,%d)在第一象限",x,y);
		else if(y==0)
			printf("point(%d,%d)在x正半轴",x,y);
		else if(y<0)
			printf("point(%d,%d)在第四象限",x,y);
			}
	if(x==0){
		if(y>0)
			printf("point(%d,%d)在y正半轴",x,y);
		else if(y==0)
			printf("point(%d,%d)在原点",x,y);
		else if(y<0)
			printf("point(%d,%d)在y负半轴",x,y);
	} 
	if(x<0){
		if(y>0)
			printf("point(%d,%d)在第二象限",x,y);
		else if(y==0)
			printf("point(%d,%d)在x负半轴",x,y);
		else if(y<0)
			printf("point(%d,%d)在第三象限",x,y);
	} 
	printf("\n\n大小：\n");
	if(x>y){
	t=x, x=y, y=t;
	}

	if(x==y){
		printf("%d=%d\n",x,y);
	}
	else{
		printf("%d<%d\n",x,y);
		}
		
		printf("\n奇偶：\n"); 
	if(x%2!=0){
		printf("x is odd\n");
	}
	else{
		printf("x is even\n");
	}
	if(y%2!=0){
		printf("y is odd\n");
	}
	else{
		printf("y is even\n");
	}
	printf("符号性：") ;
	int p,q;
	if(x>0)
	p=1;
	if(x==0)
	p=0;
	if(x<0);
	p=-1;
	if(y>0)
	q=1;
	if(y==0)
	q=0;
	if(y<0);
	q=-1;
	printf("x为%d, y为%d",p,q);
	
	printf("\n绝对值：\n");
	if(x<0){
		x=-x;
	}
	if(y<0){
		y=-y;
	}
	printf("\n|x|=%d,|y|=%d\n\n---***###***---\n\n\n\n",x,y);
	}
}
