/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:57:54 by mnurkass          #+#    #+#             */
/*   Updated: 2019/03/30 11:57:19 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void putchar(char c)
{
    write(1,&c,1);
}

// void writeRow(char first, char second)
// {
//     if(now_col == 1 || now_col == col)
//       {                 
//         putchar(first);
//       }                    
//       else
//       {
//          putchar(second);
//       }          
// }

int rush(int x, int y)
{

    int now_row = 1;
    int now_col = 1;

    int row = y;
    int col = x;

    while(now_row <= row)
    {
        now_col = 1;
        while (now_col <= col){
            
            if(now_row == 1)
            {
                if(now_col == 1 || now_col == col)
                {
                    putchar('A');
                }                    
                else
                {
                    putchar('B');
                }
            }
            else if(now_row == row)
            {
                if(now_col == 1 || now_col == col)
                {
                    putchar('C');
                }                    
                else
                {
                    putchar('B');
                }
            }
            else
            {
                if(now_col == 1 || now_col == col)
                {
                    putchar('B');
                }                    
                else
                {
                    putchar(' ');
                }
            }
            
            
            
            
            now_col++;

        }
        putchar('\n');
        

        now_row++;
    }


}

int main()
{
    rush(5, 3);
    return (0);
}


