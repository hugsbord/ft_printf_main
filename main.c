/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:21:04 by hugsbord          #+#    #+#             */
/*   Updated: 2020/02/18 16:10:39 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char c = '^';
	char *str;
	char *str3;
	char *str2;
	int ret = 0;
	int ret_printf = 0;
	int nbr = -777;
	unsigned int ui = 777777777;
	int			ii	= 777777777;

	str = "is a string with a lot of";
	str2 = "at this adress : ?";
	str3 = "#Cyber_FunK#";

//	ret = ft_printf("mine>>%010.2X|%x|%x|%-6.6X|%-1.3x|%-.4X|%03.6x| This %-12d %.5s %-32c %s %23p %u\n", 723332,45, -1 ,10, 300, 21, 9000,  nbr, str, c, str2, str, ui);
//	ret_printf = printf("true>>%010.2X|%x|%x|%-6.6X|%-1.3x|%-.4X|%03.6x| This %-12d %.5s %-32c %s %23p %u\n", 723332, 45, -1, 10,300, 21, 9000, nbr, str, c, str2, str, ui);

//	ret = ft_printf("mine>>%x|%x|%x|%x|%x|\n", -42, -71, -131071, -13131313, -2147483647);
//	ret_printf = printf("true>>%x|%x|%x|%x|%x|\n", -42, -71, -131071, -13131313,-2147483647);

	ret = ft_printf("mine>>%21X|%.12x|%-25.12X|%25.12x|%012x|%10x|%-9x|%x|%x|%x|%x|%x|%x|%x|%x|%x|%x|%x|%015x|%x|%x|%x|%x|%x|%x|\n",100001,-100002,-100003,-100004, -100005, 6665, 77701, 88801, 9999, -1, -141, -142, -143, -26, -27, -111, -112, -113, -15, -16, -42, -71, -1111, -110132, -2111133);
	ret_printf = printf("true>>%21X|%.12x|%-25.12X|%25.12x|%012x|%10x|%-9x|%x|%x|%x|%x|%x|%x|%x|%x|%x|%x|%x|%015x|%x|%x|%x|%x|%x|%x|\n",100001,-100002,-100003, -100004, -100005, 6665, 77701, 88801, 9999, -1, -141, -142, -143, -26, -27, -111, -112, -113, -15, -16, -42, -71, -1111, -110132, -2111133);

//	ret = ft_printf("mine>>%32.20x|%-14x|%20.18x|%-20.18x\n",  -113, -113, 113, 113);
//	ret_printf = printf("true>>%32.20x|%-14x|%20.18x|%-20.18x\n", -113, -113, 113, 113);

//	ret_printf = printf("true>> %%%s %%_%%_%%%%%%%% %%%32s %d\n", str, 7);
//	ret = ft_printf("mine>> %%%s %%_%%_%%%%%%%% %%%32s %d\n", str, 7);

//	ret_printf = printf("true>>%% %%%-32.3%%%%%%s\n", str);
//	ret = ft_printf("mine>>%% %%%-32.3%%%%%%s\n", str);

//	ret_printf = printf("true%%-12%%13%%>>%%%32.%%4s%% %--32.s %%%%%10.2%%%%s, %.2s\n", str, str2, "xXx", str);
//	ret = ft_printf("mine%%-12%%13%%>>%%%32.%%4s%% %--32.s %%%%%10.2%%%%s, %.2s\n", str, str2, "xXx",str);

//	ret_printf = printf("true%%%% %% 32%%32>>%32.s %22.s \n", str, str2);
//	ret = ft_printf("mine%%%% %% 32%%32>>%32.s %22.s \n", str, str2);

//	ret_printf = printf("true>>%-25.8s %-333.2s\n", str2, "xXx");
//	ret = ft_printf("mine>>%-25.8s %-333.2s\n", str2, "xXx");

//	ret_printf = printf("true>>%-32.46s\n", str);
//	ret = ft_printf("mine>>%-32.46s\n", str);

//	ret_printf = printf("true%%>>%32.1%%%%%%%%s %.3s %s\n", str, str2, "xXx");
//	ret = ft_printf("mine%%>>%32.1%%%%%%%%s %.3s %s\n", str, str2, "xXx");

//	ret_printf = printf("true>> %-32.1s %.3s %s\n", str, str2, "xXx");
//	ret = ft_printf("mine>> %-32.1s %.3s %s\n", str, str2, "xXx");

//	ret_printf = printf("true>>%--23.10s %-40.5s\n", str, str2);
//	ret = ft_printf("mine>>%--23.10s %-40.5s\n", str, str2);

//	ret_printf = printf("true>%%%% %3.2s> %-00-021.4%%%%%%%%s\n", str,str);
//	ret = ft_printf("mine>%%%% %3.2s> %--00-021.4%%%%%%%%s\n",str, str);

//	ret_printf = printf("true>> %% %% %%%% %%%% %%%%%% \n");
//	ret = ft_printf("mine>> %% %% %%%% %%%% %%%%%% \n");

//	ret_printf = printf("true%%>>%32.2%%%%%%%%s\n", str);
//	ret = ft_printf("mine%%>>%32.2%%%%%%%%s\n", str);

//	ret_printf = printf("true>>%12.5s %%%% %% %% WorD$ %-20.2s %1.1s\n", str, str2, "x|X|x");
//	ret = ft_printf("mine>>%12.5s %%%% %% %% WorD$ %-20.2s %1.1s\n", str, str2, "x|X|x");

//	ret_printf = printf("true>>%-15%%%%.%%%%2s %s\n", str, str2);
//	ret = ft_printf("mine>>%-15%%%%.%%%%2s %s\n", str, str2);

//	ret_printf = printf("true>>%%%%%% %%%-%%20%%c %12c\n", '#', 'X');
//	ret = ft_printf("mine>>%%%%%% %%%-%%20%%c %12c\n", '#', 'X');

//	ret_printf = printf("true>>%12% %-3% %%%%\n");
//	ret = ft_printf("mine>>%12% %-3% %%%%\n");

//	ret_printf = printf("true>>%5%%%%-6%%%++%016d %-3p %5%%p XxX %%%% %5%%c %-21%%p\n", 66, 7557, str, 'G', str2);
//	ret = ft_printf("mine>>%5%%%%-6%%%++%016d %-3p %5%%p XxX %%%% %5%%c %-21%%p\n", 66, 7557, str, 'G', str2);

//	ret_printf = printf("true>>%%%s %%%% %12%%% %%%5%%%\n", str);
//	ret = ft_printf("mine>>%%%s %%%% %12%%% %%%5%%%\n", str);

//	ret_printf = printf("true>>%0.12i %%%-42s %%%% %12%%% %%%5%%% %016d\n", 27, str, 555);
//	ret = ft_printf("mine>>%0.12i %%%-42s %%%% %12%%% %%%5%%% %016d\n", 27, str, 555);

//	ret_printf = printf("true>>%.4s %-6i|%2.15d|%c %-4.s\n", str3, -555, -2147483647, 'X', str);
//	ret = ft_printf("mine>>%.4s %-6i|%2.15d|%c %-4.s\n", str3, -555, -2147483647,'X', str);

//	ret_printf = printf("true>>%08i|%15.025d|%-12.4i|%d|%01.4i|\n", -5555, -2147483647, 0,0,0);
//	ret = ft_printf("mine>>%08i|%15.025d|%-12.4i|%d|%01.4i|\n", -5555, -2147483647, 0,0,0);

//	ret_printf = printf("true>>%-9i|%-2.d|%0.9d|%-21.6d|%0.0d|%05d|%-1.8d|%1.d|%d|%d|%041.04i|%2.2i|%-3d|%-10.5d|%-5.5d|%1.1i|%5i|%-.d|%.4d|%01.06d|%d\n",0, 9999, -45600,-12, 0, 55,-5555, 0, -666,  -42, -42,-42, 42,42,42,42,-42,3,0,4,-2);
//	ret = ft_printf("mine>>%-9i|%-2.d|%0.9d|%-21.6d|%0.0d|%05d|%-1.8d|%1.d|%d|%d|%041.04i|%2.2i|%-3d|%-10.5d|%-5.5d|%1.1i|%5i|%-.d|%.4d|%01.06d|%d\n", 0,9999, -45600,-12, 0, 55,-5555, 0, -666,-42, -42,-42, 42, 42,42,42,-42,3,0,4,-2);

//	ret_printf = printf("true>>%5.30s %20.p %-20.c %-5c\n", str3, str, '@', '@');
//	ret = ft_printf("mine>>%5.30s %20.p %-20.c %-5c\n", str3, str, '@', '@');

//	ret_printf = printf("true>>%-.5d %-5.1d %10.6d %-10.5d %10.6d %-10.6d\n",42,-42, 4242, 4242, -4242, -4242);
//	ret = ft_printf("mine>>%-.5d %-5.1d %10.6d %-10.5d %10.6d %-10.6d\n",42,-42, 4242, 4242, -4242, -4242);

//	ret_printf = printf("true>>%0.1d %5.0d\n", 0, 0);
//	ret = ft_printf("mine>>%0.1d %5.0d\n", 0, 0);

//	ret = ft_printf("mine>>@moulitest: %5d %5d %5.23d %-5d\n", 42, -42, 42, -42);
//	ret_printf = printf("true>>@moulitest: %5d %5d %5.23d %-5d\n", 42, -42, 42, -42);

//	ret_printf = printf("true%%%%>%32%%s%%%%%%.%%12%%%%.%21%%%%%%s%% p\n",str,"punk");
//	ret = ft_printf("mine%%%%>%32%%s%%%%%%.%%12%%%%.%21%%%%%%s%% p\n", str, "punk");

//	ret = ft_printf("mine>>%%%04.30%%u|%012%%.22u %021%%.42s \n", u, u, str);
//	ret_printf = printf("true>>%%%04.30%%u|%012%%.22u %021%%.42s \n", u, u, str);

//	ret = ft_printf("mine>>%0*.5x %-*s\n", 10, d, 32,str);
//	ret_printf = printf("true>>%0*.5x %-*s\n", 10, d,32,str);

//	ret_printf = printf("true>>%-3.7s%-7.7s \n", "hello", "world");
//	ret = ft_printf("mine>>%-3.7s%-7.7s \n", "hello", "world");

//	ret = ft_printf("mine>>%-*.15%%d%% %012d\n", 12,23, 22);
///	ret_printf = printf("true>>%-*.15%d%% %012d\n", 12,23, 22);

//	ret = ft_printf("mine>>%-20p|%-20p|%-5.5p|%5.5p||%-15.2p|%-9.2p|%-9.2p|%-9.2p\\n", 500, 180, 18,str, str2, 0, NULL, -12);
//	ret_printf = printf("true>>%-20p|%-20p|%-5.5p|%5.5p||%-15.2p|%-9.2p|%-9.2p|%-9.2p\\n", 500, 180, 18,str, str2, 0, NULL, -12);

//	ret = ft_printf("mine>>%-.12p|%-20.7p|%-10p|%-5.5p|%-15.2p|%-p|%-9.2p\n", str, str2, 1234, -42, str2, 150, NULL);
//	ret_printf = printf("true>>%-.12p|%-20.7p|%-10p|%-5.5p|%-15.2p|%-p|%-9.2p\n", str, str2, 1234, -42, str2, 150, NULL);

//	ret = ft_printf("mine>>%.*x%-.2s%-12.*X7LxIhyl0zlQKLdomu%-c%*.*d9TxS\n", -6, 0, "DaOEOlD9X9Unmgf0pfC9gBtgPOwu3", 1, 0, 'n', -4, 9, 477206474);
//	ret_printf = printf("true>>%.*x%-.2s%-12.*X7LxIhyl0zlQKLdomu%-c%*.*d9TxS\n", -6, 0, "DaOEOlD9X9Unmgf0pfC9gBtgPOwu3", 1, 0, 'n', -4, 9, 477206474);


//	ret_printf = printf("true>>%04.*d|%6.0s|%-5s\n", 2, 0, NULL, "");
//	ret = ft_printf("mine>>%04.*d|%6.0s|%-5s\n", 2, 0, NULL, "");

//	ret_printf = printf("TRUE->%d8z4y %5.*iJ\n", 0, -4, 0);
//	ret = ft_printf("MINE->%d8z4y %5.*iJ\n", 0, -4, 0);

//	ret = printf("T:%-16.*x%014.0i%-20.5x%-s%%Vpq%%%-c\n", -5, -2147483647, 293573420, -2147483647, "", 'f');
//	ret_printf = ft_printf("M:%-16.*x%014.0i%-20.5x%-s%%Vpq%%%-c\n", -5, -2147483647, 293573420, -2147483647, "", 'f');

//	ret = ft_printf("mine>>Qc%020u_%015.*u\n", 2147483647, 2, -2147483647);
//	ret_printf = printf("true>>Qc%020u_%015.*u\n", 2147483647, 2, -2147483647);

//	ret = ft_printf("mine>>%-6c5%0XyB  ii%05.*unuBcN +%.4s %-c\n", 'H', 2147483647, -3, 0, NULL, 'J');
//	ret_printf = printf("true>>%-6c5%0XyB  ii%05.*unuBcN +%.4s %-c\n", 'H', 2147483647, -3, 0, NULL, 'J');

//	ret = ft_printf("mine>>972n_ %-017.*i_nC%-8.4Xz%0.3i%17cASOCQtFU8\n", 5, -21474836, 0, 0, 'F');
//	ret_printf = printf("true>>972n_ %-017.*i_nC%-8.4Xz%0.3i%17cASOCQtFU8\n", 5, -21474836, 0, 0, 'F');

//	ret = ft_printf("mine>>%*cRzcxWBB +%-8.*u+ dlh3\n", 10, '\0', 6, 0);
//	ret_printf = printf("true>>%*cRzcxWBB +%-8.*u+ dlh3\n", 10, '\0', 6, 0);

//	ret = ft_printf("mine>>YK%io6eVE%-*.*sUJId0y%-16x\n", 0, -8, 5, NULL, -2147483647);
//	ret_printf = printf("true>>YK%io6eVE%-*.*sUJId0y%-16x\n", 0, -8, 5, NULL, -2147483647);

//	ret = ft_printf("mine>>%%%2uHjz%-3.*sSQL\n", -2147483647, 8, "");
//	ret_printf = printf("true>>%%%2uHjz%-3.*sSQL\n", -2147483647, 8, "");
//
//	ret = ft_printf("mine>>%-u%5.4u%-dc9a%-3.32s\n", 2147483647, 0, 2147483647, "ab");
//	ret_printf = printf("true>>%-u%5.4u%-dc9a%-3.32s\n", 2147483647, 0, 2147483647, "ab");

//	ret = ft_printf("mine>>%-12.*X++%x++%x++%X++%X++%X++%X++\n", -5, 260505262, -265036415, 22, -114660048, -114660048, -118380930, 12906556);
//	ret_printf = printf("true>>%-12.*X++%x++%x++%X++%X++%X++%X++\n", -5, 260505262, -265036415,22, -114660048, -114660048, -118380930, 12906556);

	ret = ft_printf("true>>%30.x", 445454);
	ret_printf = printf("mine>>%30.x", 445454);

//	ret = ft_printf("mine %-19.*iuhIOMj%0.0iNXqi%s%.2s\n", 10, -898875628, -1630480346, "DwaWvtN2 YMfRcVTcHbEwnpzgFclzH", "");
//	ret_printf = printf("true %-19.*iuhIOMj%0.0iNXqi%s%.2s\n", 10, -898875628, -1630480346, "DwaWvtN2 YMfRcVTcHbEwnpzgFclzH", "");

//	ret = ft_printf("++%32c++ %-12.3s %p %.1i %x\n", '3', str, str, 22, -666);
//	ret_printf = printf("++%32c++ %-12.3s %p %.1i %x\n", '3', str, str, 22, -666);

	printf("\ntrue>>nb_char = %d", ret_printf);
	printf("\nmine>>nb_char = %d\n", ret);
//	while (1);
	return (0);
}
