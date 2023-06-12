#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
using std::string;
using std::cout;
using std::endl;

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();

		const string& getType() const;
		void    setType(const string newType);

		virtual void makeSound() const;

		WrongAnimal &		operator=( WrongAnimal const & rhs );

	protected:
		string _type;

};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ***************************************************** WRONGANIMAL_H */