//expression.h
//Заголовочный файл математических операций - содержит объявление класса

#pragma once
#ifndef EXPRESSION_H
#define EXPRESSION_H

namespace expression
{
	class Expression
	{
	public:
		virtual double calculation() const = 0;
		virtual ~Expression() {};
	};

	class Term : public Expression
	{
	private:
		double _value;
	public:
		Term(double);
		~Term();
		double calculation() const override;
	};

	class BinaryExpression : public Expression
	{
	private:
		Expression const* _left;
		Expression const* _right;
		char _op;
	public:
		explicit BinaryExpression(Expression const*, std::string, Expression const*);
		double calculation() const override;
		~BinaryExpression();
	};

	class UnaryExpression : public Expression
	{
	private:
		std::string _op;
		Expression const* _left;
	public:
		explicit UnaryExpression(std::string, Expression const*);
		double calculation() const override;
		~UnaryExpression();
	};
}

#endif // !EXPRESSION_H
