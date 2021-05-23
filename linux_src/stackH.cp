# 1 "stack.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "stack.cpp"
# 1 "/usr/include/c++/9/stack" 1 3
# 58 "/usr/include/c++/9/stack" 3
       
# 59 "/usr/include/c++/9/stack" 3

# 1 "/usr/include/c++/9/deque" 1 3
# 58 "/usr/include/c++/9/deque" 3
       
# 59 "/usr/include/c++/9/deque" 3

# 1 "/usr/include/c++/9/bits/stl_algobase.h" 1 3
# 59 "/usr/include/c++/9/bits/stl_algobase.h" 3
# 1 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h" 1 3
# 252 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h" 3

# 252 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h" 3
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;




}
# 274 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# 524 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h" 3
# 1 "/usr/include/x86_64-linux-gnu/c++/9/bits/os_defines.h" 1 3
# 39 "/usr/include/x86_64-linux-gnu/c++/9/bits/os_defines.h" 3
# 1 "/usr/include/features.h" 1 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 40 "/usr/include/x86_64-linux-gnu/c++/9/bits/os_defines.h" 2 3
# 525 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h" 2 3


# 1 "/usr/include/x86_64-linux-gnu/c++/9/bits/cpu_defines.h" 1 3
# 528 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++config.h" 2 3
# 60 "/usr/include/c++/9/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/9/bits/functexcept.h" 1 3
# 40 "/usr/include/c++/9/bits/functexcept.h" 3
# 1 "/usr/include/c++/9/bits/exception_defines.h" 1 3
# 41 "/usr/include/c++/9/bits/functexcept.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{



  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range_fmt(const char*, ...) __attribute__((__noreturn__))
    __attribute__((__format__(__gnu_printf__, 1, 2)));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_ios_failure(const char*, int) __attribute__((__noreturn__));


  void
  __throw_system_error(int) __attribute__((__noreturn__));


  void
  __throw_future_error(int) __attribute__((__noreturn__));


  void
  __throw_bad_function_call() __attribute__((__noreturn__));


}
# 61 "/usr/include/c++/9/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/9/bits/cpp_type_traits.h" 1 3
# 35 "/usr/include/c++/9/bits/cpp_type_traits.h" 3
       
# 36 "/usr/include/c++/9/bits/cpp_type_traits.h" 3
# 67 "/usr/include/c++/9/bits/cpp_type_traits.h" 3
extern "C++" {

namespace std __attribute__ ((__visibility__ ("default")))
{


  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };





  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 199 "/usr/include/c++/9/bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 287 "/usr/include/c++/9/bits/cpp_type_traits.h" 3
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 417 "/usr/include/c++/9/bits/cpp_type_traits.h" 3
  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };



  template<typename _Iterator>
    inline _Iterator
    __miter_base(_Iterator __it)
    { return __it; }


}
}
# 62 "/usr/include/c++/9/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/9/ext/type_traits.h" 1 3
# 32 "/usr/include/c++/9/ext/type_traits.h" 3
       
# 33 "/usr/include/c++/9/ext/type_traits.h" 3




extern "C++" {

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{



  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }
# 167 "/usr/include/c++/9/ext/type_traits.h" 3
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };




  template<typename _Tp>
    struct __promote<_Tp, false>
    { };

  template<>
    struct __promote<long double>
    { typedef long double __type; };

  template<>
    struct __promote<double>
    { typedef double __type; };

  template<>
    struct __promote<float>
    { typedef float __type; };

  template<typename _Tp, typename _Up,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type>
    struct __promote_2
    {
      typedef __typeof__(_Tp2() + _Up2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type>
    struct __promote_3
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type,
           typename _Wp2 = typename __promote<_Wp>::__type>
    struct __promote_4
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
    };


}
}
# 63 "/usr/include/c++/9/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/9/ext/numeric_traits.h" 1 3
# 32 "/usr/include/c++/9/ext/numeric_traits.h" 3
       
# 33 "/usr/include/c++/9/ext/numeric_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 54 "/usr/include/c++/9/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 99 "/usr/include/c++/9/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 643L / 2136);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };


}
# 64 "/usr/include/c++/9/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/9/bits/stl_pair.h" 1 3
# 59 "/usr/include/c++/9/bits/stl_pair.h" 3
# 1 "/usr/include/c++/9/bits/move.h" 1 3
# 34 "/usr/include/c++/9/bits/move.h" 3
# 1 "/usr/include/c++/9/bits/concept_check.h" 1 3
# 33 "/usr/include/c++/9/bits/concept_check.h" 3
       
# 34 "/usr/include/c++/9/bits/concept_check.h" 3
# 35 "/usr/include/c++/9/bits/move.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{







  template<typename _Tp>
    inline _Tp*
    __addressof(_Tp& __r)
    { return __builtin_addressof(__r); }
# 176 "/usr/include/c++/9/bits/move.h" 3
  template<typename _Tp>
    inline
# 186 "/usr/include/c++/9/bits/move.h" 3
    void
    swap(_Tp& __a, _Tp& __b)

    {

     

      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }




  template<typename _Tp, size_t _Nm>
    inline





    void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])

    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }



}
# 60 "/usr/include/c++/9/bits/stl_pair.h" 2 3





namespace std __attribute__ ((__visibility__ ("default")))
{

# 190 "/usr/include/c++/9/bits/stl_pair.h" 3
  template<typename _U1, typename _U2> class __pair_base
  {







  };







  template<typename _T1, typename _T2>
    struct pair
    : private __pair_base<_T1, _T2>
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;
# 229 "/usr/include/c++/9/bits/stl_pair.h" 3
      pair()
      : first(), second() { }
# 248 "/usr/include/c++/9/bits/stl_pair.h" 3
      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 275 "/usr/include/c++/9/bits/stl_pair.h" 3
      template<typename _U1, typename _U2>
 pair(const pair<_U1, _U2>& __p)
 : first(__p.first), second(__p.second) { }
# 439 "/usr/include/c++/9/bits/stl_pair.h" 3
    };






  template<typename _T1, typename _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<typename _T1, typename _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<typename _T1, typename _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<typename _T1, typename _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<typename _T1, typename _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<typename _T1, typename _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 532 "/usr/include/c++/9/bits/stl_pair.h" 3
  template<typename _T1, typename _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }





}
# 65 "/usr/include/c++/9/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/9/bits/stl_iterator_base_types.h" 1 3
# 62 "/usr/include/c++/9/bits/stl_iterator_base_types.h" 3
       
# 63 "/usr/include/c++/9/bits/stl_iterator_base_types.h" 3







namespace std __attribute__ ((__visibility__ ("default")))
{

# 89 "/usr/include/c++/9/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };


  struct output_iterator_tag { };


  struct forward_iterator_tag : public input_iterator_tag { };



  struct bidirectional_iterator_tag : public forward_iterator_tag { };



  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 116 "/usr/include/c++/9/bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };
# 165 "/usr/include/c++/9/bits/stl_iterator_base_types.h" 3
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };



  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };


  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline
    typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }






  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type _S_base(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type _S_base(_Iterator __it)
      { return __it.base(); }
    };
# 238 "/usr/include/c++/9/bits/stl_iterator_base_types.h" 3

}
# 66 "/usr/include/c++/9/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/9/bits/stl_iterator_base_funcs.h" 1 3
# 62 "/usr/include/c++/9/bits/stl_iterator_base_funcs.h" 3
       
# 63 "/usr/include/c++/9/bits/stl_iterator_base_funcs.h" 3


# 1 "/usr/include/c++/9/debug/assertions.h" 1 3
# 66 "/usr/include/c++/9/bits/stl_iterator_base_funcs.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{




  template <typename> struct _List_iterator;
  template <typename> struct _List_const_iterator;


  template<typename _InputIterator>
    inline
    typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {

     

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline
    typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {

     

      return __last - __first;
    }



  template<typename _Tp>
    ptrdiff_t
    __distance(std::_List_iterator<_Tp>,
        std::_List_iterator<_Tp>,
        input_iterator_tag);

  template<typename _Tp>
    ptrdiff_t
    __distance(std::_List_const_iterator<_Tp>,
        std::_List_const_iterator<_Tp>,
        input_iterator_tag);
# 135 "/usr/include/c++/9/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline
    typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {

     
      ;
      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {

     

      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {

     

      if (__builtin_constant_p(__n) && __n == 1)
 ++__i;
      else if (__builtin_constant_p(__n) && __n == -1)
 --__i;
      else
 __i += __n;
    }
# 200 "/usr/include/c++/9/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }
# 236 "/usr/include/c++/9/bits/stl_iterator_base_funcs.h" 3

}
# 67 "/usr/include/c++/9/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/9/bits/stl_iterator.h" 1 3
# 66 "/usr/include/c++/9/bits/stl_iterator.h" 3
# 1 "/usr/include/c++/9/bits/ptr_traits.h" 1 3
# 67 "/usr/include/c++/9/bits/stl_iterator.h" 2 3
# 76 "/usr/include/c++/9/bits/stl_iterator.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 104 "/usr/include/c++/9/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;
# 130 "/usr/include/c++/9/bits/stl_iterator.h" 3
     
      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




     
      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }
# 154 "/usr/include/c++/9/bits/stl_iterator.h" 3
      template<typename _Iter>

        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }
# 176 "/usr/include/c++/9/bits/stl_iterator.h" 3
      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      {


 _Iterator __tmp = current;
 --__tmp;
 return _S_to_pointer(__tmp);
      }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }







      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }







      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }

    private:
      template<typename _Tp>
 static _Tp*
 _S_to_pointer(_Tp* __p)
        { return __p; }

      template<typename _Tp>
 static pointer
 _S_to_pointer(_Tp __t)
        { return __t.operator->(); }
    };
# 323 "/usr/include/c++/9/bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }



  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() - __x.base(); }
# 421 "/usr/include/c++/9/bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }
# 477 "/usr/include/c++/9/bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x)
      : container(std::__addressof(__x)) { }
# 505 "/usr/include/c++/9/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 528 "/usr/include/c++/9/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 554 "/usr/include/c++/9/bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 569 "/usr/include/c++/9/bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x)
      : container(std::__addressof(__x)) { }
