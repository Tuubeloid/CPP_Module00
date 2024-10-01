/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:43:51 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/01 15:52:06 by tvalimak         ###   ########.fr       */
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
        // Check if we have reached EOF or a failure state after the input
        if (std::cin.eof()) {
            std::cout << "\nEOF detected. Exiting.\n";
            break;
        }
        if (std::cin.fail()) {
            std::cin.clear(); // Clear the fail state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore any invalid input
            std::cout << "Invalid input. Please try again.\n";
            continue;
        }
        if (action == "ADD")
        {
            // Ignore any leftover input from previous operations
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            phoneBook.add();
        }
        else if (action == "SEARCH")
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            phoneBook.search();
        }
        else if (action == "EXIT")
        {
            break;
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear any remaining characters
            std::cout << "Invalid input. Please enter 'ADD', 'SEARCH', or 'EXIT'.\n";
        }
    }
    return 0;
}
