/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:17:56 by jalevesq          #+#    #+#             */
/*   Updated: 2023/03/06 10:54:23 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class Phonebook {
    public:
        Phonebook();
        ~Phonebook();
        void    addContact(void);
        void    search(int index);
    private:
        Contact _contacts[8];
        int _contactNumber;
        std::string info;
};

#endif