/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:43:51 by tvalimak          #+#    #+#             */
/*   Updated: 2024/07/23 20:44:18 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    PhoneBook phoneBook;
    std::string action;

    while (1)
    {
        std::cout << "Give input:\n";
        std::cin >> action;
        if (action == "ADD")
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            phoneBook.add();
        }
        else if (action == "SEARCH")
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            phoneBook.search();
        }
        else if (action == "EXIT")
            break;
        else
            std::cout << "Invalid input\n";
    }
    return 0;
}