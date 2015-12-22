#include<stdio.h>
int main(){
	double catFood;
	int houseNum;
	while(scanf("%lf%d", &catFood, &houseNum) != EOF){
		if(catFood == -1 && houseNum == -1){
			break;
		}
		
		int i, j;
		double bean[1005] = {0.0}, food[1005] = {0.0};
		double value[1005] = {0.0}, sum = 0.0;
		for(i = 0; i < houseNum; i++){
			scanf("%lf%lf", &bean[i], &food[i]);
			value[i] = bean[i] / food[i];
		}
		
		for(i = 0; i < houseNum; i++){
			for(j = 0; j < houseNum; j++){
				if(value[j] < value[j + 1]){
					double tempD;
					tempD = value[j];
					value[j] = value[j+1];
					value[j+1] = tempD;
					
					tempD = bean[j];
					bean[j] = bean[j+1];
					bean[j+1] = tempD;
					
					tempD = food[j];
					food[j] = food[j+1];
					food[j+1] = tempD;
				}
			}
		}
		
		for(i = 0; i < houseNum && catFood > 0; i++){
			if(catFood >= food[i]){
				catFood -= food[i];
				sum += bean[i];
			}else{
				sum += catFood * value[i];
				catFood = 0;
			}
		}
		
		printf("%.3lf\n", sum);
	}
	return 0;
}
