#ifndef PYTHONIC_NUMPY_REAL_HPP
#define PYTHONIC_NUMPY_REAL_HPP

#include "pythonic/include/numpy/real.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/types/ndarray.hpp"

namespace pythonic
{

  namespace numpy
  {
    template <class E>
    auto real(E &&expr) -> decltype(
        __builtin__::getattr<types::attr::REAL>(std::forward<E>(expr)))
    {
      return __builtin__::getattr<types::attr::REAL>(std::forward<E>(expr));
    }

    DEFINE_FUNCTOR(pythonic::numpy, real);
  }
}

#endif
