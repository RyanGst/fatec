//
// Created by ryan on 21/04/2021.
//

#include <stdio.h>

#define X 100
#define Y 100

int main(){
   int p, q, r, i, j, x;
   double  matA[X][Y], matB[X][Y], matC[X][Y], aux;


   scanf("%d %d", &p, &q);

   for(i = 0; i < p; i++)
       for(j = 0; j < q; j++){
           scanf("%lf", &matA[i][j]);
       }


   scanf("%d %d", &q, &r);

   for(i = 0; i < q; i++)
       for(j = 0; j < r; j++){
           scanf("%lf", &matB[i][j]);
       }

   /* exibir matriz C === Produto */

   for(i = 0; i < p; i++) {
       for(j = 0; j < r; j++) {

           matC[i][j] = 0;
           for(x = 0; x < q; x++) {
               aux +=  matA[i][x] * matB[x][j];
           }
           matC[i][j] = aux;
           aux = 0;
       }
   }

   for(i = 0; i < p; i++) {
       for(j = 0; j < r; j++) {
           printf("%1.lf\t", matC[i][j]);
       }
       printf("\n");
   }

   return 0;
}