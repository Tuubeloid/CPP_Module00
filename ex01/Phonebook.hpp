/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:43:54 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/27 17:16:29 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cctype>

class PhoneBook
{
private:
    Contact _contacts[8];
    int _index;
    std::string truncate(const std::string& str, size_t width) const;

public:
    PhoneBook();
    void search();
    void add();
};

#endif