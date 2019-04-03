/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edillenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:50:13 by edillenb          #+#    #+#             */
/*   Updated: 2019/04/03 15:44:04 by edillenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

//Test STRLEN --> argv[1]
/*int		main(int argc, char **argv)
  {
  if (argc < 2)
  {
  printf("\033[31mno argument, dude!");
  return (0);
  }
  printf("\033[34mft_strlen test: ");
  printf("%lu", ft_strlen(argv[1]));
  printf("%s", "\n");
  printf("\033[32mstrlen test: ");
  printf("%lu", strlen(argv[1]));
  printf("%s", "\n");
  return (0);
  }*/

//Test STRDUP --> argv[1]
/*int     main(int argc, char **argv)
  {
  if (argc < 2)
  {
  printf("\033[31mno argument, dude!");
  return (0);
  }
  printf("\033[34mft_strdup test: ");
  printf("%s", ft_strdup(argv[1]));
  printf("%s", "\n");
  printf("\033[32mstrdup test: ");
  printf("%s", strdup(argv[1]));
  printf("%s", "\n");
  return (0);
  }*/

//Test STRCPY --> argv[1] and argv[2]
/*int     main(int argc, char **argv)
  {
  if (argc != 3)
  {
  printf("\033[31mneed exactly two arguments, dude!");
  return (0);
  }
  printf("\033[34mft_strcpy test: ");
  printf("%s", ft_strcpy(argv[1], argv[2]));
  printf("%s", "\n");
  printf("\033[32mstrcpy test: ");
  printf("%s", strcpy(argv[1], argv[2]));
  printf("%s", "\n");
  return (0);
  }*/

//Test STRCMP --> arv[1] and argv[2]
/*int     main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("\033[31mneed exactly two arguments, dude!");
		return (0);
	}
	printf("\033[34mft_strcmp test: ");
	printf("%d", ft_strcmp(argv[1], argv[2]));
	printf("%s", "\n");
	printf("\033[32mstrcmp test: ");
	printf("%d", strcmp(argv[1], argv[2]));
	printf("%s", "\n");
	return (0);
}*/


//Test ATOI --> one 
int     main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\033[31mneed only one argument, dude!");
		return (0);
	}
	printf("\033[34mft_atoi test: ");
	printf("%d", ft_atoi(argv[1]));
	printf("%s", "\n");
	printf("\033[32matoi test: ");
	printf("%d", atoi(argv[1]));
	printf("%s", "\n");
	return (0);
}
