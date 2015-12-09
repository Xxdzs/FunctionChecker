// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   test_strcat.c										:+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/12/08 17:05:34 by angagnie          #+#    #+#             //
//   Updated: 2015/12/09 16:03:37 by angagnie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "testlibft.h"

void	test_strcat(char    * (*ft)(char *s1, const char *s2))
{
	char	buf[BUFSIZE];

	memset(buf, ' ', BUFSIZE);
	strcpy(buf, "Begin ");
	fun_tester(strcat, ft, buf, "End");
	fun_tester(strcat, ft, clear_buf(buf), "Forever Alone");
	fun_tester(strcat, ft, buf, "");
}
