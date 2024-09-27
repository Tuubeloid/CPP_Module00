/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:58:37 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/27 17:23:56 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string& firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(const std::string& lastName)
{
    this->lastName = lastName;
}

void Contact::setNickName(const std::string& nickName)
{
    this->nickName = nickName;
}

void Contact::setPhoneNum(const std::string& phoneNum)
{
    this->phoneNum = phoneNum;
}

void Contact::setDarkestSecret(const std::string& darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const
{
    return firstName;
}

std::string Contact::getLastName() const
{
    return lastName;
}

std::string Contact::getNickName() const
{
    return nickName;
}

std::string Contact::getPhoneNum() const
{
    return phoneNum;
}

std::string Contact::getDarkestSecret() const
{
    return darkestSecret;
}
