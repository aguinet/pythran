//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_TRIGONOMETRIC_FUNCTIONS_ACOT_HPP_INCLUDED
#define NT2_TRIGONOMETRIC_FUNCTIONS_ACOT_HPP_INCLUDED
#include <nt2/include/functor.hpp>


namespace nt2 { namespace tag
  {
   /*!
     @brief acot generic tag

     Represents the acot function in generic contexts.

     @par Models:
        Hierarchy
   **/
    struct acot_ : ext::elementwise_<acot_>
    {
      /// @brief Parent hierarchy
      typedef ext::elementwise_<acot_> parent;
    };
  }
  /*!
    inverse cotangent.

    @par Semantic:

    For every parameter of floating type T0

    @code
    T0 r = acot(x);
    @endcode

    Returns the arc @c r in the interval
    \f$[0, \pi[\f$ such that <tt>cot(r) == x</tt>.

    @see @funcref{acotd}
    @param a0

    @return a value of the same type as the parameter
  **/
  NT2_FUNCTION_IMPLEMENTATION(tag::acot_, acot, 1)
}

#endif

