#include<stdio.h>
int main(){
typedef struct pokemon
{
 int hp;
 int speed;
 float weight;
} pokemon;
pokemon arr[10];
for(int i=0;i<2;i++){
    printf("Enter hp, speed and weight of pokemon %d:\n",i+1);
    scanf("%d %d %f",&arr[i].hp,&arr[i].speed,&arr[i].weight);
}
printf("Details of Pokemons:\n");
for(int i=0;i<2;i++){
    printf("Pokemon %d - HP: %d, Speed: %d, Weight: %.2f\n",i+1,arr[i].hp,arr[i].speed,arr[i].weight);
}

return 0;
}