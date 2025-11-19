#include<stdio.h>
int main(){
typedef struct pokemon
{
 int hp;
 int speed;
 float weight;
} pokemon;
typedef struct legendary_pokemon
{
    pokemon base;
    char special_move[100];
} legendary_pokemon;
legendary_pokemon lugia;
strcpy(lugia.special_move, "Aeroblast");
lugia.base.hp = 106;
lugia.base.speed = 110;
pokemon arr[10];
for(int i=0;i<2;i++){
    printf("Enter hp, speed and weight of pokemon %d:\n",i+1);
    scanf("%d %d %f",&arr[i].hp,&arr[i].speed,&arr[i].weight);
}
printf("Details of Pokemons:\n");
for(int i=0;i<2;i++){
    printf("Pokemon %d - HP: %d, Speed: %d, Weight: %.2f\n",i+1,arr[i].hp,arr[i].speed,arr[i].weight);
}
printf("Lugia's Special Move: %s\n", lugia.special_move);
printf("Lugia's Base HP: %d\n", lugia.base.hp);

return 0;
}