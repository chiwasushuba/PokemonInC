#include <stdio.h>

typedef char string[20];

struct Pokemon{
    int health;
    int attack;
    int defense;
    int speed;
};

void battle(int Poke1, int Poke2){
    if(Poke1 > Poke2){
        Poke1;
    } else {
        Poke2;
    }
}


int mAttack(int enemy, string pokename, int attack, int defense, int health, int speed){
    int choice;
    if(pokename == "pikachu"){
        printf("[1] Thunderbolt\n");
        printf("[2] Agility\n");
        printf("[3] Quick attack\n");
        printf("Pick an attacks: ");
        scanf("%d", )
    }

    return choice;
}

void mHeal(){

}

void mRun(){

}

void fightMenu(){

}


int main(){
    struct Pokemon pikachu = {100,25,20,50};
    struct Pokemon poke = {420,3,95,69};



    printf("%d", pikachu.health);
}
