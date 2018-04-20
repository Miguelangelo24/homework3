#include <stdio.h>

int main()
{
  
  int player = 0;                              
  int move = 0; //position selection
  int row = 0;  //Row index for a spot  
  int column = 0;  //Column index for a square
  int line = 0; 
  int playerWin = 0;                            
  char board[3][3] = { {'1','2','3'}, //Gameboard with position numbers.         
                       {'4','5','6'},          
                       {'7','8','9'} };

   
   for(int x = 0; x < 9 && playerWin == 0 ; x++) //loop turn
   {
      
      printf("\n\n");
      printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
      printf("---+---+---\n");
      printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
      printf("---+---+---\n");
      printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
      
      player = x%2 + 1; //selects which players turn
 
      do
      {
         printf("\nPlayer %d, enter the position of the square ");
         printf("where you want to place your %c: ", player,(player == 1)?'X':'O');
         scanf("%d", &go);

         row = --move/3;  //Get row index of square
         column = move%3; //Get column index of square
         
      }while(move < 0 || move > 9 || board[row][column] > '9');

      board[row][column] = (player == 1) ? 'X' : 'O';
    
      if((board[0][0] == board[1][1] && board[0][0] == board[2][2]) || 
         (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
      {
    	  playerW = player;
      }
      
      else
      {
    	  for(line = 0; line <= 2; line ++)
    	  {
    		  if((board[line][0] == board[line][1] && board[line][0] == board[line][2])||
    		     (board[0][line] == board[1][line] && board[0][line] == board[2][line]))
    		  {
    			  playerWin = player;
    		  }
    	  }
      }

   }
   
   printf("\n\n");
   printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
   printf("---+---+---\n");
   printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
   printf("---+---+---\n");
   printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

   if(playerWin == 0)
   {
	   printf("\nDraw.\n");
   }
   
   else
   {
	   printf("\nPlayer %d wins.\n", playerWin);
   }
   
   return 0;
}
