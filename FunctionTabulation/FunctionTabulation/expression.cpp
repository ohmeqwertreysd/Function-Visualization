//expression.cpp
//Содержит определения данных и методов для класса математических операций

#include <string>
#include <stdexcept>
#include "expression.h"

namespace expression
{
	// Term
	Term::Term(double value) : _value(value) {	}

	Term::~Term() {	}

	double Term::calculation() const
	{
		return this->_value;
	}

	// Binary
	BinaryExpression::BinaryExpression(Expression const* left, std::string op, Expression const* right)
		:_left(left), _op(op.front()), _right(right) {	}

	double BinaryExpression::calculation() const
	{
		switch (_op)
		{
		case '+':
			return this->_left->calculation() + this->_right->calculation();
		case '-':
			return this->_left->calculation() - this->_right->calculation();
		case'^':
			return pow(this->_left->calculation(), this->_right->calculation());
		case '*':
			return this->_left->calculation() * this->_right->calculation();
		case '/':
			if (this->_right->calculation() == 0)
				throw std::logic_error("Division by 0.");
			else
				return this->_left->calculation() / this->_right->calculation();
		default:
			throw std::logic_error("Unknown Binary operator.");
		}
		return 0.0;
	}

	BinaryExpression::~BinaryExpression()
	{
		delete _left;
		delete _right;
	}

	//Unary
	UnaryExpression::UnaryExpression(std::string op, Expression const* left): _op(op), _left(left) {	}

	double UnaryExpression::calculation() const
	{
		if (_op == "+")
			return +_left->calculation();
		else if (_op == "-")
			return -_left->calculation();
		else if (_op == "cos")
			return cos(_left->calculation());
		else if (_op == "sin")
			return sin(_left->calculation());
		else if (_op == "sqrt")
			return sqrt(_left->calculation());
		else if (_op == "abs")
			return abs(_left->calculation());
		else if (_op == "ln")
			return log(_left->calculation());
		else
			throw std::logic_error("Unknown Unary operator.");
	}

	UnaryExpression::~UnaryExpression()
	{
		delete _left;
	}
}