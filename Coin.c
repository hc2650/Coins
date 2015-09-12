#include <stdio.h>


int main(){

	int Test_case, d[5000];
	int Money_total, Count_coin, i, j, k, l, Won_coin[10];

	scanf("%d",&Test_case);

	for(i=0; i<Test_case; i++){
		
		memset(d, 0, sizeof(int)*5000);
		
		scanf("%d %d", &Money_total, &Count_coin);
		for(j = 0; j< Count_coin; j++)
			scanf("%d", &Won_coin[j]);
				
		d[0]=1;

		for(k=Count_coin-1; k>=0; k--){
			for(l=Won_coin[k]; l<=Money_total; l++){
				d[l] += d[l-Won_coin[k]];
			}		
		}

		//if(d[Money_total]>1000000007)
		printf("%d진\n",d[Money_total]%1000000007);
		
		//else			
		//printf("%d가\n",d[Money_total]);	
	}	
	return 0;
}
