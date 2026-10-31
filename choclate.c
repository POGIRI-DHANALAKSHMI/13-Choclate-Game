#include<stdio.h>
int main()
{
    int choclates=13,pick,player=1;
    
    printf("\t\t\tCHOCLATE GAME  \n");
    
    
    while(choclates)
    {
        printf("Remaing choclates = %d\n",choclates);
        printf("player %d ,pick (0to3):",player);
        scanf("%d",&pick);
        if(pick <0 || pick>3 || pick>choclates)
        {
            printf("Invalid choice\n");
            continue;

        }
        

        choclates = choclates - pick;
        if(choclates==0)
      {
            printf("only chilly remains!\n");
       
        if(player == 1)
            {
               printf("player 2  gets chilli\n");
               printf("player 2 lost\n");
               printf("player 1 won\n");

            }
            else
            {
                printf("player 1  gets chilli\n");
                printf("player 1 lost\n");
                printf("player 2 won\n");
            }
            break;
            
        }

        if(player==1)
        {
            player=2;
        }
        else
        {
            player=1;
        }


    }
    return 0;

}