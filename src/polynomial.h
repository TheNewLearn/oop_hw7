#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector>

#include "term.h"

class Polynomial {
public:
  Polynomial(std::vector<Term> terms, int degree) {}

  // get a term by exponent
  // If the term does not exist, return the term (0, exponent)
  Term term(int exponent) const {}

  // get the degree
  int degree() const {}

  // add two polynomials
  Polynomial operator+ (const Polynomial & q) const {}

  // multiply by a term
  Polynomial operator* (Term t) const {}

  // multiply by another Polynomial
  Polynomial operator* (const Polynomial & q) const {}

private:
  std::vector<Term> _terms;
  int _degree;

};

#endif
