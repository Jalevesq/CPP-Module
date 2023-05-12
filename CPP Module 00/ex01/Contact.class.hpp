/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:30:03 by jalevesq          #+#    #+#             */
/*   Updated: 2023/05/11 18:13:57 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {

    public:
        Contact();
        ~Contact();
        void    setName(std::string name);
        void    setLastName(std::string lastName);
        void    setNickname(std::string nickame);
        void    setPhoneNumber(std::string phoneNumber);
        void    setSecret(std::string secret);

        std::string getName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getPhoneNumber(void);
        std::string getSecret(void);

    private:
        std::string _name;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _secret;
};

#endif