/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:04:45 by tvalimak          #+#    #+#             */
/*   Updated: 2024/07/12 12:24:48 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*You have to implement two classes:
• PhoneBook
◦ It has an array of contacts.
◦ It can store a maximum of 8 contacts. If the user tries to add a 9th contact,
replace the oldest one by the new one.
◦ Please note that dynamic allocation is forbidden.
• Contact
◦ Stands for a phonebook contact.
In your code, the phonebook must be instantiated as an instance of the PhoneBook
class. Same thing for the contacts. Each one of them must be instantiated as an instance
of the Contact class. You’re free to design the classes as you like but keep in mind that
anything that will always be used inside a class is private, and that anything that can be
used outside a class is public.*/

/*
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
}; */

/*On program start-up, the phonebook is empty and the user is prompted to enter one
of three commands. The program only accepts ADD, SEARCH and EXIT.
• ADD: save a new contact
◦ If the user enters this command, they are prompted to input the information
of the new contact one field at a time. Once all the fields have been completed,
add the contact to the phonebook.
◦ The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields.
• SEARCH: display a specific contact
◦ Display the saved contacts as a list of 4 columns: index, first name, last
name and nickname.
◦ Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).
◦ Then, prompt the user again for the index of the entry to display. If the index
is out of range or wrong, define a relevant behavior. Otherwise, display the
contact information, one field per line.
• EXIT
◦ The program quits and the contacts are lost forever!
• Any other input is discarded.
Once a command has been correctly executed, the program waits for another one. It
stops when the user inputs EXIT.
Give a relevant name to your executable.*/


#include <iostream>
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
    void setFirstname(const std::string& fistName) { this->firstName = firstName}
    void setLastName(const std::string& lastName) { this->lastName = lastName; }
    void setNickName(const std::string& nickName) { this->nickName = nickName; }
    void setPhoneNum(const std::string& phoneNum) { this->phoneNum = phoneNum; }
    void setDarkestSecret(const std::string& darkestSecret) { this->darkestSecret = darkestSecret; }

    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getNickname() const { return nickName; }
    std::string getPhoneNum() const { return phoneNum; }
    std::string getDarkestSecret() const { return darkestSecret; }
};

class PhoneBook
{
  private:
    Contact _contacts[8];
    int     _index;

  public:
    //Phonebook(void);
    void    add(void);
    void    search(void);
    void    print(Contact contact);
    Contact get_contact(int index);
};

/*The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields.*/

int main(void)
{
  PhoneBook phoneBook;
  std::string action;

  std::cout << "Give input:\n";
  while (1)
  {
    std::cin >> action;
    if (action == "ADD")
      phoneBook.add();
    else if (action == "SEARCH")
      phoneBook.search();
    else if (action == "EXIT")
      break ;
    else
      std::cout << "Invalid input\n";
  }
  return (0);
}