# 596 "/usr/include/c++/9/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 619 "/usr/include/c++/9/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 645 "/usr/include/c++/9/bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 664 "/usr/include/c++/9/bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(std::__addressof(__x)), iter(__i) {}
# 707 "/usr/include/c++/9/bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 733 "/usr/include/c++/9/bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 760 "/usr/include/c++/9/bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }




}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 784 "/usr/include/c++/9/bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      __normal_iterator()
      : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i)
      : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](difference_type __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(difference_type __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(difference_type __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(difference_type __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(difference_type __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 884 "/usr/include/c++/9/bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
   
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }


}

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _Iterator, typename _Container>
    _Iterator
    __niter_base(__gnu_cxx::__normal_iterator<_Iterator, _Container> __it)
   
    { return __it.base(); }
# 1295 "/usr/include/c++/9/bits/stl_iterator.h" 3

}
# 68 "/usr/include/c++/9/bits/stl_algobase.h" 2 3

# 1 "/usr/include/c++/9/debug/debug.h" 1 3
# 48 "/usr/include/c++/9/debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 70 "/usr/include/c++/9/bits/stl_algobase.h" 2 3

# 1 "/usr/include/c++/9/bits/predefined_ops.h" 1 3
# 33 "/usr/include/c++/9/bits/predefined_ops.h" 3
namespace __gnu_cxx
{
namespace __ops
{
  struct _Iter_less_iter
  {
    template<typename _Iterator1, typename _Iterator2>
     
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 < *__it2; }
  };

 
  inline _Iter_less_iter
  __iter_less_iter()
  { return _Iter_less_iter(); }

  struct _Iter_less_val
  {



    _Iter_less_val() { }


    explicit
    _Iter_less_val(_Iter_less_iter) { }

    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it < __val; }
  };

  inline _Iter_less_val
  __iter_less_val()
  { return _Iter_less_val(); }

  inline _Iter_less_val
  __iter_comp_val(_Iter_less_iter)
  { return _Iter_less_val(); }

  struct _Val_less_iter
  {



    _Val_less_iter() { }


    explicit
    _Val_less_iter(_Iter_less_iter) { }

    template<typename _Value, typename _Iterator>
      bool
      operator()(_Value& __val, _Iterator __it) const
      { return __val < *__it; }
  };

  inline _Val_less_iter
  __val_less_iter()
  { return _Val_less_iter(); }

  inline _Val_less_iter
  __val_comp_iter(_Iter_less_iter)
  { return _Val_less_iter(); }

  struct _Iter_equal_to_iter
  {
    template<typename _Iterator1, typename _Iterator2>
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 == *__it2; }
  };

  inline _Iter_equal_to_iter
  __iter_equal_to_iter()
  { return _Iter_equal_to_iter(); }

  struct _Iter_equal_to_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it == __val; }
  };

  inline _Iter_equal_to_val
  __iter_equal_to_val()
  { return _Iter_equal_to_val(); }

  inline _Iter_equal_to_val
  __iter_comp_val(_Iter_equal_to_iter)
  { return _Iter_equal_to_val(); }

  template<typename _Compare>
    struct _Iter_comp_iter
    {
      _Compare _M_comp;

      explicit
      _Iter_comp_iter(_Compare __comp)
 : _M_comp((__comp))
      { }

      template<typename _Iterator1, typename _Iterator2>
       
        bool
        operator()(_Iterator1 __it1, _Iterator2 __it2)
        { return bool(_M_comp(*__it1, *__it2)); }
    };

  template<typename _Compare>
   
    inline _Iter_comp_iter<_Compare>
    __iter_comp_iter(_Compare __comp)
    { return _Iter_comp_iter<_Compare>((__comp)); }

  template<typename _Compare>
    struct _Iter_comp_val
    {
      _Compare _M_comp;

      explicit
      _Iter_comp_val(_Compare __comp)
 : _M_comp((__comp))
      { }

      explicit
      _Iter_comp_val(const _Iter_comp_iter<_Compare>& __comp)
 : _M_comp(__comp._M_comp)
      { }
# 174 "/usr/include/c++/9/bits/predefined_ops.h" 3
      template<typename _Iterator, typename _Value>
 bool
 operator()(_Iterator __it, _Value& __val)
 { return bool(_M_comp(*__it, __val)); }
    };

  template<typename _Compare>
   inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Compare __comp)
    { return _Iter_comp_val<_Compare>((__comp)); }

  template<typename _Compare>
    inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Iter_comp_iter<_Compare> __comp)
    { return _Iter_comp_val<_Compare>((__comp)); }

  template<typename _Compare>
    struct _Val_comp_iter
    {
      _Compare _M_comp;

      explicit
      _Val_comp_iter(_Compare __comp)
 : _M_comp((__comp))
      { }

      explicit
      _Val_comp_iter(const _Iter_comp_iter<_Compare>& __comp)
 : _M_comp(__comp._M_comp)
      { }
# 212 "/usr/include/c++/9/bits/predefined_ops.h" 3
      template<typename _Value, typename _Iterator>
 bool
 operator()(_Value& __val, _Iterator __it)
 { return bool(_M_comp(__val, *__it)); }
    };

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Compare __comp)
    { return _Val_comp_iter<_Compare>((__comp)); }

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Iter_comp_iter<_Compare> __comp)
    { return _Val_comp_iter<_Compare>((__comp)); }

  template<typename _Value>
    struct _Iter_equals_val
    {
      _Value& _M_value;

      explicit
      _Iter_equals_val(_Value& __value)
 : _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return *__it == _M_value; }
    };

  template<typename _Value>
    inline _Iter_equals_val<_Value>
    __iter_equals_val(_Value& __val)
    { return _Iter_equals_val<_Value>(__val); }

  template<typename _Iterator1>
    struct _Iter_equals_iter
    {
      _Iterator1 _M_it1;

      explicit
      _Iter_equals_iter(_Iterator1 __it1)
 : _M_it1(__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return *__it2 == *_M_it1; }
    };

  template<typename _Iterator>
    inline _Iter_equals_iter<_Iterator>
    __iter_comp_iter(_Iter_equal_to_iter, _Iterator __it)
    { return _Iter_equals_iter<_Iterator>(__it); }

  template<typename _Predicate>
    struct _Iter_pred
    {
      _Predicate _M_pred;

      explicit
      _Iter_pred(_Predicate __pred)
 : _M_pred((__pred))
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_pred<_Predicate>
    __pred_iter(_Predicate __pred)
    { return _Iter_pred<_Predicate>((__pred)); }

  template<typename _Compare, typename _Value>
    struct _Iter_comp_to_val
    {
      _Compare _M_comp;
      _Value& _M_value;

      _Iter_comp_to_val(_Compare __comp, _Value& __value)
 : _M_comp((__comp)), _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_comp(*__it, _M_value)); }
    };

  template<typename _Compare, typename _Value>
    _Iter_comp_to_val<_Compare, _Value>
    __iter_comp_val(_Compare __comp, _Value &__val)
    {
      return _Iter_comp_to_val<_Compare, _Value>((__comp), __val);
    }

  template<typename _Compare, typename _Iterator1>
    struct _Iter_comp_to_iter
    {
      _Compare _M_comp;
      _Iterator1 _M_it1;

      _Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1)
 : _M_comp((__comp)), _M_it1(__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return bool(_M_comp(*__it2, *_M_it1)); }
    };

  template<typename _Compare, typename _Iterator>
    inline _Iter_comp_to_iter<_Compare, _Iterator>
    __iter_comp_iter(_Iter_comp_iter<_Compare> __comp, _Iterator __it)
    {
      return _Iter_comp_to_iter<_Compare, _Iterator>(
   (__comp._M_comp), __it);
    }

  template<typename _Predicate>
    struct _Iter_negate
    {
      _Predicate _M_pred;

      explicit
      _Iter_negate(_Predicate __pred)
 : _M_pred((__pred))
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return !bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_negate<_Predicate>
    __negate(_Iter_pred<_Predicate> __pred)
    { return _Iter_negate<_Predicate>((__pred._M_pred)); }

}
}
# 72 "/usr/include/c++/9/bits/stl_algobase.h" 2 3




namespace std __attribute__ ((__visibility__ ("default")))
{






  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
 static void
 iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
 {
   typedef typename iterator_traits<_ForwardIterator1>::value_type
     _ValueType1;
   _ValueType1 __tmp = *__a;
   *__a = *__b;
   *__b = __tmp;
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
 static void
 iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
 {
   swap(*__a, *__b);
 }
    };
# 121 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {

     

     



      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;

     

     


      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);



    }
# 167 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {

     

     

      ;

      for (; __first1 != __last1; ++__first1, (void)++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 195 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _Tp>
   
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {

     

      if (__b < __a)
 return __b;
      return __a;
    }
# 219 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _Tp>
   
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {

     

      if (__a < __b)
 return __b;
      return __a;
    }
# 243 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
   
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 265 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
   
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }



  template<typename _Iterator>
    inline _Iterator
    __niter_base(_Iterator __it)
   
    { return __it; }




  template<typename _From, typename _To>
    inline _From
    __niter_wrap(_From __from, _To __res)
    { return __from + (__res - std::__niter_base(__from)); }


  template<typename _Iterator>
    inline _Iterator
    __niter_wrap(const _Iterator&, _Iterator __res)
    { return __res; }







  template<bool _IsMove, bool _IsSimple, typename _Category>
    struct __copy_move
    {
      template<typename _II, typename _OI>
 static _OI
 __copy_m(_II __first, _II __last, _OI __result)
 {
   for (; __first != __last; ++__result, (void)++__first)
     *__result = *__first;
   return __result;
 }
    };
# 332 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
 static _OI
 __copy_m(_II __first, _II __last, _OI __result)
 {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 370 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
 static _Tp*
 __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
 {







   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_trivially_copyable(_ValueTypeI)
        && __is_pointer<_II>::__value
        && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
         _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return std::__niter_wrap(__result,
  std::__copy_move_a<_IsMove>(std::__niter_base(__first),
         std::__niter_base(__last),
         std::__niter_base(__result)));
    }
# 463 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {

     
     

      ;

      return std::__copy_move_a2<__is_move_iterator<_II>::__value>
      (std::__miter_base(__first), std::__miter_base(__last), __result);
    }
