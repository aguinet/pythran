//==============================================================================
//         Copyright 2009 - 2013 LRI    UMR 8623 CNRS/Univ Paris Sud XI
//         Copyright 2012 - 2013 MetaScale SAS
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_SDK_BENCH_SETUP_ARITHMETIC_HPP_INCLUDED
#define NT2_SDK_BENCH_SETUP_ARITHMETIC_HPP_INCLUDED

namespace nt2 { namespace bench
{
  /*!
    @brief Arithmetic progression setup

    arithmetic is a function object suitable for initializing experiment
    with a real value following an arithmetic progression of step @c s
    between @c mn and @c mx.
  **/
  struct arithmetic
  {
    /*
      Initialize an arithmetic progression.

      @param mn Starting value of the progression
      @param mx Terminal value of the progression
      @param s  Step of the progression
    */
    arithmetic(double mn, double mx, double s = 1)
              : step_(s), min_(mn), max_(mx)
    {}

    /// @brief Type returned by a call to arithmetic
    typedef double result_type;

    /// @brief Current value of the progression
    inline result_type operator()() const { return min_; }

    /// @brief Update progression state
    inline void step()        { min_ += step_; }

    /// @brief Status of the progression
    inline bool done() const  { return min_ > max_; }

    private:
    double  step_, min_, max_;
  };
} }

#endif
