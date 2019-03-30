/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:57:54 by mnurkass          #+#    #+#             */
/*   Updated: 2019/03/30 12:01:35 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void putchar(char c)
{
    write(1,&c,1);
}

void writeRow(int now_col, int col, char first, char second)
{
    if(now_col == 1 || now_col == col)
    {                 
       putchar(first);
    }                    
    else
    {
       putchar(second);
    }          
}

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
                writeRow(now_col,col,'A','B');
            }
            else if(now_row == row)
            {
                writeRow(now_col,col,'C','B');
            }
            else
            {
                writeRow(now_col,col,'B',' ');
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