# 514 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
 static _BI2
 __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
 {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 542 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
 static _BI2
 __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
 {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 572 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
 static _Tp*
 __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
 {







   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_trivially_copyable(_ValueType1)
        && __is_pointer<_BI1>::__value
        && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
           _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return std::__niter_wrap(__result,
  std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
# 639 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {

     
     
     


      ;

      return std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
      (std::__miter_base(__first), std::__miter_base(__last), __result);
    }
# 696 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      if (const size_t __len = __last - __first)
 __builtin_memset(__first, static_cast<unsigned char>(__tmp), __len);
    }
# 740 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {

     

      ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, (void) ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, (void) ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 800 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {

     
      ;

      return std::__niter_wrap(__first,
  std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
 static bool
 equal(_II1 __first1, _II1 __last1, _II2 __first2)
 {
   for (; __first1 != __last1; ++__first1, (void) ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
 static bool
 equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
 {
   if (const size_t __len = (__last1 - __first1))
     return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len);
   return true;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = ((__is_integer<_ValueType1>::__value
         || __is_pointer<_ValueType1>::__value)
        && __is_pointer<_II1>::__value
        && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }

  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
 static _II1
 __newlast1(_II1, _II1 __last1, _II2, _II2)
 { return __last1; }

      template<typename _II>
 static bool
 __cnd2(_II __first, _II __last)
 { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
 static _RAI1
 __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
 {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
 static bool
 __cnd2(_RAI, _RAI)
 { return true; }
    };

  template<typename _II1, typename _II2, typename _Compare>
    bool
    __lexicographical_compare_impl(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2,
       _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, (void)++__first2)
 {
   if (__comp(__first1, __first2))
     return true;
   if (__comp(__first2, __first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
 static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 return std::__lexicographical_compare_impl(__first1, __last1,
         __first2, __last2,
     __gnu_cxx::__ops::__iter_less_iter());
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
 static bool
 __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   if (const size_t __len = std::min(__len1, __len2))
     if (int __result = __builtin_memcmp(__first1, __first2, __len))
       return __result < 0;
   return __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    __lower_bound(_ForwardIterator __first, _ForwardIterator __last,
    const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;

      _DistanceType __len = std::distance(__first, __last);

      while (__len > 0)
 {
   _DistanceType __half = __len >> 1;
   _ForwardIterator __middle = __first;
   std::advance(__middle, __half);
   if (__comp(__middle, __val))
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
# 1002 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {

     
     

      ;

      return std::__lower_bound(__first, __last, __val,
    __gnu_cxx::__ops::__iter_less_val());
    }



  inline int
  __lg(int __n)
  { return (int)sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline unsigned
  __lg(unsigned __n)
  { return (int)sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline long
  __lg(long __n)
  { return (int)sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline unsigned long
  __lg(unsigned long __n)
  { return (int)sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline long long
  __lg(long long __n)
  { return (int)sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

  inline unsigned long long
  __lg(unsigned long long __n)
  { return (int)sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }


# 1057 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {

     
     
     


      ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
# 1089 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      for (; __first1 != __last1; ++__first1, (void)++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1239 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {





     
     
     
     
      ;
      ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
# 1275 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {

     
     
      ;
      ;

      return std::__lexicographical_compare_impl
 (__first1, __last1, __first2, __last2,
  __gnu_cxx::__ops::__iter_comp_iter(__comp));
    }

  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    __mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
      while (__first1 != __last1 && __binary_pred(__first1, __first2))
 {
   ++__first1;
   ++__first2;
 }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1318 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {

     
     
     


      ;

      return std::__mismatch(__first1, __last1, __first2,
        __gnu_cxx::__ops::__iter_equal_to_iter());
    }
# 1351 "/usr/include/c++/9/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      return std::__mismatch(__first1, __last1, __first2,
 __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
    }
# 1451 "/usr/include/c++/9/bits/stl_algobase.h" 3


}
# 61 "/usr/include/c++/9/deque" 2 3



# 1 "/usr/include/c++/9/bits/allocator.h" 1 3
# 46 "/usr/include/c++/9/bits/allocator.h" 3
# 1 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++allocator.h" 1 3
# 33 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++allocator.h" 3
# 1 "/usr/include/c++/9/ext/new_allocator.h" 1 3
# 33 "/usr/include/c++/9/ext/new_allocator.h" 3
# 1 "/usr/include/c++/9/new" 1 3
# 37 "/usr/include/c++/9/new" 3
       
# 38 "/usr/include/c++/9/new" 3


# 1 "/usr/include/c++/9/exception" 1 3
# 33 "/usr/include/c++/9/exception" 3
       
# 34 "/usr/include/c++/9/exception" 3

#pragma GCC visibility push(default)


# 1 "/usr/include/c++/9/bits/exception.h" 1 3
# 34 "/usr/include/c++/9/bits/exception.h" 3
       
# 35 "/usr/include/c++/9/bits/exception.h" 3

#pragma GCC visibility push(default)



extern "C++" {

namespace std
{
# 60 "/usr/include/c++/9/bits/exception.h" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();
# 74 "/usr/include/c++/9/bits/exception.h" 3
    virtual const char*
    what() const throw();
  };

}

}

#pragma GCC visibility pop
# 39 "/usr/include/c++/9/exception" 2 3

extern "C++" {

namespace std
{


  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char*
    what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();
# 76 "/usr/include/c++/9/exception" 3
  void terminate() throw() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();
# 88 "/usr/include/c++/9/exception" 3
  void unexpected() __attribute__ ((__noreturn__));
# 101 "/usr/include/c++/9/exception" 3
 
  bool uncaught_exception() throw() __attribute__ ((__pure__));
# 111 "/usr/include/c++/9/exception" 3
}

namespace __gnu_cxx
{

# 133 "/usr/include/c++/9/exception" 3
  void __verbose_terminate_handler();


}

}

#pragma GCC visibility pop
# 41 "/usr/include/c++/9/new" 2 3

#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }
# 66 "/usr/include/c++/9/new" 3
    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };
# 91 "/usr/include/c++/9/new" 3
  struct nothrow_t
  {



  };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();





}
# 125 "/usr/include/c++/9/new" 3
 void* operator new(std::size_t) throw(std::bad_alloc)
  __attribute__((__externally_visible__));
 void* operator new[](std::size_t) throw(std::bad_alloc)
  __attribute__((__externally_visible__));
void operator delete(void*) throw()
  __attribute__((__externally_visible__));
void operator delete[](void*) throw()
  __attribute__((__externally_visible__));






 void* operator new(std::size_t, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__, __malloc__));
 void* operator new[](std::size_t, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__, __malloc__));
void operator delete(void*, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
void operator delete[](void*, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
# 173 "/usr/include/c++/9/new" 3
 inline void* operator new(std::size_t, void* __p) throw()
{ return __p; }
 inline void* operator new[](std::size_t, void* __p) throw()
{ return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}
# 226 "/usr/include/c++/9/new" 3
#pragma GCC visibility pop
# 34 "/usr/include/c++/9/ext/new_allocator.h" 2 3






namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{


  using std::size_t;
  using std::ptrdiff_t;
# 57 "/usr/include/c++/9/ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
 struct rebind
 { typedef new_allocator<_Tp1> other; };







     
      new_allocator() throw() { }

     
      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>

 new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const
      { return std::__addressof(__x); }

      const_pointer
      address(const_reference __x) const
      { return std::__addressof(__x); }



      pointer
      allocate(size_type __n, const void* = static_cast<const void*>(0))
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();
# 114 "/usr/include/c++/9/ext/new_allocator.h" 3
 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      {







 ::operator delete(__p);
      }

      size_type
      max_size() const throw()
      {

 return size_t(0x7fffffffffffffffL) / sizeof(_Tp);



      }
# 157 "/usr/include/c++/9/ext/new_allocator.h" 3
      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }

      void
      destroy(pointer __p) { __p->~_Tp(); }


      template<typename _Up>
 friend bool
 operator==(const new_allocator&, const new_allocator<_Up>&)
 throw()
 { return true; }

      template<typename _Up>
 friend bool
 operator!=(const new_allocator&, const new_allocator<_Up>&)
 throw()
 { return false; }
    };


}
# 34 "/usr/include/x86_64-linux-gnu/c++/9/bits/c++allocator.h" 2 3
# 47 "/usr/include/c++/9/bits/allocator.h" 2 3
# 1 "/usr/include/c++/9/bits/memoryfwd.h" 1 3
# 46 "/usr/include/c++/9/bits/memoryfwd.h" 3
       
# 47 "/usr/include/c++/9/bits/memoryfwd.h" 3



namespace std __attribute__ ((__visibility__ ("default")))
{

# 63 "/usr/include/c++/9/bits/memoryfwd.h" 3
  template<typename>
    class allocator;

  template<>
    class allocator<void>;
# 77 "/usr/include/c++/9/bits/memoryfwd.h" 3

}
# 48 "/usr/include/c++/9/bits/allocator.h" 2 3
# 57 "/usr/include/c++/9/bits/allocator.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{








  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
 struct rebind
 { typedef allocator<_Tp1> other; };
# 101 "/usr/include/c++/9/bits/allocator.h" 3
    };
# 111 "/usr/include/c++/9/bits/allocator.h" 3
  template<typename _Tp>
    class allocator : public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
 struct rebind
 { typedef allocator<_Tp1> other; };
# 137 "/usr/include/c++/9/bits/allocator.h" 3
     
      allocator() throw() { }

     
      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }






      template<typename _Tp1>

 allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }

      friend bool
      operator==(const allocator&, const allocator&) throw()
      { return true; }

      friend bool
      operator!=(const allocator&, const allocator&) throw()
      { return false; }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    throw()
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    throw()
    { return false; }



  template<typename _Tp>
    class allocator<const _Tp>
    {
    public:
      typedef _Tp value_type;
      template<typename _Up> allocator(const allocator<_Up>&) { }
    };

  template<typename _Tp>
    class allocator<volatile _Tp>
    {
    public:
      typedef _Tp value_type;
      template<typename _Up> allocator(const allocator<_Up>&) { }
    };

  template<typename _Tp>
    class allocator<const volatile _Tp>
    {
    public:
      typedef _Tp value_type;
      template<typename _Up> allocator(const allocator<_Up>&) { }
    };






  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };
# 280 "/usr/include/c++/9/bits/allocator.h" 3

}
# 65 "/usr/include/c++/9/deque" 2 3
# 1 "/usr/include/c++/9/bits/stl_construct.h" 1 3
# 61 "/usr/include/c++/9/bits/stl_construct.h" 3
# 1 "/usr/include/c++/9/ext/alloc_traits.h" 1 3
# 32 "/usr/include/c++/9/ext/alloc_traits.h" 3
       
# 33 "/usr/include/c++/9/ext/alloc_traits.h" 3
# 41 "/usr/include/c++/9/ext/alloc_traits.h" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{






template<typename _Alloc, typename = typename _Alloc::value_type>
  struct __alloc_traits



  {
    typedef _Alloc allocator_type;
# 123 "/usr/include/c++/9/ext/alloc_traits.h" 3
    typedef typename _Alloc::pointer pointer;
    typedef typename _Alloc::const_pointer const_pointer;
    typedef typename _Alloc::value_type value_type;
    typedef typename _Alloc::reference reference;
    typedef typename _Alloc::const_reference const_reference;
    typedef typename _Alloc::size_type size_type;
    typedef typename _Alloc::difference_type difference_type;

    static pointer
    allocate(_Alloc& __a, size_type __n)
    { return __a.allocate(__n); }

    static void deallocate(_Alloc& __a, pointer __p, size_type __n)
    { __a.deallocate(__p, __n); }

    template<typename _Tp>
      static void construct(_Alloc& __a, pointer __p, const _Tp& __arg)
      { __a.construct(__p, __arg); }

    static void destroy(_Alloc& __a, pointer __p)
    { __a.destroy(__p); }

    static size_type max_size(const _Alloc& __a)
    { return __a.max_size(); }

    static const _Alloc& _S_select_on_copy(const _Alloc& __a) { return __a; }

    static void _S_on_swap(_Alloc& __a, _Alloc& __b)
    {


      std::__alloc_swap<_Alloc>::_S_do_it(__a, __b);
    }

    template<typename _Tp>
      struct rebind
      { typedef typename _Alloc::template rebind<_Tp>::other other; };

  };


}
# 62 "/usr/include/c++/9/bits/stl_construct.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 77 "/usr/include/c++/9/bits/stl_construct.h" 3
  template<typename _T1, typename _T2>
    inline void
    _Construct(_T1* __p, const _T2& __value)
    {


      ::new(static_cast<void*>(__p)) _T1(__value);
    }


  template<typename _T1>
    inline void
    _Construct_novalue(_T1* __p)
    { ::new(static_cast<void*>(__p)) _T1; }




  template<typename _Tp>
    inline void
    _Destroy(_Tp* __pointer)
    { __pointer->~_Tp(); }

  template<bool>
    struct _Destroy_aux
    {
      template<typename _ForwardIterator>
        static void
        __destroy(_ForwardIterator __first, _ForwardIterator __last)
 {
   for (; __first != __last; ++__first)
     std::_Destroy(std::__addressof(*__first));
 }
    };

  template<>
    struct _Destroy_aux<true>
    {
      template<typename _ForwardIterator>
        static void
        __destroy(_ForwardIterator, _ForwardIterator) { }
    };






  template<typename _ForwardIterator>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
                       _Value_type;





      std::_Destroy_aux<__has_trivial_destructor(_Value_type)>::
 __destroy(__first, __last);
    }

  template<bool>
    struct _Destroy_n_aux
    {
      template<typename _ForwardIterator, typename _Size>
        static _ForwardIterator
        __destroy_n(_ForwardIterator __first, _Size __count)
 {
   for (; __count > 0; (void)++__first, --__count)
     std::_Destroy(std::__addressof(*__first));
   return __first;
 }
    };

  template<>
    struct _Destroy_n_aux<true>
    {
      template<typename _ForwardIterator, typename _Size>
        static _ForwardIterator
        __destroy_n(_ForwardIterator __first, _Size __count)
 {
   std::advance(__first, __count);
   return __first;
 }
    };






  template<typename _ForwardIterator, typename _Size>
    inline _ForwardIterator
    _Destroy_n(_ForwardIterator __first, _Size __count)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
                       _Value_type;





      return std::_Destroy_n_aux<__has_trivial_destructor(_Value_type)>::
 __destroy_n(__first, __count);
    }







  template<typename _ForwardIterator, typename _Allocator>
    void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last,
      _Allocator& __alloc)
    {
      typedef __gnu_cxx::__alloc_traits<_Allocator> __traits;
      for (; __first != __last; ++__first)
 __traits::destroy(__alloc, std::__addressof(*__first));
    }

  template<typename _ForwardIterator, typename _Tp>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last,
      allocator<_Tp>&)
    {
      _Destroy(__first, __last);
    }
# 232 "/usr/include/c++/9/bits/stl_construct.h" 3

}
# 66 "/usr/include/c++/9/deque" 2 3
# 1 "/usr/include/c++/9/bits/stl_uninitialized.h" 1 3
# 67 "/usr/include/c++/9/bits/stl_uninitialized.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  template<bool _TrivialValueTypes>
    struct __uninitialized_copy
    {
      template<typename _InputIterator, typename _ForwardIterator>
        static _ForwardIterator
        __uninit_copy(_InputIterator __first, _InputIterator __last,
        _ForwardIterator __result)
        {
   _ForwardIterator __cur = __result;
   try
     {
       for (; __first != __last; ++__first, (void)++__cur)
  std::_Construct(std::__addressof(*__cur), *__first);
       return __cur;
     }
   catch(...)
     {
       std::_Destroy(__result, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_copy<true>
    {
      template<typename _InputIterator, typename _ForwardIterator>
        static _ForwardIterator
        __uninit_copy(_InputIterator __first, _InputIterator __last,
        _ForwardIterator __result)
        { return std::copy(__first, __last, __result); }
    };
# 113 "/usr/include/c++/9/bits/stl_uninitialized.h" 3
  template<typename _InputIterator, typename _ForwardIterator>
    inline _ForwardIterator
    uninitialized_copy(_InputIterator __first, _InputIterator __last,
         _ForwardIterator __result)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType2;

      const bool __assignable = true;
# 137 "/usr/include/c++/9/bits/stl_uninitialized.h" 3
      return std::__uninitialized_copy<__is_trivial(_ValueType1)
           && __is_trivial(_ValueType2)
           && __assignable>::
 __uninit_copy(__first, __last, __result);
    }


  template<bool _TrivialValueType>
    struct __uninitialized_fill
    {
      template<typename _ForwardIterator, typename _Tp>
        static void
        __uninit_fill(_ForwardIterator __first, _ForwardIterator __last,
        const _Tp& __x)
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __cur != __last; ++__cur)
  std::_Construct(std::__addressof(*__cur), __x);
     }
   catch(...)
     {
       std::_Destroy(__first, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_fill<true>
    {
      template<typename _ForwardIterator, typename _Tp>
        static void
        __uninit_fill(_ForwardIterator __first, _ForwardIterator __last,
        const _Tp& __x)
        { std::fill(__first, __last, __x); }
    };
# 185 "/usr/include/c++/9/bits/stl_uninitialized.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    uninitialized_fill(_ForwardIterator __first, _ForwardIterator __last,
         const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;

      const bool __assignable = true;
# 205 "/usr/include/c++/9/bits/stl_uninitialized.h" 3
      std::__uninitialized_fill<__is_trivial(_ValueType) && __assignable>::
 __uninit_fill(__first, __last, __x);
    }


  template<bool _TrivialValueType>
    struct __uninitialized_fill_n
    {
      template<typename _ForwardIterator, typename _Size, typename _Tp>
        static _ForwardIterator
        __uninit_fill_n(_ForwardIterator __first, _Size __n,
   const _Tp& __x)
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __n > 0; --__n, (void) ++__cur)
  std::_Construct(std::__addressof(*__cur), __x);
       return __cur;
     }
   catch(...)
     {
       std::_Destroy(__first, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_fill_n<true>
    {
      template<typename _ForwardIterator, typename _Size, typename _Tp>
        static _ForwardIterator
        __uninit_fill_n(_ForwardIterator __first, _Size __n,
   const _Tp& __x)
        { return std::fill_n(__first, __n, __x); }
    };
# 254 "/usr/include/c++/9/bits/stl_uninitialized.h" 3
  template<typename _ForwardIterator, typename _Size, typename _Tp>
    inline _ForwardIterator
    uninitialized_fill_n(_ForwardIterator __first, _Size __n, const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;

      const bool __assignable = true;
# 272 "/usr/include/c++/9/bits/stl_uninitialized.h" 3
      return __uninitialized_fill_n<__is_trivial(_ValueType) && __assignable>::
 __uninit_fill_n(__first, __n, __x);
    }







  template<typename _InputIterator, typename _ForwardIterator,
    typename _Allocator>
    _ForwardIterator
    __uninitialized_copy_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __result;
      try
 {
   typedef __gnu_cxx::__alloc_traits<_Allocator> __traits;
   for (; __first != __last; ++__first, (void)++__cur)
     __traits::construct(__alloc, std::__addressof(*__cur), *__first);
   return __cur;
 }
      catch(...)
 {
   std::_Destroy(__result, __cur, __alloc);
   throw;
 }
    }

  template<typename _InputIterator, typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    __uninitialized_copy_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, allocator<_Tp>&)
    { return std::uninitialized_copy(__first, __last, __result); }

  template<typename _InputIterator, typename _ForwardIterator,
    typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator& __alloc)
    {
      return std::__uninitialized_copy_a((__first),
      (__last),
      __result, __alloc);
    }

  template<typename _InputIterator, typename _ForwardIterator,
    typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_if_noexcept_a(_InputIterator __first,
           _InputIterator __last,
           _ForwardIterator __result,
           _Allocator& __alloc)
    {
      return std::__uninitialized_copy_a
 ((__first),
  (__last), __result, __alloc);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Allocator>
    void
    __uninitialized_fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __x, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __first;
      try
 {
   typedef __gnu_cxx::__alloc_traits<_Allocator> __traits;
   for (; __cur != __last; ++__cur)
     __traits::construct(__alloc, std::__addressof(*__cur), __x);
 }
      catch(...)
 {
   std::_Destroy(__first, __cur, __alloc);
   throw;
 }
    }

  template<typename _ForwardIterator, typename _Tp, typename _Tp2>
    inline void
    __uninitialized_fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __x, allocator<_Tp2>&)
    { std::uninitialized_fill(__first, __last, __x); }

  template<typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Allocator>
    _ForwardIterator
    __uninitialized_fill_n_a(_ForwardIterator __first, _Size __n,
        const _Tp& __x, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __first;
      try
 {
   typedef __gnu_cxx::__alloc_traits<_Allocator> __traits;
   for (; __n > 0; --__n, (void) ++__cur)
     __traits::construct(__alloc, std::__addressof(*__cur), __x);
   return __cur;
 }
      catch(...)
 {
   std::_Destroy(__first, __cur, __alloc);
   throw;
 }
    }

  template<typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Tp2>
    inline _ForwardIterator
    __uninitialized_fill_n_a(_ForwardIterator __first, _Size __n,
        const _Tp& __x, allocator<_Tp2>&)
    { return std::uninitialized_fill_n(__first, __n, __x); }
