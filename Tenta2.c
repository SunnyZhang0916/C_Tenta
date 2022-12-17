//tenta_170419, Fråga 4

# include <stdio.h>

int main( void ){

int values[] = {1,2,3,4,5,6,7};
int limit = 7;
for(int i = 2; i < limit ; i=i+2){
int g = i;
while( g > 1 ){
values[g] = values[g] + values[1];
g--;
}
}
for(int i = 0; i < limit; i++){
printf("values[%d] = %d\n",i,values[i]);
}
}
