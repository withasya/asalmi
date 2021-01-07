#include<stdio.h>	

int asalmi(int n){
	int i;
	for(i=2;i<n;i++){
		
		if(n%i==0){
		return 0;
		
		}
		
		else {
				return 1;
		}
	}

}
	int main(){
	int n;
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
	if(asalmi(n)==0){
		printf("asal sayi degil");
		
	}
	else{
		
		printf("asal sayidir");
	}	
	
	return 0;
}


	
	
	




	
	
	
	


