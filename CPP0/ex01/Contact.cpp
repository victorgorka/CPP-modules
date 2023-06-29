#include "agenda.h"


std::string Contact::getFirstName()		{return (_firstName);	}
std::string Contact::getLastName()		{return (_lastName);	}
std::string Contact::getNickName()		{return (_nickName);	}
std::string Contact::getPhoneNumber()	{return (_phoneNumber);	}
std::string Contact::getSecret()		{return (_secret);		}

void		Contact::setFirstName(std::string fname)	{_firstName = fname;	}
void		Contact::setLastName(std::string lname)		{_lastName = lname;		}
void		Contact::setNickName(std::string nname)		{_nickName = nname;		}
void		Contact::setPhoneNumber(std::string number)	{_phoneNumber = number;	}
void		Contact::setSecret(std::string secret)		{_secret = secret;		}