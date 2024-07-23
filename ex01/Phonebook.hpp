/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:43:54 by tvalimak          #+#    #+#             */
/*   Updated: 2024/07/23 19:59:03 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

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