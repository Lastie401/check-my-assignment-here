//3d array
/*
Author: paul mungai Njoroge
ADM    :CT1O1/G/23420/24
*/
#include<stdio.h>
int main(){
	int k,i,j;
	int scores[2][2][3]={{{1,2,3},{5,6,7}},{{9,10,11},{12,13,14}}};
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++)
			printf("scores[%d][%d][%d]=%d\n",i,j,k,scores[i][j][k]);}}
			return 0;
	
}