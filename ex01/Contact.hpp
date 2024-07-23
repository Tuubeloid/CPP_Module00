/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:58:25 by tvalimak          #+#    #+#             */
/*   Updated: 2024/07/23 20:39:23 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNum;
    std::string darkestSecret;

public:
    void setFirstName(const std::string& firstName) { this->firstName = firstName; }
    void setLastName(const std::string& lastName) { this->lastName = lastName; }
    void setNickName(const std::string& nickName) { this->nickName = nickName; }
    void setPhoneNum(const std::string& phoneNum) { this->phoneNum = phoneNum; }
    void setDarkestSecret(const std::string& darkestSecret) { this->darkestSecret = darkestSecret; }

    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getNickName() const { return nickName; }
    std::string getPhoneNum() const { return phoneNum; }
    std::string getDarkestSecret() const { return darkestSecret; }
};

#endif