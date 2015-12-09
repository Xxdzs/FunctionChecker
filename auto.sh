# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 17:16:40 by angagnie          #+#    #+#              #
#    Updated: 2015/12/09 13:17:40 by angagnie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


save="$(PWD)"
libft_path="~/Documents/42Projects/Libft/"

echo $save, $libft_path
cd $libft_path
rm -f libft.a
ls -l ft_*.c | wc -l
make $1
cd $save
rm -f ./libft_tester
make $1
./libft_tester
