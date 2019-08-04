// Tic Tac Toe. For two player

#include<stdio.h>

main()
{
    char a, b, c, d, e, f, g, h, i;
    char ch; // To take the choice of the players i.e. which cell the players has selected to mark as X or O
    char ans; // To ask if players wants to continue to play the game again
    int player, chance, winner, tr;

    // Main game loop
	do
	{
	    // Create 9 variables to store the inputs for tic tac toe grid
        a = 'a'; b = 'b'; c = 'c'; // First row
        d = 'd'; e = 'e'; f = 'f'; // Second row
        g = 'g'; h = 'h'; i = 'i'; // Third row

        player = 1; // Initially player one i.e. X goes first. This variable is used to indicate which player's turn it is.
        chance = 0; // Since there are 9 cells the game loop will only be executed 9 times
        winner = -1; // To indicate which player has won. Since game is starting we set it as -1
        tr = 0;  // A flag variable to check if player does not overwrite to an already written cell
	    do
		{
			system("cls");
			printf("\n Tic-Tac-Toe two player game.");
			printf("\n Player 1 = X ");  // Player 1 manipulates X
			printf("\n Player 2 = O ");  // Player 2 manipulates O
			printf("\n\n");

			// Tic Tac Toe Grid
			printf("\n       |        |         ");
			printf("\n   %c   |  %c     |   %c    ",a,b,c);
			printf("\n       |        |         ");
			printf("\n ----------------------  ");
			printf("\n       |        |         ");
			printf("\n   %c   |  %c     |   %c    ",d,e,f);
			printf("\n       |        |         ");
			printf("\n ----------------------  ");
			printf("\n       |        |         ");
			printf("\n   %c   |  %c     |   %c    ",g,h,i);
			printf("\n       |        |         ");
            printf("\n\n");

            // If there is a winner we break out of the game loop.
            /* I wrote this portion of code here instead of the block where we check for winner.
               This is so that we can see the last cell selected by the player before the winner was chosen.
               If this portion of code was wrote in the block that checked for the winner then we can never see the last cell selected by the player.
               Put a break statement in the block that checks for winner and see what happens.
            */
			if(winner == 1 || winner == 2)
            	break;

            // If it is first player's turn.
			if(player == 1)
			{
				do
				{
				    /* This variable is used to check if the player has selected the correct cell.
                       If it it a correct cell tr = 0.
				       Else tr is set to 1, and the loop will execute till tr == 0
				       Initially set the flag variable to 0.
				    */
					tr = 0;
					printf("\n Player %d enter a letter : ",player);
					scanf(" %c",&ch);
					if(ch == 'a')
					{
					    // If the cell named 'a' has already been marked with X or an O we set flag variable to 1
						if(a == 'X' || a == 'O')
							tr = 1;

                        // Else we will mark the cell 'a' as X as player 1 is denoted as X
						else
                            a = 'X';
					}
					else if(ch == 'b')
					{
						if(b == 'X' || b == 'O')
							tr = 1;
						else
							b = 'X';
					}
					else if(ch == 'c')
					{
						if(c == 'X' || c == 'O')
							tr = 1;
						else
							c = 'X';
					}
					else if(ch == 'd')
					{
						if(d == 'X' || d == 'O')
							tr = 1;
						else
							d = 'X';
					}
					else if(ch == 'e')
					{
						if(e == 'X' || e == 'O')
							tr = 1;
						else
							e = 'X';
					}
					else if(ch == 'f')
					{
						if(f == 'X' || f == 'O')
							tr = 1;
						else
							f = 'X';
					}
					else if(ch == 'g')
					{
						if(g == 'X' || g == 'O')
							tr = 1;
						else
							g = 'X';
					}
					else if(ch == 'h')
					{
						if(h == 'X' || h == 'O')
							tr = 1;
						else
							h = 'X';
					}
					else if(ch == 'i')
					{
						if(i == 'X' || i == 'O')
							tr = 1;
						else
							i = 'X';
					}
					// If the player selects a cell that is not part of the 9 cells we mark flag as 1
					else
						tr = 1;

                    /* We print the message "Wrong input, try again."
                       This is printed to show that they have selected a cell that has already been marked as X or an O.
                       Or they have selected a cell that is not part of the given cell.
                       i.e. not a, b, c, d, e, f, g, h, i
                    */
					if(tr == 1)
						printf("\n Wrong input, try again.");
				}while(tr == 1);  // Continue to give player 1 a chance till they have selected the correct cell

				// The conditions to check if the player has won the game

				// Checks if any row is filled with X's
				if((a=='X'&&b=='X'&&c=='X')||(d=='X'&&e=='X'&&f=='X')||(g=='X'&&h=='X'&&i=='X'))
					winner=1;

                // Checks if any column is filled with X's
				else if((a=='X'&&d=='X'&&g=='X')||(b=='X'&&e=='X'&&h=='X')||(c=='X'&&f=='X'&&i=='X'))
					winner=1;

                // Checks if any diagonal is filled with X's
				else if((a=='X'&&e=='X'&&i=='X')||(c=='X'&&e=='X'&&g=='X'))
					winner=1;
			}

			// If it is second players turn
			else
			{
			    /* This part is same as the code above.
                   But due to the fact this portion is for player 2, we mark the cell as O instead of X
			    */
				do
				{
					tr = 0;
					printf("\n Player %d enter a letter : ",player);
					scanf(" %c",&ch);
					if(ch == 'a')
					{
						if(a == 'X' || a == 'O')
							tr = 1;
						else
							a = 'O';
					}
					else if(ch == 'b')
					{
						if(b == 'X' || b == 'O')
							tr = 1;
						else
							b = 'O';
					}
					else if(ch == 'c')
					{
						if(c == 'X' || c == 'O')
							tr = 1;
						else
							c = 'O';
					}
					else if(ch == 'd')
					{
						if(d == 'X'||d == 'O')
							tr = 1;
						else
							d = 'O';
					}
					else if(ch == 'e')
					{
						if(e == 'X' || e == 'O')
							tr = 1;
						else
							e = 'O';
					}
					else if(ch == 'f')
					{
						if(f == 'X' || f == 'O')
							tr = 1;
						else
							f = 'O';
					}
					else if(ch == 'g')
					{
						if(g == 'X' || g == 'O')
							tr = 1;
						else
							g = 'O';
					}
					else if(ch == 'h')
					{
						if(h == 'X' || h == 'O')
							tr = 1;
						else
							h = 'O';
					}
					else if(ch == 'i')
					{
						if(i == 'X' || i =='O')
							tr = 1;
						else
							i = 'O';
					}
					else
						tr = 1;
					if(tr == 1)
						printf("\n Wrong input, try again.");
				}while(tr == 1);

				// The conditions to check if the player has won the game

				// Checks if any row is filled with X's
				if((a=='O'&&b=='O'&&c=='O')||(d=='O'&&e=='O'&&f=='O')||(g=='O'&&h=='O'&&i=='O'))
					winner=2;

                // Checks if any column is filled with X's
				else if((a=='O'&&d=='O'&&g=='O')||(b=='O'&&e=='O'&&h=='O')||(c=='O'&&f=='O'&&i=='O'))
					winner=2;

                // Checks if any diagonal is filled with X's
				else if((a=='O'&&e=='O'&&i=='O')||(c=='O'&&e=='O'&&g=='O'))
					winner=2;
			}
			// This is to alternate between player 1 and 2.
			// If player 1 has played give turn to player 2 and vice versa.
			player = (player==1) ? 2 : 1;

			// After the game is played one cell will definitely be marked. So increment chance.
			chance++;

        // Continue the game loop till all 9 cells have been marked.
        // If someone wins the game in middle then we break out of the main loop.
        // That statement can be found after the board has been created.
		}while(chance != 9);
		if(winner == 1)
			printf("\n Player 1 wins.");
		else if(winner == 2)
			printf("\n Player 2 wins.");
		else
			printf("\n Game drawn.");
		printf("\n Play again (y/n) : ");
		scanf(" %c",&ans);
	}while(ans == 'y'||ans == 'Y');
}
