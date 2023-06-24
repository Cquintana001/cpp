#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed( const int n )
{
	this->_value = n << this->_bits;
}

Fixed::Fixed( const float n )
{
	this->_value = std::roundf( n * ( 1 << this->_bits ));
}


Fixed::~Fixed()
{

}

Fixed::Fixed( const Fixed &ref)
{
	this->operator=(ref);
}

Fixed	&Fixed::operator=( const Fixed &ref )
{
	if (this != &ref)
		this->_value = ref.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{

	this->_value = raw;
}

int	Fixed::toInt( void ) const
{
	return (this->_value >> this->_bits);
}

float	Fixed::toFloat( void ) const 
{
	return (static_cast<float>(this->getRawBits() ) / ( 1 << this->_bits));
}


bool	Fixed::operator>( const Fixed &ref ) const
{
	return (this->getRawBits() > ref.getRawBits());
}

bool	Fixed::operator<( const Fixed &ref ) const
{
	return (this->getRawBits() < ref.getRawBits());
}

bool	Fixed::operator>=( const Fixed &ref ) const
{
	return (this->getRawBits() >= ref.getRawBits());
}

bool	Fixed::operator<=( const Fixed &ref ) const
{
	return (this->getRawBits() <= ref.getRawBits());
}

bool	Fixed::operator==( const Fixed &ref ) const
{
	return (this->getRawBits() == ref.getRawBits());
}

bool	Fixed::operator!=( const Fixed &ref ) const
{
	return (this->getRawBits() != ref.getRawBits());
}


Fixed	Fixed::operator+( const Fixed &ref ) const
{
	return Fixed( this->toFloat() + ref.toFloat() );
}

Fixed	Fixed::operator-( const Fixed &ref ) const
{
	return Fixed( this->toFloat() - ref.toFloat() );
}

Fixed	Fixed::operator*( const Fixed &ref ) const
{
	return Fixed( this->toFloat() * ref.toFloat() );
}

Fixed	Fixed::operator/( const Fixed &ref ) const
{
	return Fixed( this->toFloat() / ref.toFloat() );
}


Fixed	&Fixed::operator++( void )
{
	this->_value += 1 << this->_bits;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp( *this );
	operator++();
	return (tmp);
}

Fixed	&Fixed::operator--( void )
{
	this->_value -= 1 << this->_bits;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp( *this );
	operator--();
	return (tmp);
}

Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b )
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return b;
}

Fixed	&Fixed::max( Fixed &a, Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

std::ostream	&operator<<( std::ostream &ost, Fixed const &instance)
{
	ost << instance.toFloat();
	return (ost);
}
