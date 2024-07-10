/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:35:55 by tvalimak          #+#    #+#             */
/*   Updated: 2024/07/10 18:43:44 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc > 1) 
	{
		for (int i = 1; i < argc; i++) 
		{
			std::string str(argv[i]);
			for (size_t j = 0; j < str.length(); j++)
				std::cout << (char)toupper(str[j]);
		}
		std::cout << std::endl;
	} 
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}

