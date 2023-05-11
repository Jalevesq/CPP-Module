/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:17:56 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/11 19:13:56 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class PhoneBook {
    public:
        PhoneBook();
        ~PhoneBook();
        void    addContact(void);
        void    search(void);
    private:
        Contact _contacts[8];
        int _contactNumber;
        std::string info;
};

#endif