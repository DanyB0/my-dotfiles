
/* sudoku game */

#include <stdio.h>

#define NR 3
#define NC 3

int add(int[NR][NC], int, int, int);

int main(int argc, char * argv[]){    
    int x, y, v, scelta, j, u, c;
    int mat_i[NR][NC];

    scanf("srivi 2: %d", &scelta);

	if(scelta == 2){

		for(j = 0; j < 3; j++){
			for(u = 0;  u < 3;  u++)
				scanf("%d", &mat_i[j][u]);
		}
		
    	scanf("%d", &x);
       	scanf("%d", &y);
       	scanf("%d", &v);

       	if(x < 0 || x > 3 || y < 0 || y > 3 || v > 3 || v < 1){
       		printf("le coordinate non sono valide\n");
       	}

        else{
        	c = add(mat_i[NR][NC], x, y, v);
            printf("%d", c);
		}
	}

	return 0;
}

int add(int mat_i[NR][NC], int x, int y, int v){

	int r;

	r = 0;

	/* soluzione lunga
	 scorre le righe 
	for(i = 0; i < NR; i++){
		if (i == x - 1){
			 scorre le colonne
			for(k = 0; k < NC; k++){
				if (k == y - 1){
					 se alle coordinate inserite non c'è un valore lo aggiunge 
					if (mat_i[i][k] == '_')
						mat_i[i][k] = v;
					else
						r = 1;
				}
			}	
		}
	} */

	if (mat_i[x][y] == '_')
		mat_i[x][y] = v;
	else
		r = 1;
	
	return r;	
}