# 396 "/usr/include/c++/9/bits/stl_uninitialized.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator>
    inline _ForwardIterator
    __uninitialized_copy_move(_InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid = std::__uninitialized_copy_a(__first1, __last1,
          __result,
          __alloc);
      try
 {
   return std::__uninitialized_move_a(__first2, __last2, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }





  template<typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_copy(_InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid = std::__uninitialized_move_a(__first1, __last1,
          __result,
          __alloc);
      try
 {
   return std::__uninitialized_copy_a(__first2, __last2, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }




  template<typename _ForwardIterator, typename _Tp, typename _InputIterator,
    typename _Allocator>
    inline _ForwardIterator
    __uninitialized_fill_move(_ForwardIterator __result, _ForwardIterator __mid,
         const _Tp& __x, _InputIterator __first,
         _InputIterator __last, _Allocator& __alloc)
    {
      std::__uninitialized_fill_a(__result, __mid, __x, __alloc);
      try
 {
   return std::__uninitialized_move_a(__first, __last, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }




  template<typename _InputIterator, typename _ForwardIterator, typename _Tp,
    typename _Allocator>
    inline void
    __uninitialized_move_fill(_InputIterator __first1, _InputIterator __last1,
         _ForwardIterator __first2,
         _ForwardIterator __last2, const _Tp& __x,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid2 = std::__uninitialized_move_a(__first1, __last1,
           __first2,
           __alloc);
      try
 {
   std::__uninitialized_fill_a(__mid2, __last2, __x, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__first2, __mid2, __alloc);
   throw;
 }
    }
# 970 "/usr/include/c++/9/bits/stl_uninitialized.h" 3

}
# 67 "/usr/include/c++/9/deque" 2 3
# 1 "/usr/include/c++/9/bits/stl_deque.h" 1 3
# 69 "/usr/include/c++/9/bits/stl_deque.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


# 92 "/usr/include/c++/9/bits/stl_deque.h" 3
  inline size_t
  __deque_buf_size(size_t __size)
  { return (__size < 512
     ? size_t(512 / __size) : size_t(1)); }
# 109 "/usr/include/c++/9/bits/stl_deque.h" 3
  template<typename _Tp, typename _Ref, typename _Ptr>
    struct _Deque_iterator
    {

      typedef _Deque_iterator<_Tp, _Tp&, _Tp*> iterator;
      typedef _Deque_iterator<_Tp, const _Tp&, const _Tp*> const_iterator;
      typedef _Tp* _Elt_pointer;
      typedef _Tp** _Map_pointer;
# 130 "/usr/include/c++/9/bits/stl_deque.h" 3
      static size_t _S_buffer_size()
      { return __deque_buf_size(sizeof(_Tp)); }

      typedef std::random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef _Ptr pointer;
      typedef _Ref reference;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Deque_iterator _Self;

      _Elt_pointer _M_cur;
      _Elt_pointer _M_first;
      _Elt_pointer _M_last;
      _Map_pointer _M_node;

      _Deque_iterator(_Elt_pointer __x, _Map_pointer __y)
      : _M_cur(__x), _M_first(*__y),
 _M_last(*__y + _S_buffer_size()), _M_node(__y) { }

      _Deque_iterator()
      : _M_cur(), _M_first(), _M_last(), _M_node() { }



      _Deque_iterator(const iterator& __x)
      : _M_cur(__x._M_cur), _M_first(__x._M_first),
 _M_last(__x._M_last), _M_node(__x._M_node) { }
# 174 "/usr/include/c++/9/bits/stl_deque.h" 3
      iterator
      _M_const_cast() const
      { return iterator(_M_cur, _M_node); }

      reference
      operator*() const
      { return *_M_cur; }

      pointer
      operator->() const
      { return _M_cur; }

      _Self&
      operator++()
      {
 ++_M_cur;
 if (_M_cur == _M_last)
   {
     _M_set_node(_M_node + 1);
     _M_cur = _M_first;
   }
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 ++*this;
 return __tmp;
      }

      _Self&
      operator--()
      {
 if (_M_cur == _M_first)
   {
     _M_set_node(_M_node - 1);
     _M_cur = _M_last;
   }
 --_M_cur;
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 --*this;
 return __tmp;
      }

      _Self&
      operator+=(difference_type __n)
      {
 const difference_type __offset = __n + (_M_cur - _M_first);
 if (__offset >= 0 && __offset < difference_type(_S_buffer_size()))
   _M_cur += __n;
 else
   {
     const difference_type __node_offset =
       __offset > 0 ? __offset / difference_type(_S_buffer_size())
      : -difference_type((-__offset - 1)
           / _S_buffer_size()) - 1;
     _M_set_node(_M_node + __node_offset);
     _M_cur = _M_first + (__offset - __node_offset
     * difference_type(_S_buffer_size()));
   }
 return *this;
      }

      _Self
      operator+(difference_type __n) const
      {
 _Self __tmp = *this;
 return __tmp += __n;
      }

      _Self&
      operator-=(difference_type __n)
      { return *this += -__n; }

      _Self
      operator-(difference_type __n) const
      {
 _Self __tmp = *this;
 return __tmp -= __n;
      }

      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }






      void
      _M_set_node(_Map_pointer __new_node)
      {
 _M_node = __new_node;
 _M_first = *__new_node;
 _M_last = _M_first + difference_type(_S_buffer_size());
      }
    };




  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator==(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return __x._M_cur == __y._M_cur; }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator==(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return __x._M_cur == __y._M_cur; }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator!=(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return !(__x == __y); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator!=(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return !(__x == __y); }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator<(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
       const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return (__x._M_node == __y._M_node) ? (__x._M_cur < __y._M_cur)
       : (__x._M_node < __y._M_node); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator<(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
       const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return (__x._M_node == __y._M_node) ? (__x._M_cur < __y._M_cur)
       : (__x._M_node < __y._M_node); }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator>(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
       const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return __y < __x; }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator>(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
       const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return __y < __x; }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator<=(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return !(__y < __x); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator<=(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return !(__y < __x); }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator>=(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return !(__x < __y); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator>=(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return !(__x < __y); }





  template<typename _Tp, typename _Ref, typename _Ptr>
    inline typename _Deque_iterator<_Tp, _Ref, _Ptr>::difference_type
    operator-(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
       const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    {
      return typename _Deque_iterator<_Tp, _Ref, _Ptr>::difference_type
 (_Deque_iterator<_Tp, _Ref, _Ptr>::_S_buffer_size())
 * (__x._M_node - __y._M_node - 1) + (__x._M_cur - __x._M_first)
 + (__y._M_last - __y._M_cur);
    }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline typename _Deque_iterator<_Tp, _RefL, _PtrL>::difference_type
    operator-(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
       const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    {
      return typename _Deque_iterator<_Tp, _RefL, _PtrL>::difference_type
 (_Deque_iterator<_Tp, _RefL, _PtrL>::_S_buffer_size())
 * (__x._M_node - __y._M_node - 1) + (__x._M_cur - __x._M_first)
 + (__y._M_last - __y._M_cur);
    }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline _Deque_iterator<_Tp, _Ref, _Ptr>
    operator+(ptrdiff_t __n, const _Deque_iterator<_Tp, _Ref, _Ptr>& __x)
   
    { return __x + __n; }

  template<typename _Tp>
    void
    fill(const _Deque_iterator<_Tp, _Tp&, _Tp*>&,
  const _Deque_iterator<_Tp, _Tp&, _Tp*>&, const _Tp&);

  template<typename _Tp>
    _Deque_iterator<_Tp, _Tp&, _Tp*>
    copy(_Deque_iterator<_Tp, const _Tp&, const _Tp*>,
  _Deque_iterator<_Tp, const _Tp&, const _Tp*>,
  _Deque_iterator<_Tp, _Tp&, _Tp*>);

  template<typename _Tp>
    inline _Deque_iterator<_Tp, _Tp&, _Tp*>
    copy(_Deque_iterator<_Tp, _Tp&, _Tp*> __first,
  _Deque_iterator<_Tp, _Tp&, _Tp*> __last,
  _Deque_iterator<_Tp, _Tp&, _Tp*> __result)
    { return std::copy(_Deque_iterator<_Tp, const _Tp&, const _Tp*>(__first),
         _Deque_iterator<_Tp, const _Tp&, const _Tp*>(__last),
         __result); }

  template<typename _Tp>
    _Deque_iterator<_Tp, _Tp&, _Tp*>
    copy_backward(_Deque_iterator<_Tp, const _Tp&, const _Tp*>,
    _Deque_iterator<_Tp, const _Tp&, const _Tp*>,
    _Deque_iterator<_Tp, _Tp&, _Tp*>);

  template<typename _Tp>
    inline _Deque_iterator<_Tp, _Tp&, _Tp*>
    copy_backward(_Deque_iterator<_Tp, _Tp&, _Tp*> __first,
    _Deque_iterator<_Tp, _Tp&, _Tp*> __last,
    _Deque_iterator<_Tp, _Tp&, _Tp*> __result)
    { return std::copy_backward(_Deque_iterator<_Tp,
    const _Tp&, const _Tp*>(__first),
    _Deque_iterator<_Tp,
    const _Tp&, const _Tp*>(__last),
    __result); }
# 478 "/usr/include/c++/9/bits/stl_deque.h" 3
  template<typename _Tp, typename _Alloc>
    class _Deque_base
    {
    protected:
      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
 rebind<_Tp>::other _Tp_alloc_type;
      typedef __gnu_cxx::__alloc_traits<_Tp_alloc_type> _Alloc_traits;


      typedef _Tp* _Ptr;
      typedef const _Tp* _Ptr_const;





      typedef typename _Alloc_traits::template rebind<_Ptr>::other
 _Map_alloc_type;
      typedef __gnu_cxx::__alloc_traits<_Map_alloc_type> _Map_alloc_traits;

    public:
      typedef _Alloc allocator_type;

      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Tp_allocator()); }

      typedef _Deque_iterator<_Tp, _Tp&, _Ptr> iterator;
      typedef _Deque_iterator<_Tp, const _Tp&, _Ptr_const> const_iterator;

      _Deque_base()
      : _M_impl()
      { _M_initialize_map(0); }

      _Deque_base(size_t __num_elements)
      : _M_impl()
      { _M_initialize_map(__num_elements); }

      _Deque_base(const allocator_type& __a, size_t __num_elements)
      : _M_impl(__a)
      { _M_initialize_map(__num_elements); }

      _Deque_base(const allocator_type& __a)
      : _M_impl(__a)
      { }
# 559 "/usr/include/c++/9/bits/stl_deque.h" 3
      ~_Deque_base() ;

    protected:
      typedef typename iterator::_Map_pointer _Map_pointer;




      struct _Deque_impl
      : public _Tp_alloc_type
      {
 _Map_pointer _M_map;
 size_t _M_map_size;
 iterator _M_start;
 iterator _M_finish;

 _Deque_impl()
 : _Tp_alloc_type(), _M_map(), _M_map_size(0),
   _M_start(), _M_finish()
 { }

 _Deque_impl(const _Tp_alloc_type& __a)
 : _Tp_alloc_type(__a), _M_map(), _M_map_size(0),
   _M_start(), _M_finish()
 { }
# 594 "/usr/include/c++/9/bits/stl_deque.h" 3
 void _M_swap_data(_Deque_impl& __x)
 {
   using std::swap;
   swap(this->_M_start, __x._M_start);
   swap(this->_M_finish, __x._M_finish);
   swap(this->_M_map, __x._M_map);
   swap(this->_M_map_size, __x._M_map_size);
 }
      };

      _Tp_alloc_type&
      _M_get_Tp_allocator()
      { return *static_cast<_Tp_alloc_type*>(&this->_M_impl); }

      const _Tp_alloc_type&
      _M_get_Tp_allocator() const
      { return *static_cast<const _Tp_alloc_type*>(&this->_M_impl); }

      _Map_alloc_type
      _M_get_map_allocator() const
      { return _Map_alloc_type(_M_get_Tp_allocator()); }

      _Ptr
      _M_allocate_node()
      {
 typedef __gnu_cxx::__alloc_traits<_Tp_alloc_type> _Traits;
 return _Traits::allocate(_M_impl, __deque_buf_size(sizeof(_Tp)));
      }

      void
      _M_deallocate_node(_Ptr __p)
      {
 typedef __gnu_cxx::__alloc_traits<_Tp_alloc_type> _Traits;
 _Traits::deallocate(_M_impl, __p, __deque_buf_size(sizeof(_Tp)));
      }

      _Map_pointer
      _M_allocate_map(size_t __n)
      {
 _Map_alloc_type __map_alloc = _M_get_map_allocator();
 return _Map_alloc_traits::allocate(__map_alloc, __n);
      }

      void
      _M_deallocate_map(_Map_pointer __p, size_t __n)
      {
 _Map_alloc_type __map_alloc = _M_get_map_allocator();
 _Map_alloc_traits::deallocate(__map_alloc, __p, __n);
      }

    protected:
      void _M_initialize_map(size_t);
      void _M_create_nodes(_Map_pointer __nstart, _Map_pointer __nfinish);
      void _M_destroy_nodes(_Map_pointer __nstart,
       _Map_pointer __nfinish) ;
      enum { _S_initial_map_size = 8 };

      _Deque_impl _M_impl;
# 675 "/usr/include/c++/9/bits/stl_deque.h" 3
    };

  template<typename _Tp, typename _Alloc>
    _Deque_base<_Tp, _Alloc>::
    ~_Deque_base()
    {
      if (this->_M_impl._M_map)
 {
   _M_destroy_nodes(this->_M_impl._M_start._M_node,
      this->_M_impl._M_finish._M_node + 1);
   _M_deallocate_map(this->_M_impl._M_map, this->_M_impl._M_map_size);
 }
    }
# 697 "/usr/include/c++/9/bits/stl_deque.h" 3
  template<typename _Tp, typename _Alloc>
    void
    _Deque_base<_Tp, _Alloc>::
    _M_initialize_map(size_t __num_elements)
    {
      const size_t __num_nodes = (__num_elements/ __deque_buf_size(sizeof(_Tp))
      + 1);

      this->_M_impl._M_map_size = std::max((size_t) _S_initial_map_size,
        size_t(__num_nodes + 2));
      this->_M_impl._M_map = _M_allocate_map(this->_M_impl._M_map_size);






      _Map_pointer __nstart = (this->_M_impl._M_map
          + (this->_M_impl._M_map_size - __num_nodes) / 2);
      _Map_pointer __nfinish = __nstart + __num_nodes;

      try
 { _M_create_nodes(__nstart, __nfinish); }
      catch(...)
 {
   _M_deallocate_map(this->_M_impl._M_map, this->_M_impl._M_map_size);
   this->_M_impl._M_map = _Map_pointer();
   this->_M_impl._M_map_size = 0;
   throw;
 }

      this->_M_impl._M_start._M_set_node(__nstart);
      this->_M_impl._M_finish._M_set_node(__nfinish - 1);
      this->_M_impl._M_start._M_cur = _M_impl._M_start._M_first;
      this->_M_impl._M_finish._M_cur = (this->_M_impl._M_finish._M_first
     + __num_elements
     % __deque_buf_size(sizeof(_Tp)));
    }

  template<typename _Tp, typename _Alloc>
    void
    _Deque_base<_Tp, _Alloc>::
    _M_create_nodes(_Map_pointer __nstart, _Map_pointer __nfinish)
    {
      _Map_pointer __cur;
      try
 {
   for (__cur = __nstart; __cur < __nfinish; ++__cur)
     *__cur = this->_M_allocate_node();
 }
      catch(...)
 {
   _M_destroy_nodes(__nstart, __cur);
   throw;
 }
    }

  template<typename _Tp, typename _Alloc>
    void
    _Deque_base<_Tp, _Alloc>::
    _M_destroy_nodes(_Map_pointer __nstart,
       _Map_pointer __nfinish)
    {
      for (_Map_pointer __n = __nstart; __n < __nfinish; ++__n)
 _M_deallocate_node(*__n);
    }
# 848 "/usr/include/c++/9/bits/stl_deque.h" 3
  template<typename _Tp, typename _Alloc = std::allocator<_Tp> >
    class deque : protected _Deque_base<_Tp, _Alloc>
    {
# 869 "/usr/include/c++/9/bits/stl_deque.h" 3
      typedef _Deque_base<_Tp, _Alloc> _Base;
      typedef typename _Base::_Tp_alloc_type _Tp_alloc_type;
      typedef typename _Base::_Alloc_traits _Alloc_traits;
      typedef typename _Base::_Map_pointer _Map_pointer;

    public:
      typedef _Tp value_type;
      typedef typename _Alloc_traits::pointer pointer;
      typedef typename _Alloc_traits::const_pointer const_pointer;
      typedef typename _Alloc_traits::reference reference;
      typedef typename _Alloc_traits::const_reference const_reference;
      typedef typename _Base::iterator iterator;
      typedef typename _Base::const_iterator const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Alloc allocator_type;

    protected:
      static size_t _S_buffer_size()
      { return __deque_buf_size(sizeof(_Tp)); }


      using _Base::_M_initialize_map;
      using _Base::_M_create_nodes;
      using _Base::_M_destroy_nodes;
      using _Base::_M_allocate_node;
      using _Base::_M_deallocate_node;
      using _Base::_M_allocate_map;
      using _Base::_M_deallocate_map;
      using _Base::_M_get_Tp_allocator;





      using _Base::_M_impl;

    public:






      deque() : _Base() { }





      explicit
      deque(const allocator_type& __a)
      : _Base(__a, 0) { }
# 960 "/usr/include/c++/9/bits/stl_deque.h" 3
      explicit
      deque(size_type __n, const value_type& __value = value_type(),
     const allocator_type& __a = allocator_type())
      : _Base(__a, _S_check_init_len(__n, __a))
      { _M_fill_initialize(__value); }
# 974 "/usr/include/c++/9/bits/stl_deque.h" 3
      deque(const deque& __x)
      : _Base(_Alloc_traits::_S_select_on_copy(__x._M_get_Tp_allocator()),
       __x.size())
      { std::__uninitialized_copy_a(__x.begin(), __x.end(),
        this->_M_impl._M_start,
        _M_get_Tp_allocator()); }
# 1055 "/usr/include/c++/9/bits/stl_deque.h" 3
      template<typename _InputIterator>
 deque(_InputIterator __first, _InputIterator __last,
       const allocator_type& __a = allocator_type())
 : _Base(__a)
 {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_initialize_dispatch(__first, __last, _Integral());
 }







      ~deque()
      { _M_destroy_data(begin(), end(), _M_get_Tp_allocator()); }
# 1083 "/usr/include/c++/9/bits/stl_deque.h" 3
      deque&
      operator=(const deque& __x);
# 1133 "/usr/include/c++/9/bits/stl_deque.h" 3
      void
      assign(size_type __n, const value_type& __val)
      { _M_fill_assign(__n, __val); }
# 1156 "/usr/include/c++/9/bits/stl_deque.h" 3
      template<typename _InputIterator>
 void
 assign(_InputIterator __first, _InputIterator __last)
 {
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_assign_dispatch(__first, __last, _Integral());
 }
# 1183 "/usr/include/c++/9/bits/stl_deque.h" 3
      allocator_type
      get_allocator() const
      { return _Base::get_allocator(); }






      iterator
      begin()
      { return this->_M_impl._M_start; }





      const_iterator
      begin() const
      { return this->_M_impl._M_start; }






      iterator
      end()
      { return this->_M_impl._M_finish; }






      const_iterator
      end() const
      { return this->_M_impl._M_finish; }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->_M_impl._M_finish); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->_M_impl._M_finish); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->_M_impl._M_start); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->_M_impl._M_start); }
# 1297 "/usr/include/c++/9/bits/stl_deque.h" 3
      size_type
      size() const
      { return this->_M_impl._M_finish - this->_M_impl._M_start; }


      size_type
      max_size() const
      { return _S_max_size(_M_get_Tp_allocator()); }
# 1360 "/usr/include/c++/9/bits/stl_deque.h" 3
      void
      resize(size_type __new_size, value_type __x = value_type())
      {
 const size_type __len = size();
 if (__new_size > __len)
   _M_fill_insert(this->_M_impl._M_finish, __new_size - __len, __x);
 else if (__new_size < __len)
   _M_erase_at_end(this->_M_impl._M_start
     + difference_type(__new_size));
      }
# 1383 "/usr/include/c++/9/bits/stl_deque.h" 3
      bool
      empty() const
      { return this->_M_impl._M_finish == this->_M_impl._M_start; }
# 1399 "/usr/include/c++/9/bits/stl_deque.h" 3
      reference
      operator[](size_type __n)
      {
 ;
 return this->_M_impl._M_start[difference_type(__n)];
      }
# 1417 "/usr/include/c++/9/bits/stl_deque.h" 3
      const_reference
      operator[](size_type __n) const
      {
 ;
 return this->_M_impl._M_start[difference_type(__n)];
      }

    protected:

      void
      _M_range_check(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range_fmt(("deque::_M_range_check: __n " "(which is %zu)>= this->size() " "(which is %zu)")

                            ,
       __n, this->size());
      }

    public:
# 1448 "/usr/include/c++/9/bits/stl_deque.h" 3
      reference
      at(size_type __n)
      {
 _M_range_check(__n);
 return (*this)[__n];
      }
# 1466 "/usr/include/c++/9/bits/stl_deque.h" 3
      const_reference
      at(size_type __n) const
      {
 _M_range_check(__n);
 return (*this)[__n];
      }





      reference
      front()
      {
 ;
 return *begin();
      }





      const_reference
      front() const
      {
 ;
 return *begin();
      }





      reference
      back()
      {
 ;
 iterator __tmp = end();
 --__tmp;
 return *__tmp;
      }





      const_reference
      back() const
      {
 ;
 const_iterator __tmp = end();
 --__tmp;
 return *__tmp;
      }
# 1531 "/usr/include/c++/9/bits/stl_deque.h" 3
      void
      push_front(const value_type& __x)
      {
 if (this->_M_impl._M_start._M_cur != this->_M_impl._M_start._M_first)
   {
     _Alloc_traits::construct(this->_M_impl,
         this->_M_impl._M_start._M_cur - 1,
         __x);
     --this->_M_impl._M_start._M_cur;
   }
 else
   _M_push_front_aux(__x);
      }
# 1568 "/usr/include/c++/9/bits/stl_deque.h" 3
      void
      push_back(const value_type& __x)
      {
 if (this->_M_impl._M_finish._M_cur
     != this->_M_impl._M_finish._M_last - 1)
   {
     _Alloc_traits::construct(this->_M_impl,
         this->_M_impl._M_finish._M_cur, __x);
     ++this->_M_impl._M_finish._M_cur;
   }
 else
   _M_push_back_aux(__x);
      }
# 1604 "/usr/include/c++/9/bits/stl_deque.h" 3
      void
      pop_front()
      {
 ;
 if (this->_M_impl._M_start._M_cur
     != this->_M_impl._M_start._M_last - 1)
   {
     _Alloc_traits::destroy(this->_M_impl,
       this->_M_impl._M_start._M_cur);
     ++this->_M_impl._M_start._M_cur;
   }
 else
   _M_pop_front_aux();
      }
# 1627 "/usr/include/c++/9/bits/stl_deque.h" 3
      void
      pop_back()
      {
 ;
 if (this->_M_impl._M_finish._M_cur
     != this->_M_impl._M_finish._M_first)
   {
     --this->_M_impl._M_finish._M_cur;
     _Alloc_traits::destroy(this->_M_impl,
       this->_M_impl._M_finish._M_cur);
   }
 else
   _M_pop_back_aux();
      }
# 1677 "/usr/include/c++/9/bits/stl_deque.h" 3
      iterator
      insert(iterator __position, const value_type& __x);
# 1742 "/usr/include/c++/9/bits/stl_deque.h" 3
      void
      insert(iterator __position, size_type __n, const value_type& __x)
      { _M_fill_insert(__position, __n, __x); }
# 1781 "/usr/include/c++/9/bits/stl_deque.h" 3
      template<typename _InputIterator>
 void
 insert(iterator __position, _InputIterator __first,
        _InputIterator __last)
 {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_insert_dispatch(__position, __first, __last, _Integral());
 }
# 1805 "/usr/include/c++/9/bits/stl_deque.h" 3
      iterator



      erase(iterator __position)

      { return _M_erase(__position._M_const_cast()); }
# 1829 "/usr/include/c++/9/bits/stl_deque.h" 3
      iterator



      erase(iterator __first, iterator __last)

      { return _M_erase(__first._M_const_cast(), __last._M_const_cast()); }
# 1848 "/usr/include/c++/9/bits/stl_deque.h" 3
      void
      swap(deque& __x)
      {




 _M_impl._M_swap_data(__x._M_impl);
 _Alloc_traits::_S_on_swap(_M_get_Tp_allocator(),
      __x._M_get_Tp_allocator());
      }







      void
      clear()
      { _M_erase_at_end(begin()); }

    protected:






      template<typename _Integer>
 void
 _M_initialize_dispatch(_Integer __n, _Integer __x, __true_type)
 {
   _M_initialize_map(_S_check_init_len(static_cast<size_type>(__n),
           _M_get_Tp_allocator()));
   _M_fill_initialize(__x);
 }

      static size_t
      _S_check_init_len(size_t __n, const allocator_type& __a)
      {
 if (__n > _S_max_size(__a))
   __throw_length_error(
       ("cannot create std::deque larger than max_size()"));
 return __n;
      }

      static size_type
      _S_max_size(const _Tp_alloc_type& __a)
      {
 const size_t __diffmax = __gnu_cxx::__numeric_traits<ptrdiff_t>::__max;
 const size_t __allocmax = _Alloc_traits::max_size(__a);
 return (std::min)(__diffmax, __allocmax);
      }


      template<typename _InputIterator>
 void
 _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
          __false_type)
 {
   _M_range_initialize(__first, __last,
         std::__iterator_category(__first));
 }
# 1925 "/usr/include/c++/9/bits/stl_deque.h" 3
      template<typename _InputIterator>
 void
 _M_range_initialize(_InputIterator __first, _InputIterator __last,
       std::input_iterator_tag);


      template<typename _ForwardIterator>
 void
 _M_range_initialize(_ForwardIterator __first, _ForwardIterator __last,
       std::forward_iterator_tag);
# 1947 "/usr/include/c++/9/bits/stl_deque.h" 3
      void
      _M_fill_initialize(const value_type& __value);
# 1963 "/usr/include/c++/9/bits/stl_deque.h" 3
      template<typename _Integer>
 void
 _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
 { _M_fill_assign(__n, __val); }


      template<typename _InputIterator>
 void
 _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
      __false_type)
 { _M_assign_aux(__first, __last, std::__iterator_category(__first)); }


      template<typename _InputIterator>
 void
 _M_assign_aux(_InputIterator __first, _InputIterator __last,
        std::input_iterator_tag);


      template<typename _ForwardIterator>
 void
 _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
        std::forward_iterator_tag)
 {
   const size_type __len = std::distance(__first, __last);
   if (__len > size())
     {
       _ForwardIterator __mid = __first;
       std::advance(__mid, size());
       std::copy(__first, __mid, begin());
       _M_range_insert_aux(end(), __mid, __last,
      std::__iterator_category(__first));
     }
   else
     _M_erase_at_end(std::copy(__first, __last, begin()));
 }



      void
      _M_fill_assign(size_type __n, const value_type& __val)
      {
 if (__n > size())
   {
     std::fill(begin(), end(), __val);
     _M_fill_insert(end(), __n - size(), __val);
   }
 else
   {
     _M_erase_at_end(begin() + difference_type(__n));
     std::fill(begin(), end(), __val);
   }
      }




      void _M_push_back_aux(const value_type&);

      void _M_push_front_aux(const value_type&);
# 2031 "/usr/include/c++/9/bits/stl_deque.h" 3
      void _M_pop_back_aux();

      void _M_pop_front_aux();
# 2043 "/usr/include/c++/9/bits/stl_deque.h" 3
      template<typename _Integer>
 void
 _M_insert_dispatch(iterator __pos,
      _Integer __n, _Integer __x, __true_type)
 { _M_fill_insert(__pos, __n, __x); }


      template<typename _InputIterator>
 void
 _M_insert_dispatch(iterator __pos,
      _InputIterator __first, _InputIterator __last,
      __false_type)
 {
   _M_range_insert_aux(__pos, __first, __last,
         std::__iterator_category(__first));
 }


      template<typename _InputIterator>
 void
 _M_range_insert_aux(iterator __pos, _InputIterator __first,
       _InputIterator __last, std::input_iterator_tag);


      template<typename _ForwardIterator>
 void
 _M_range_insert_aux(iterator __pos, _ForwardIterator __first,
       _ForwardIterator __last, std::forward_iterator_tag);




      void
      _M_fill_insert(iterator __pos, size_type __n, const value_type& __x);



      iterator
      _M_insert_aux(iterator __pos, const value_type& __x);







      void
      _M_insert_aux(iterator __pos, size_type __n, const value_type& __x);


      template<typename _ForwardIterator>
 void
 _M_insert_aux(iterator __pos,
        _ForwardIterator __first, _ForwardIterator __last,
        size_type __n);




      void
      _M_destroy_data_aux(iterator __first, iterator __last);



      template<typename _Alloc1>
 void
 _M_destroy_data(iterator __first, iterator __last, const _Alloc1&)
 { _M_destroy_data_aux(__first, __last); }

      void
      _M_destroy_data(iterator __first, iterator __last,
        const std::allocator<_Tp>&)
      {
 if (!__has_trivial_destructor(value_type))
   _M_destroy_data_aux(__first, __last);
      }


      void
      _M_erase_at_begin(iterator __pos)
      {
 _M_destroy_data(begin(), __pos, _M_get_Tp_allocator());
 _M_destroy_nodes(this->_M_impl._M_start._M_node, __pos._M_node);
 this->_M_impl._M_start = __pos;
      }



      void
      _M_erase_at_end(iterator __pos)
      {
 _M_destroy_data(__pos, end(), _M_get_Tp_allocator());
 _M_destroy_nodes(__pos._M_node + 1,
    this->_M_impl._M_finish._M_node + 1);
 this->_M_impl._M_finish = __pos;
      }

      iterator
      _M_erase(iterator __pos);

      iterator
      _M_erase(iterator __first, iterator __last);
# 2157 "/usr/include/c++/9/bits/stl_deque.h" 3
      iterator
      _M_reserve_elements_at_front(size_type __n)
      {
 const size_type __vacancies = this->_M_impl._M_start._M_cur
          - this->_M_impl._M_start._M_first;
 if (__n > __vacancies)
   _M_new_elements_at_front(__n - __vacancies);
 return this->_M_impl._M_start - difference_type(__n);
      }

      iterator
      _M_reserve_elements_at_back(size_type __n)
      {
 const size_type __vacancies = (this->_M_impl._M_finish._M_last
           - this->_M_impl._M_finish._M_cur) - 1;
 if (__n > __vacancies)
   _M_new_elements_at_back(__n - __vacancies);
 return this->_M_impl._M_finish + difference_type(__n);
      }

      void
      _M_new_elements_at_front(size_type __new_elements);

      void
      _M_new_elements_at_back(size_type __new_elements);
# 2193 "/usr/include/c++/9/bits/stl_deque.h" 3
      void
      _M_reserve_map_at_back(size_type __nodes_to_add = 1)
      {
 if (__nodes_to_add + 1 > this->_M_impl._M_map_size
     - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map))
   _M_reallocate_map(__nodes_to_add, false);
      }

      void
      _M_reserve_map_at_front(size_type __nodes_to_add = 1)
      {
 if (__nodes_to_add > size_type(this->_M_impl._M_start._M_node
           - this->_M_impl._M_map))
   _M_reallocate_map(__nodes_to_add, true);
      }

      void
      _M_reallocate_map(size_type __nodes_to_add, bool __add_at_front);
