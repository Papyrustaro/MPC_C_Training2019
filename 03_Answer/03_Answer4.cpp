#include<stdio.h>

int main(void){
	int sum=0;
	int x,y;
	scanf("%d%d",&x,&y);
	
	for(int i=x;i<=y;i++){
		if(i%3==0){continue;}
		sum+=i;	//sum=sum+i���Ӗ�����.
	}
	/*
	for(int i=x;i<=y;i++){
		if(i%3==0){}
		else{
			sum+=i;    //���̂悤�ɏ����Ă��ǂ��B�l�X�ȏ����������݂���B
		}              //�������������₷����������T�����B
	}
	*/
	
	printf("%d",sum);
	
	return 0;
}