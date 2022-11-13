#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<time.h>
int sankewaGun(char you, char comp){
    // return 1 if you win -1you loss if draw return 0;

    // case cover 
    // s=s g=g w=w,gw,wg,sg,gs,ws,sw
 if (you==comp)
 {
return 0;
 }
 else if(you=='s' && comp=='w'){
    return 1;
 }
 else if(you=='s' && comp=='g'){
    return -1;
 }
 else if(you=='g' && comp=='s'){
    return 1;
 }
 else if(you=='g' && comp=='w'){
    return -1;
 }
 else if(you=='w' && comp=='s'){
    return 1;
 }

 else if(you=='w' && comp=='g'){
    return 1;
 }
 
}
int main(int argc, char const *argv[])
{
    char you, com;
    srand(time(0));
  int num;
      num  = rand()%100+1;
  
if (num>33)
{
com='s';
}
else if (num<33 && num<66)
{
    com='w';
}
else{
    com='g';
}


    printf("Enter S for snake and W for water ,G for gun\n");
    printf("Enter your opinin\n");
    scanf("%s",&you);

    int result=sankewaGun(you,com);
    if (result==0)
    {
    printf("Try again game is tie\n");
    }
    else if (result==1)
    {
        printf("Congratulation you won\n");
        printf(":) :) :) :) :) :) \n");
    }
    else if (result==-1)
    {
        printf("Sorry you loose\n");
        printf(":( :( :( :( :( :( \n");
    }
    printf("You choose %c and computer choose %c\n",you,com);
    
    return 0;
}