# 2288 "/usr/include/c++/9/bits/stl_deque.h" 3
    };
# 2310 "/usr/include/c++/9/bits/stl_deque.h" 3
  template<typename _Tp, typename _Alloc>
    inline bool
    operator==(const deque<_Tp, _Alloc>& __x,
                         const deque<_Tp, _Alloc>& __y)
    { return __x.size() == __y.size()
      && std::equal(__x.begin(), __x.end(), __y.begin()); }
# 2328 "/usr/include/c++/9/bits/stl_deque.h" 3
  template<typename _Tp, typename _Alloc>
    inline bool
    operator<(const deque<_Tp, _Alloc>& __x,
       const deque<_Tp, _Alloc>& __y)
    { return std::lexicographical_compare(__x.begin(), __x.end(),
       __y.begin(), __y.end()); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator!=(const deque<_Tp, _Alloc>& __x,
        const deque<_Tp, _Alloc>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>(const deque<_Tp, _Alloc>& __x,
       const deque<_Tp, _Alloc>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator<=(const deque<_Tp, _Alloc>& __x,
        const deque<_Tp, _Alloc>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>=(const deque<_Tp, _Alloc>& __x,
        const deque<_Tp, _Alloc>& __y)
    { return !(__x < __y); }


  template<typename _Tp, typename _Alloc>
    inline void
    swap(deque<_Tp,_Alloc>& __x, deque<_Tp,_Alloc>& __y)
   
    { __x.swap(__y); }




# 2382 "/usr/include/c++/9/bits/stl_deque.h" 3

}
# 68 "/usr/include/c++/9/deque" 2 3
# 1 "/usr/include/c++/9/bits/range_access.h" 1 3
# 33 "/usr/include/c++/9/bits/range_access.h" 3
       
# 34 "/usr/include/c++/9/bits/range_access.h" 3
# 69 "/usr/include/c++/9/deque" 2 3
# 1 "/usr/include/c++/9/bits/deque.tcc" 1 3
# 59 "/usr/include/c++/9/bits/deque.tcc" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


# 91 "/usr/include/c++/9/bits/deque.tcc" 3
  template <typename _Tp, typename _Alloc>
    deque<_Tp, _Alloc>&
    deque<_Tp, _Alloc>::
    operator=(const deque& __x)
    {
      if (&__x != this)
 {
# 115 "/usr/include/c++/9/bits/deque.tcc" 3
   const size_type __len = size();
   if (__len >= __x.size())
     _M_erase_at_end(std::copy(__x.begin(), __x.end(),
          this->_M_impl._M_start));
   else
     {
       const_iterator __mid = __x.begin() + difference_type(__len);
       std::copy(__x.begin(), __mid, this->_M_impl._M_start);
       _M_range_insert_aux(this->_M_impl._M_finish, __mid, __x.end(),
      std::random_access_iterator_tag());
     }
 }
      return *this;
    }
# 206 "/usr/include/c++/9/bits/deque.tcc" 3
  template <typename _Tp, typename _Alloc>
    typename deque<_Tp, _Alloc>::iterator
    deque<_Tp, _Alloc>::



    insert(iterator __position, const value_type& __x)

    {
      if (__position._M_cur == this->_M_impl._M_start._M_cur)
 {
   push_front(__x);
   return this->_M_impl._M_start;
 }
      else if (__position._M_cur == this->_M_impl._M_finish._M_cur)
 {
   push_back(__x);
   iterator __tmp = this->_M_impl._M_finish;
   --__tmp;
   return __tmp;
 }
      else
 return _M_insert_aux(__position._M_const_cast(), __x);
   }

  template <typename _Tp, typename _Alloc>
    typename deque<_Tp, _Alloc>::iterator
    deque<_Tp, _Alloc>::
    _M_erase(iterator __position)
    {
      iterator __next = __position;
      ++__next;
      const difference_type __index = __position - begin();
      if (static_cast<size_type>(__index) < (size() >> 1))
 {
   if (__position != begin())
     std::copy_backward(begin(), __position, __next);
   pop_front();
 }
      else
 {
   if (__next != end())
     std::copy(__next, end(), __position);
   pop_back();
 }
      return begin() + __index;
    }

  template <typename _Tp, typename _Alloc>
    typename deque<_Tp, _Alloc>::iterator
    deque<_Tp, _Alloc>::
    _M_erase(iterator __first, iterator __last)
    {
      if (__first == __last)
 return __first;
      else if (__first == begin() && __last == end())
 {
   clear();
   return end();
 }
      else
 {
   const difference_type __n = __last - __first;
   const difference_type __elems_before = __first - begin();
   if (static_cast<size_type>(__elems_before) <= (size() - __n) / 2)
     {
       if (__first != begin())
  std::copy_backward(begin(), __first, __last);
       _M_erase_at_begin(begin() + __n);
     }
   else
     {
       if (__last != end())
  std::copy(__last, end(), __first);
       _M_erase_at_end(end() - __n);
     }
   return begin() + __elems_before;
 }
    }

  template <typename _Tp, class _Alloc>
    template <typename _InputIterator>
      void
      deque<_Tp, _Alloc>::
      _M_assign_aux(_InputIterator __first, _InputIterator __last,
      std::input_iterator_tag)
      {
        iterator __cur = begin();
        for (; __first != __last && __cur != end(); ++__cur, (void)++__first)
          *__cur = *__first;
        if (__first == __last)
          _M_erase_at_end(__cur);
        else
          _M_range_insert_aux(end(), __first, __last,
         std::__iterator_category(__first));
      }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_fill_insert(iterator __pos, size_type __n, const value_type& __x)
    {
      if (__pos._M_cur == this->_M_impl._M_start._M_cur)
 {
   iterator __new_start = _M_reserve_elements_at_front(__n);
   try
     {
       std::__uninitialized_fill_a(__new_start, this->_M_impl._M_start,
       __x, _M_get_Tp_allocator());
       this->_M_impl._M_start = __new_start;
     }
   catch(...)
     {
       _M_destroy_nodes(__new_start._M_node,
          this->_M_impl._M_start._M_node);
       throw;
     }
 }
      else if (__pos._M_cur == this->_M_impl._M_finish._M_cur)
 {
   iterator __new_finish = _M_reserve_elements_at_back(__n);
   try
     {
       std::__uninitialized_fill_a(this->_M_impl._M_finish,
       __new_finish, __x,
       _M_get_Tp_allocator());
       this->_M_impl._M_finish = __new_finish;
     }
   catch(...)
     {
       _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
          __new_finish._M_node + 1);
       throw;
     }
 }
      else
        _M_insert_aux(__pos, __n, __x);
    }
# 389 "/usr/include/c++/9/bits/deque.tcc" 3
  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_fill_initialize(const value_type& __value)
    {
      _Map_pointer __cur;
      try
        {
          for (__cur = this->_M_impl._M_start._M_node;
        __cur < this->_M_impl._M_finish._M_node;
        ++__cur)
            std::__uninitialized_fill_a(*__cur, *__cur + _S_buffer_size(),
     __value, _M_get_Tp_allocator());
          std::__uninitialized_fill_a(this->_M_impl._M_finish._M_first,
          this->_M_impl._M_finish._M_cur,
          __value, _M_get_Tp_allocator());
        }
      catch(...)
        {
          std::_Destroy(this->_M_impl._M_start, iterator(*__cur, __cur),
   _M_get_Tp_allocator());
          throw;
        }
    }

  template <typename _Tp, typename _Alloc>
    template <typename _InputIterator>
      void
      deque<_Tp, _Alloc>::
      _M_range_initialize(_InputIterator __first, _InputIterator __last,
                          std::input_iterator_tag)
      {
        this->_M_initialize_map(0);
        try
          {
            for (; __first != __last; ++__first)



              push_back(*__first);

          }
        catch(...)
          {
            clear();
            throw;
          }
      }

  template <typename _Tp, typename _Alloc>
    template <typename _ForwardIterator>
      void
      deque<_Tp, _Alloc>::
      _M_range_initialize(_ForwardIterator __first, _ForwardIterator __last,
                          std::forward_iterator_tag)
      {
        const size_type __n = std::distance(__first, __last);
        this->_M_initialize_map(_S_check_init_len(__n, _M_get_Tp_allocator()));

        _Map_pointer __cur_node;
        try
          {
            for (__cur_node = this->_M_impl._M_start._M_node;
                 __cur_node < this->_M_impl._M_finish._M_node;
                 ++__cur_node)
       {
  _ForwardIterator __mid = __first;
  std::advance(__mid, _S_buffer_size());
  std::__uninitialized_copy_a(__first, __mid, *__cur_node,
         _M_get_Tp_allocator());
  __first = __mid;
       }
            std::__uninitialized_copy_a(__first, __last,
     this->_M_impl._M_finish._M_first,
     _M_get_Tp_allocator());
          }
        catch(...)
          {
            std::_Destroy(this->_M_impl._M_start,
     iterator(*__cur_node, __cur_node),
     _M_get_Tp_allocator());
            throw;
          }
      }


  template<typename _Tp, typename _Alloc>






      void
      deque<_Tp, _Alloc>::
      _M_push_back_aux(const value_type& __t)

      {
 if (size() == max_size())
   __throw_length_error(
       ("cannot create std::deque larger than max_size()"));

 _M_reserve_map_at_back();
 *(this->_M_impl._M_finish._M_node + 1) = this->_M_allocate_node();
 try
   {





     this->_M_impl.construct(this->_M_impl._M_finish._M_cur, __t);

     this->_M_impl._M_finish._M_set_node(this->_M_impl._M_finish._M_node
      + 1);
     this->_M_impl._M_finish._M_cur = this->_M_impl._M_finish._M_first;
   }
 catch(...)
   {
     _M_deallocate_node(*(this->_M_impl._M_finish._M_node + 1));
     throw;
   }
      }


  template<typename _Tp, typename _Alloc>






      void
      deque<_Tp, _Alloc>::
      _M_push_front_aux(const value_type& __t)

      {
 if (size() == max_size())
   __throw_length_error(
       ("cannot create std::deque larger than max_size()"));

 _M_reserve_map_at_front();
 *(this->_M_impl._M_start._M_node - 1) = this->_M_allocate_node();
 try
   {
     this->_M_impl._M_start._M_set_node(this->_M_impl._M_start._M_node
            - 1);
     this->_M_impl._M_start._M_cur = this->_M_impl._M_start._M_last - 1;





     this->_M_impl.construct(this->_M_impl._M_start._M_cur, __t);

   }
 catch(...)
   {
     ++this->_M_impl._M_start;
     _M_deallocate_node(*(this->_M_impl._M_start._M_node - 1));
     throw;
   }
      }


  template <typename _Tp, typename _Alloc>
    void deque<_Tp, _Alloc>::
    _M_pop_back_aux()
    {
      _M_deallocate_node(this->_M_impl._M_finish._M_first);
      this->_M_impl._M_finish._M_set_node(this->_M_impl._M_finish._M_node - 1);
      this->_M_impl._M_finish._M_cur = this->_M_impl._M_finish._M_last - 1;
      _Alloc_traits::destroy(_M_get_Tp_allocator(),
        this->_M_impl._M_finish._M_cur);
    }






  template <typename _Tp, typename _Alloc>
    void deque<_Tp, _Alloc>::
    _M_pop_front_aux()
    {
      _Alloc_traits::destroy(_M_get_Tp_allocator(),
        this->_M_impl._M_start._M_cur);
      _M_deallocate_node(this->_M_impl._M_start._M_first);
      this->_M_impl._M_start._M_set_node(this->_M_impl._M_start._M_node + 1);
      this->_M_impl._M_start._M_cur = this->_M_impl._M_start._M_first;
    }

  template <typename _Tp, typename _Alloc>
    template <typename _InputIterator>
      void
      deque<_Tp, _Alloc>::
      _M_range_insert_aux(iterator __pos,
                          _InputIterator __first, _InputIterator __last,
                          std::input_iterator_tag)
      { std::copy(__first, __last, std::inserter(*this, __pos)); }

  template <typename _Tp, typename _Alloc>
    template <typename _ForwardIterator>
      void
      deque<_Tp, _Alloc>::
      _M_range_insert_aux(iterator __pos,
                          _ForwardIterator __first, _ForwardIterator __last,
                          std::forward_iterator_tag)
      {
        const size_type __n = std::distance(__first, __last);
        if (__pos._M_cur == this->_M_impl._M_start._M_cur)
   {
     iterator __new_start = _M_reserve_elements_at_front(__n);
     try
       {
  std::__uninitialized_copy_a(__first, __last, __new_start,
         _M_get_Tp_allocator());
  this->_M_impl._M_start = __new_start;
       }
     catch(...)
       {
  _M_destroy_nodes(__new_start._M_node,
     this->_M_impl._M_start._M_node);
  throw;
       }
   }
        else if (__pos._M_cur == this->_M_impl._M_finish._M_cur)
   {
     iterator __new_finish = _M_reserve_elements_at_back(__n);
     try
       {
  std::__uninitialized_copy_a(__first, __last,
         this->_M_impl._M_finish,
         _M_get_Tp_allocator());
  this->_M_impl._M_finish = __new_finish;
       }
     catch(...)
       {
  _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
     __new_finish._M_node + 1);
  throw;
       }
   }
        else
          _M_insert_aux(__pos, __first, __last, __n);
      }

  template<typename _Tp, typename _Alloc>
# 645 "/usr/include/c++/9/bits/deque.tcc" 3
    typename deque<_Tp, _Alloc>::iterator
      deque<_Tp, _Alloc>::
      _M_insert_aux(iterator __pos, const value_type& __x)
      {
 value_type __x_copy = __x;

 difference_type __index = __pos - this->_M_impl._M_start;
 if (static_cast<size_type>(__index) < size() / 2)
   {
     push_front((front()));
     iterator __front1 = this->_M_impl._M_start;
     ++__front1;
     iterator __front2 = __front1;
     ++__front2;
     __pos = this->_M_impl._M_start + __index;
     iterator __pos1 = __pos;
     ++__pos1;
     std::copy(__front2, __pos1, __front1);
   }
 else
   {
     push_back((back()));
     iterator __back1 = this->_M_impl._M_finish;
     --__back1;
     iterator __back2 = __back1;
     --__back2;
     __pos = this->_M_impl._M_start + __index;
     std::copy_backward(__pos, __back2, __back1);
   }
 *__pos = (__x_copy);
 return __pos;
      }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_insert_aux(iterator __pos, size_type __n, const value_type& __x)
    {
      const difference_type __elems_before = __pos - this->_M_impl._M_start;
      const size_type __length = this->size();
      value_type __x_copy = __x;
      if (__elems_before < difference_type(__length / 2))
 {
   iterator __new_start = _M_reserve_elements_at_front(__n);
   iterator __old_start = this->_M_impl._M_start;
   __pos = this->_M_impl._M_start + __elems_before;
   try
     {
       if (__elems_before >= difference_type(__n))
  {
    iterator __start_n = (this->_M_impl._M_start
     + difference_type(__n));
    std::__uninitialized_move_a(this->_M_impl._M_start,
           __start_n, __new_start,
           _M_get_Tp_allocator());
    this->_M_impl._M_start = __new_start;
    std::copy(__start_n, __pos, __old_start);
    std::fill(__pos - difference_type(__n), __pos, __x_copy);
  }
       else
  {
    std::__uninitialized_move_fill(this->_M_impl._M_start,
       __pos, __new_start,
       this->_M_impl._M_start,
       __x_copy,
       _M_get_Tp_allocator());
    this->_M_impl._M_start = __new_start;
    std::fill(__old_start, __pos, __x_copy);
  }
     }
   catch(...)
     {
       _M_destroy_nodes(__new_start._M_node,
          this->_M_impl._M_start._M_node);
       throw;
     }
 }
      else
 {
   iterator __new_finish = _M_reserve_elements_at_back(__n);
   iterator __old_finish = this->_M_impl._M_finish;
   const difference_type __elems_after =
     difference_type(__length) - __elems_before;
   __pos = this->_M_impl._M_finish - __elems_after;
   try
     {
       if (__elems_after > difference_type(__n))
  {
    iterator __finish_n = (this->_M_impl._M_finish
      - difference_type(__n));
    std::__uninitialized_move_a(__finish_n,
           this->_M_impl._M_finish,
           this->_M_impl._M_finish,
           _M_get_Tp_allocator());
    this->_M_impl._M_finish = __new_finish;
    std::copy_backward(__pos, __finish_n, __old_finish);
    std::fill(__pos, __pos + difference_type(__n), __x_copy);
  }
       else
  {
    std::__uninitialized_fill_move(this->_M_impl._M_finish,
       __pos + difference_type(__n),
       __x_copy, __pos,
       this->_M_impl._M_finish,
       _M_get_Tp_allocator());
    this->_M_impl._M_finish = __new_finish;
    std::fill(__pos, __old_finish, __x_copy);
  }
     }
   catch(...)
     {
       _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
          __new_finish._M_node + 1);
       throw;
     }
 }
    }

  template <typename _Tp, typename _Alloc>
    template <typename _ForwardIterator>
      void
      deque<_Tp, _Alloc>::
      _M_insert_aux(iterator __pos,
                    _ForwardIterator __first, _ForwardIterator __last,
                    size_type __n)
      {
        const difference_type __elemsbefore = __pos - this->_M_impl._M_start;
        const size_type __length = size();
        if (static_cast<size_type>(__elemsbefore) < __length / 2)
   {
     iterator __new_start = _M_reserve_elements_at_front(__n);
     iterator __old_start = this->_M_impl._M_start;
     __pos = this->_M_impl._M_start + __elemsbefore;
     try
       {
  if (__elemsbefore >= difference_type(__n))
    {
      iterator __start_n = (this->_M_impl._M_start
       + difference_type(__n));
      std::__uninitialized_move_a(this->_M_impl._M_start,
      __start_n, __new_start,
      _M_get_Tp_allocator());
      this->_M_impl._M_start = __new_start;
      std::copy(__start_n, __pos, __old_start);
      std::copy(__first, __last, __pos - difference_type(__n));
    }
  else
    {
      _ForwardIterator __mid = __first;
      std::advance(__mid, difference_type(__n) - __elemsbefore);
      std::__uninitialized_move_copy(this->_M_impl._M_start,
         __pos, __first, __mid,
         __new_start,
         _M_get_Tp_allocator());
      this->_M_impl._M_start = __new_start;
      std::copy(__mid, __last, __old_start);
    }
       }
     catch(...)
       {
  _M_destroy_nodes(__new_start._M_node,
     this->_M_impl._M_start._M_node);
  throw;
       }
   }
        else
        {
          iterator __new_finish = _M_reserve_elements_at_back(__n);
          iterator __old_finish = this->_M_impl._M_finish;
          const difference_type __elemsafter =
            difference_type(__length) - __elemsbefore;
          __pos = this->_M_impl._M_finish - __elemsafter;
          try
            {
              if (__elemsafter > difference_type(__n))
  {
    iterator __finish_n = (this->_M_impl._M_finish
      - difference_type(__n));
    std::__uninitialized_move_a(__finish_n,
           this->_M_impl._M_finish,
           this->_M_impl._M_finish,
           _M_get_Tp_allocator());
    this->_M_impl._M_finish = __new_finish;
    std::copy_backward(__pos, __finish_n, __old_finish);
    std::copy(__first, __last, __pos);
  }
              else
  {
    _ForwardIterator __mid = __first;
    std::advance(__mid, __elemsafter);
    std::__uninitialized_copy_move(__mid, __last, __pos,
       this->_M_impl._M_finish,
       this->_M_impl._M_finish,
       _M_get_Tp_allocator());
    this->_M_impl._M_finish = __new_finish;
    std::copy(__first, __mid, __pos);
  }
            }
          catch(...)
            {
              _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
          __new_finish._M_node + 1);
              throw;
            }
        }
      }

   template<typename _Tp, typename _Alloc>
     void
     deque<_Tp, _Alloc>::
     _M_destroy_data_aux(iterator __first, iterator __last)
     {
       for (_Map_pointer __node = __first._M_node + 1;
     __node < __last._M_node; ++__node)
  std::_Destroy(*__node, *__node + _S_buffer_size(),
         _M_get_Tp_allocator());

       if (__first._M_node != __last._M_node)
  {
    std::_Destroy(__first._M_cur, __first._M_last,
    _M_get_Tp_allocator());
    std::_Destroy(__last._M_first, __last._M_cur,
    _M_get_Tp_allocator());
  }
       else
  std::_Destroy(__first._M_cur, __last._M_cur,
         _M_get_Tp_allocator());
     }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_new_elements_at_front(size_type __new_elems)
    {
      if (this->max_size() - this->size() < __new_elems)
 __throw_length_error(("deque::_M_new_elements_at_front"));

      const size_type __new_nodes = ((__new_elems + _S_buffer_size() - 1)
         / _S_buffer_size());
      _M_reserve_map_at_front(__new_nodes);
      size_type __i;
      try
        {
          for (__i = 1; __i <= __new_nodes; ++__i)
            *(this->_M_impl._M_start._M_node - __i) = this->_M_allocate_node();
        }
      catch(...)
        {
          for (size_type __j = 1; __j < __i; ++__j)
            _M_deallocate_node(*(this->_M_impl._M_start._M_node - __j));
          throw;
        }
    }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_new_elements_at_back(size_type __new_elems)
    {
      if (this->max_size() - this->size() < __new_elems)
 __throw_length_error(("deque::_M_new_elements_at_back"));

      const size_type __new_nodes = ((__new_elems + _S_buffer_size() - 1)
         / _S_buffer_size());
      _M_reserve_map_at_back(__new_nodes);
      size_type __i;
      try
        {
          for (__i = 1; __i <= __new_nodes; ++__i)
            *(this->_M_impl._M_finish._M_node + __i) = this->_M_allocate_node();
        }
      catch(...)
        {
          for (size_type __j = 1; __j < __i; ++__j)
            _M_deallocate_node(*(this->_M_impl._M_finish._M_node + __j));
          throw;
        }
    }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_reallocate_map(size_type __nodes_to_add, bool __add_at_front)
    {
      const size_type __old_num_nodes
 = this->_M_impl._M_finish._M_node - this->_M_impl._M_start._M_node + 1;
      const size_type __new_num_nodes = __old_num_nodes + __nodes_to_add;

      _Map_pointer __new_nstart;
      if (this->_M_impl._M_map_size > 2 * __new_num_nodes)
 {
   __new_nstart = this->_M_impl._M_map + (this->_M_impl._M_map_size
      - __new_num_nodes) / 2
                  + (__add_at_front ? __nodes_to_add : 0);
   if (__new_nstart < this->_M_impl._M_start._M_node)
     std::copy(this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
   else
     std::copy_backward(this->_M_impl._M_start._M_node,
          this->_M_impl._M_finish._M_node + 1,
          __new_nstart + __old_num_nodes);
 }
      else
 {
   size_type __new_map_size = this->_M_impl._M_map_size
                              + std::max(this->_M_impl._M_map_size,
      __nodes_to_add) + 2;

   _Map_pointer __new_map = this->_M_allocate_map(__new_map_size);
   __new_nstart = __new_map + (__new_map_size - __new_num_nodes) / 2
                  + (__add_at_front ? __nodes_to_add : 0);
   std::copy(this->_M_impl._M_start._M_node,
      this->_M_impl._M_finish._M_node + 1,
      __new_nstart);
   _M_deallocate_map(this->_M_impl._M_map, this->_M_impl._M_map_size);

   this->_M_impl._M_map = __new_map;
   this->_M_impl._M_map_size = __new_map_size;
 }

      this->_M_impl._M_start._M_set_node(__new_nstart);
      this->_M_impl._M_finish._M_set_node(__new_nstart + __old_num_nodes - 1);
    }



  template<typename _Tp>
    void
    fill(const _Deque_iterator<_Tp, _Tp&, _Tp*>& __first,
  const _Deque_iterator<_Tp, _Tp&, _Tp*>& __last, const _Tp& __value)
    {
      typedef typename _Deque_iterator<_Tp, _Tp&, _Tp*>::_Self _Self;

      for (typename _Self::_Map_pointer __node = __first._M_node + 1;
           __node < __last._M_node; ++__node)
 std::fill(*__node, *__node + _Self::_S_buffer_size(), __value);

      if (__first._M_node != __last._M_node)
 {
   std::fill(__first._M_cur, __first._M_last, __value);
   std::fill(__last._M_first, __last._M_cur, __value);
 }
      else
 std::fill(__first._M_cur, __last._M_cur, __value);
    }

  template<typename _Tp>
    _Deque_iterator<_Tp, _Tp&, _Tp*>
    copy(_Deque_iterator<_Tp, const _Tp&, const _Tp*> __first,
  _Deque_iterator<_Tp, const _Tp&, const _Tp*> __last,
  _Deque_iterator<_Tp, _Tp&, _Tp*> __result)
    {
      typedef typename _Deque_iterator<_Tp, _Tp&, _Tp*>::_Self _Self;
      typedef typename _Self::difference_type difference_type;

      difference_type __len = __last - __first;
      while (__len > 0)
 {
   const difference_type __clen
     = std::min(__len, std::min(__first._M_last - __first._M_cur,
           __result._M_last - __result._M_cur));
   std::copy(__first._M_cur, __first._M_cur + __clen, __result._M_cur);
   __first += __clen;
   __result += __clen;
   __len -= __clen;
 }
      return __result;
    }

  template<typename _Tp>
    _Deque_iterator<_Tp, _Tp&, _Tp*>
    copy_backward(_Deque_iterator<_Tp, const _Tp&, const _Tp*> __first,
    _Deque_iterator<_Tp, const _Tp&, const _Tp*> __last,
    _Deque_iterator<_Tp, _Tp&, _Tp*> __result)
    {
      typedef typename _Deque_iterator<_Tp, _Tp&, _Tp*>::_Self _Self;
      typedef typename _Self::difference_type difference_type;

      difference_type __len = __last - __first;
      while (__len > 0)
 {
   difference_type __llen = __last._M_cur - __last._M_first;
   _Tp* __lend = __last._M_cur;

   difference_type __rlen = __result._M_cur - __result._M_first;
   _Tp* __rend = __result._M_cur;

   if (!__llen)
     {
       __llen = _Self::_S_buffer_size();
       __lend = *(__last._M_node - 1) + __llen;
     }
   if (!__rlen)
     {
       __rlen = _Self::_S_buffer_size();
       __rend = *(__result._M_node - 1) + __rlen;
     }

   const difference_type __clen = std::min(__len,
        std::min(__llen, __rlen));
   std::copy_backward(__lend - __clen, __lend, __rend);
   __last -= __clen;
   __result -= __clen;
   __len -= __clen;
 }
      return __result;
    }
# 1118 "/usr/include/c++/9/bits/deque.tcc" 3


}
# 70 "/usr/include/c++/9/deque" 2 3
# 61 "/usr/include/c++/9/stack" 2 3
# 1 "/usr/include/c++/9/bits/stl_stack.h" 1 3
# 65 "/usr/include/c++/9/bits/stl_stack.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 98 "/usr/include/c++/9/bits/stl_stack.h" 3
  template<typename _Tp, typename _Sequence = deque<_Tp> >
    class stack
    {
# 111 "/usr/include/c++/9/bits/stl_stack.h" 3
      template<typename _Tp1, typename _Seq1>
 friend bool
 operator==(const stack<_Tp1, _Seq1>&, const stack<_Tp1, _Seq1>&);

      template<typename _Tp1, typename _Seq1>
 friend bool
 operator<(const stack<_Tp1, _Seq1>&, const stack<_Tp1, _Seq1>&);
# 133 "/usr/include/c++/9/bits/stl_stack.h" 3
    public:
      typedef typename _Sequence::value_type value_type;
      typedef typename _Sequence::reference reference;
      typedef typename _Sequence::const_reference const_reference;
      typedef typename _Sequence::size_type size_type;
      typedef _Sequence container_type;

    protected:

      _Sequence c;

    public:





      explicit
      stack(const _Sequence& __c = _Sequence())
      : c(__c) { }
# 192 "/usr/include/c++/9/bits/stl_stack.h" 3
      bool
      empty() const
      { return c.empty(); }


      size_type
      size() const
      { return c.size(); }





      reference
      top()
      {
 ;
 return c.back();
      }





      const_reference
      top() const
      {
 ;
 return c.back();
      }
# 232 "/usr/include/c++/9/bits/stl_stack.h" 3
      void
      push(const value_type& __x)
      { c.push_back(__x); }
# 265 "/usr/include/c++/9/bits/stl_stack.h" 3
      void
      pop()
      {
 ;
 c.pop_back();
      }
# 285 "/usr/include/c++/9/bits/stl_stack.h" 3
    };
# 311 "/usr/include/c++/9/bits/stl_stack.h" 3
  template<typename _Tp, typename _Seq>
    inline bool
    operator==(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return __x.c == __y.c; }
# 329 "/usr/include/c++/9/bits/stl_stack.h" 3
  template<typename _Tp, typename _Seq>
    inline bool
    operator<(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return __x.c < __y.c; }


  template<typename _Tp, typename _Seq>
    inline bool
    operator!=(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Seq>
    inline bool
    operator>(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Seq>
    inline bool
    operator<=(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Seq>
    inline bool
    operator>=(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return !(__x < __y); }
# 376 "/usr/include/c++/9/bits/stl_stack.h" 3

}
# 62 "/usr/include/c++/9/stack" 2 3
# 2 "stack.cpp" 2

# 2 "stack.cpp"
int main() {}
