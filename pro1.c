#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
    int num;
    int ngess=1;

    int guess;
    srand(time(0));
    // below function genrate the number betwin 1to 10r
    num = rand()%10+1;
    // printf("The randome number is %d\n",num);
    // keep running the loop until the number guessed
    do
    {
        printf("Guess the number between 1 to 10;\n");
        scanf("%d",&guess);
        if (guess>num)
        {
            printf("Please enter a lower number \n");
        }
        else if(guess<num){ 
            printf("Enter a higher number \n");
        }

        else{
            printf("you geussed in attempt %d\n",ngess);
        }
        ngess++;

        
    } while (guess!=num);
    
    return 0;
}