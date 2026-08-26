    #include<stdio.h>
        int main(){
            
            int N;
            scanf("%d", &N);
            
            int string[N];
            
            for(int i = 0; i < N ; i++){
                scanf("%d", &string[i]);
            }
            
            int menor = string[0], posicao= 0;
            
            for (int j = 1 ; j <N ; j++){
                if (string[j] < menor){
                    menor = string[j];
                    posicao = j;
                }
            }
        printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
        return 0;
        }
