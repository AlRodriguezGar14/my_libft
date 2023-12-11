/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:07:04 by alberrod          #+#    #+#             */
/*   Updated: 2023/12/11 22:09:48 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define COLOR_RED     "\x1b[38;5;176m"
#define COLOR_GREEN   "\x1b[38;5;78m"
#define COLOR_RESET   "\x1b[0m"
#define COLOR_YELLOW  "\x1b[38;5;178m"
#define COLOR_CYAN	  "\x1b[36m"

void print_test_title(char *title) {
    printf("\n");
    int idx = 0;
    while (title[idx] != 0)
        idx++;

    while (idx > -4) 
    {
        idx--;
        printf("-");
    }
    printf("\n| ");
    idx = 0;
    while (title[idx] != 0)
    {
        printf("%c", title[idx]);
        idx++;
    }
    printf(" |\n");
    while (idx > -4)
    {
        idx--;
        printf("-");
    }
    printf("\n");
}

void print_pass_int(int original, int copy)
{
    printf(COLOR_YELLOW"expected: %d "COLOR_RESET, original);
    printf(COLOR_GREEN"result: %d | PASS\n"COLOR_RESET, copy);
}
void print_fail_int(int original, int copy)
{
    printf(COLOR_YELLOW"expected: %d "COLOR_RESET, original);
    printf(COLOR_RED"result: %d | FAIL\n"COLOR_RESET, copy);
}


void    print_int_comparison(int original, int copy)
{
    if (original == copy)
        print_pass_int(original, copy);
    else
        print_fail_int(original,copy);
}
void test_char_type()
{
	const char testing_chars[] = {
		'\x80',
		'\0',
		'+',
		'&',
		'0',
		' ',
		'a',
		'B'
	};
    for (unsigned long i = 0; i < sizeof(testing_chars); ++i)
    {
        int original = isalpha(testing_chars[i]);
        int copy = ft_isalpha(testing_chars[i]);
        
        printf("Inputs: '%c' - ", testing_chars[i]);
        if (original == copy)
            print_pass_int(original, copy);
        else
            print_fail_int(original,copy);
    }
}

int	main(void)
{
	print_test_title("isalpha");
	test_char_type();
	return (0);
}
*/
