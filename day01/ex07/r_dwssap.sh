# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmncube <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 17:47:40 by lmncube           #+#    #+#              #
#    Updated: 2018/01/10 10:47:48 by lmncube          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
FT_LINE1 = 8, FT_LINE = 16
cat /etc/passwd | grep -v "#" | cat /etc/passwd| grep -v "#" | sed -n 'n;p' | cut -d ':' -f1 | rev | sort -r | tr "\n" ", "| sed -n $FT_LINE1,$FT_LINE2  
echo "."
