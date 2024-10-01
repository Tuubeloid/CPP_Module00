/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:04:45 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/01 15:50:22 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook() : _index(0) {}

std::string PhoneBook::truncate(const std::string& str, size_t width) const
{
    if (str.length() > width)
        return str.substr(0, width - 1) + ".";
    return str;
}

bool isOnlyWhitespace(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isspace(str[i])) {
            return false;
        }
    }
    return true;
}

void PhoneBook::search()
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First name" << "|"
              << std::setw(10) << "Last name" << "|"
              << std::setw(10) << "Nickname" << "\n";
    std::cout << "-------------------------------------------\n";

    for (int i = 0; i < 8; i++)
    {
        if (!_contacts[i].getFirstName().empty())
        {
            std::cout << std::setw(10) << i << "|"
                      << std::setw(10) << truncate(_contacts[i].getFirstName(), 10) << "|"
                      << std::setw(10) << truncate(_contacts[i].getLastName(), 10) << "|"
                      << std::setw(10) << truncate(_contacts[i].getNickName(), 10) << "\n";
        }
    }

    std::cout << "Enter the index of the entry to display: ";
    int index;
    std::cin >> index;

    if (std::cin.fail() || index < 0 || index >= 8 || _contacts[index].getFirstName().empty())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid index.\n";
        return;
    }

    Contact contact = _contacts[index];
    std::cout << "First name: " << contact.getFirstName() << "\n"
              << "Last name: " << contact.getLastName() << "\n"
              << "Nickname: " << contact.getNickName() << "\n"
              << "Phone number: " << contact.getPhoneNum() << "\n"
              << "Darkest Secret: " << contact.getDarkestSecret() << "\n";
}

void PhoneBook::add()
{
    Contact newContact;
    std::string input;

    // Handle input for first name
    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    if (std::cin.eof()) { // Check for EOF
        std::cout << "\nEOF detected. Exiting input.\n";
        std::cin.clear(); // Clear EOF flag for future I/O operations
        return;
    }
    if (isOnlyWhitespace(input)) {
        std::cout << "First name cannot be empty or just whitespace.\n";
        return;
    }
    newContact.setFirstName(input);

    // Handle input for last name
    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    if (std::cin.eof()) { // Check for EOF
        std::cout << "\nEOF detected. Exiting input.\n";
        std::cin.clear(); // Clear EOF flag
        return;
    }
    if (isOnlyWhitespace(input)) {
        std::cout << "Last name cannot be empty or just whitespace.\n";
        return;
    }
    newContact.setLastName(input);

    // Handle input for nickname
    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    if (std::cin.eof()) { // Check for EOF
        std::cout << "\nEOF detected. Exiting input.\n";
        std::cin.clear(); // Clear EOF flag
        return;
    }
    if (isOnlyWhitespace(input)) {
        std::cout << "Nickname cannot be empty or just whitespace.\n";
        return;
    }
    newContact.setNickName(input);

    // Handle input for phone number
    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    if (std::cin.eof()) { // Check for EOF
        std::cout << "\nEOF detected. Exiting input.\n";
        std::cin.clear(); // Clear EOF flag
        return;
    }
    if (isOnlyWhitespace(input)) {
        std::cout << "Phone number cannot be empty or just whitespace.\n";
        return;
    }
    newContact.setPhoneNum(input);

    // Handle input for darkest secret
    std::cout << "Set darkest secret: ";
    std::getline(std::cin, input);
    if (std::cin.eof()) { // Check for EOF
        std::cout << "\nEOF detected. Exiting input.\n";
        std::cin.clear(); // Clear EOF flag
        return;
    }
    if (isOnlyWhitespace(input)) {
        std::cout << "Darkest Secret cannot be empty or just whitespace.\n";
        return;
    }
    newContact.setDarkestSecret(input);

    // Add the new contact to the phonebook and update the index
    _contacts[_index] = newContact;
    _index = (_index + 1) % 8;

    std::cout << "Contact added successfully.\n";
}
