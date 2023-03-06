/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalevesq <jalevesq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:30:03 by jalevesq          #+#    #+#             */
/*   Updated: 2023/03/06 10:53:29 by jalevesq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {

    public:
    Contact();
    ~Contact();

    std::string name;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string secret;
};

#endif