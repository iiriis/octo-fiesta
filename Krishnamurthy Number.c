#include<stdio.h>
int main(){
	int num,i,rem,temp,fact,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(temp=num;temp>0;temp/=10){
		fact=1;
		rem=temp%10;
		for(i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
	}
	if(num==sum){
		printf("%d is a krishnamurthy number.",num);
	}else{
		printf("%d is not a krishnamurthy number.",num);
	}
	return 0;
}
