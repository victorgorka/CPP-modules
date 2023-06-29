#include <iostream>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_secret;
	public:
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getSecret();
		void		setFirstName(std::string fname);
		void		setLastName(std::string lname);
		void		setNickName(std::string nname);
		void		setPhoneNumber(std::string number);
		void		setSecret(std::string secret);
};