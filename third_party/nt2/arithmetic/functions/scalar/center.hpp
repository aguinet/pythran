//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_ARITHMETIC_FUNCTIONS_SCALAR_CENTER_HPP_INCLUDED
#define NT2_ARITHMETIC_FUNCTIONS_SCALAR_CENTER_HPP_INCLUDED

#include <nt2/arithmetic/functions/center.hpp>
#include <nt2/include/functions/is_nan.hpp>

namespace nt2 { namespace ext
{

  NT2_FUNCTOR_IMPLEMENTATION( nt2::tag::center_, tag::cpu_, (A0)
                            , (scalar_< unspecified_<A0> >)
                            )
  {
    typedef A0 result_type;
    BOOST_FORCEINLINE result_type operator()(A0 const& a) const
    {
      return nt2::is_nan(a) ? a : Zero<result_type>();
    }
  };

  NT2_FUNCTOR_IMPLEMENTATION( nt2::tag::center_, tag::cpu_, (A0)(A1)
                            , (scalar_< unspecified_<A0> >)
                              (scalar_< integer_<A1> > )
                            )
  {
    typedef A0 result_type;
    BOOST_FORCEINLINE result_type operator()(A0 const& a, A1 const &) const
    {
      return nt2::is_nan(a) ? a : Zero<result_type>();
    }
  };
} }

#endif
