# 1 "map.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "map.cpp"
# 1 "/usr/include/c++/9/map" 1 3
# 58 "/usr/include/c++/9/map" 3
       
# 59 "/usr/include/c++/9/map" 3

# 1 "/usr/include/c++/9/bits/stl_tree.h" 1 3
# 61 "/usr/include/c++/9/bits/stl_tree.h" 3
       
# 62 "/usr/include/c++/9/bits/stl_tree.h" 3

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
# 64 "/usr/include/c++/9/bits/stl_tree.h" 2 3
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
# 65 "/usr/include/c++/9/bits/stl_tree.h" 2 3
# 1 "/usr/include/c++/9/bits/stl_function.h" 1 3
# 63 "/usr/include/c++/9/bits/stl_function.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 104 "/usr/include/c++/9/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {

      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {

      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;


      typedef _Result result_type;
    };
# 166 "/usr/include/c++/9/bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 350 "/usr/include/c++/9/bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };


  template<typename _Tp>
    struct greater<_Tp*> : public binary_function<_Tp*, _Tp*, bool>
    {
      bool
      operator()(_Tp* __x, _Tp* __y) const throw()
      {
# 424 "/usr/include/c++/9/bits/stl_function.h" 3
 return (long unsigned int)__x > (long unsigned int)__y;
      }
    };


  template<typename _Tp>
    struct less<_Tp*> : public binary_function<_Tp*, _Tp*, bool>
    {
      bool
      operator()(_Tp* __x, _Tp* __y) const throw()
      {
# 443 "/usr/include/c++/9/bits/stl_function.h" 3
 return (long unsigned int)__x < (long unsigned int)__y;
      }
    };


  template<typename _Tp>
    struct greater_equal<_Tp*> : public binary_function<_Tp*, _Tp*, bool>
    {
      bool
      operator()(_Tp* __x, _Tp* __y) const throw()
      {
# 462 "/usr/include/c++/9/bits/stl_function.h" 3
 return (long unsigned int)__x >= (long unsigned int)__y;
      }
    };


  template<typename _Tp>
    struct less_equal<_Tp*> : public binary_function<_Tp*, _Tp*, bool>
    {
      bool
      operator()(_Tp* __x, _Tp* __y) const throw()
      {
# 481 "/usr/include/c++/9/bits/stl_function.h" 3
 return (long unsigned int)__x <= (long unsigned int)__y;
      }
    };
# 785 "/usr/include/c++/9/bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };
# 878 "/usr/include/c++/9/bits/stl_function.h" 3
  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };

  template<typename _Tp>
    struct bit_not : public unary_function<_Tp, _Tp>
    {
   
      _Tp
      operator()(const _Tp& __x) const
      { return ~__x; }
    };
# 1002 "/usr/include/c++/9/bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
     
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

     
      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
   
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
     
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

     
      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
   
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 1079 "/usr/include/c++/9/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity
    : public unary_function<_Tp, _Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };


  template<typename _Tp> struct _Identity<const _Tp> : _Identity<_Tp> { };

  template<typename _Pair>
    struct _Select1st
    : public unary_function<_Pair, typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
# 1169 "/usr/include/c++/9/bits/stl_function.h" 3
    };

  template<typename _Pair>
    struct _Select2nd
    : public unary_function<_Pair, typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 1202 "/usr/include/c++/9/bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }




}


# 1 "/usr/include/c++/9/backward/binders.h" 1 3
# 60 "/usr/include/c++/9/backward/binders.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

namespace std __attribute__ ((__visibility__ ("default")))
{

# 107 "/usr/include/c++/9/backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }



}

#pragma GCC diagnostic pop
# 1393 "/usr/include/c++/9/bits/stl_function.h" 2 3
# 66 "/usr/include/c++/9/bits/stl_tree.h" 2 3

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
# 68 "/usr/include/c++/9/bits/stl_tree.h" 2 3







namespace std __attribute__ ((__visibility__ ("default")))
{

# 99 "/usr/include/c++/9/bits/stl_tree.h" 3
  enum _Rb_tree_color { _S_red = false, _S_black = true };

  struct _Rb_tree_node_base
  {
    typedef _Rb_tree_node_base* _Base_ptr;
    typedef const _Rb_tree_node_base* _Const_Base_ptr;

    _Rb_tree_color _M_color;
    _Base_ptr _M_parent;
    _Base_ptr _M_left;
    _Base_ptr _M_right;

    static _Base_ptr
    _S_minimum(_Base_ptr __x)
    {
      while (__x->_M_left != 0) __x = __x->_M_left;
      return __x;
    }

    static _Const_Base_ptr
    _S_minimum(_Const_Base_ptr __x)
    {
      while (__x->_M_left != 0) __x = __x->_M_left;
      return __x;
    }

    static _Base_ptr
    _S_maximum(_Base_ptr __x)
    {
      while (__x->_M_right != 0) __x = __x->_M_right;
      return __x;
    }

    static _Const_Base_ptr
    _S_maximum(_Const_Base_ptr __x)
    {
      while (__x->_M_right != 0) __x = __x->_M_right;
      return __x;
    }
  };


  template<typename _Key_compare>
    struct _Rb_tree_key_compare
    {
      _Key_compare _M_key_compare;

      _Rb_tree_key_compare()
     

      : _M_key_compare()
      { }

      _Rb_tree_key_compare(const _Key_compare& __comp)
      : _M_key_compare(__comp)
      { }
# 165 "/usr/include/c++/9/bits/stl_tree.h" 3
    };


  struct _Rb_tree_header
  {
    _Rb_tree_node_base _M_header;
    size_t _M_node_count;

    _Rb_tree_header()
    {
      _M_header._M_color = _S_red;
      _M_reset();
    }
# 192 "/usr/include/c++/9/bits/stl_tree.h" 3
    void
    _M_move_data(_Rb_tree_header& __from)
    {
      _M_header._M_color = __from._M_header._M_color;
      _M_header._M_parent = __from._M_header._M_parent;
      _M_header._M_left = __from._M_header._M_left;
      _M_header._M_right = __from._M_header._M_right;
      _M_header._M_parent->_M_parent = &_M_header;
      _M_node_count = __from._M_node_count;

      __from._M_reset();
    }

    void
    _M_reset()
    {
      _M_header._M_parent = 0;
      _M_header._M_left = &_M_header;
      _M_header._M_right = &_M_header;
      _M_node_count = 0;
    }
  };

  template<typename _Val>
    struct _Rb_tree_node : public _Rb_tree_node_base
    {
      typedef _Rb_tree_node<_Val>* _Link_type;


      _Val _M_value_field;

      _Val*
      _M_valptr()
      { return std::__addressof(_M_value_field); }

      const _Val*
      _M_valptr() const
      { return std::__addressof(_M_value_field); }
# 241 "/usr/include/c++/9/bits/stl_tree.h" 3
    };

  __attribute__ ((__pure__)) _Rb_tree_node_base*
  _Rb_tree_increment(_Rb_tree_node_base* __x) throw ();

  __attribute__ ((__pure__)) const _Rb_tree_node_base*
  _Rb_tree_increment(const _Rb_tree_node_base* __x) throw ();

  __attribute__ ((__pure__)) _Rb_tree_node_base*
  _Rb_tree_decrement(_Rb_tree_node_base* __x) throw ();

  __attribute__ ((__pure__)) const _Rb_tree_node_base*
  _Rb_tree_decrement(const _Rb_tree_node_base* __x) throw ();

  template<typename _Tp>
    struct _Rb_tree_iterator
    {
      typedef _Tp value_type;
      typedef _Tp& reference;
      typedef _Tp* pointer;

      typedef bidirectional_iterator_tag iterator_category;
      typedef ptrdiff_t difference_type;

      typedef _Rb_tree_iterator<_Tp> _Self;
      typedef _Rb_tree_node_base::_Base_ptr _Base_ptr;
      typedef _Rb_tree_node<_Tp>* _Link_type;

      _Rb_tree_iterator()
      : _M_node() { }

      explicit
      _Rb_tree_iterator(_Base_ptr __x)
      : _M_node(__x) { }

      reference
      operator*() const
      { return *static_cast<_Link_type>(_M_node)->_M_valptr(); }

      pointer
      operator->() const
      { return static_cast<_Link_type> (_M_node)->_M_valptr(); }

      _Self&
      operator++()
      {
 _M_node = _Rb_tree_increment(_M_node);
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_increment(_M_node);
 return __tmp;
      }

      _Self&
      operator--()
      {
 _M_node = _Rb_tree_decrement(_M_node);
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_decrement(_M_node);
 return __tmp;
      }

      friend bool
      operator==(const _Self& __x, const _Self& __y)
      { return __x._M_node == __y._M_node; }

      friend bool
      operator!=(const _Self& __x, const _Self& __y)
      { return __x._M_node != __y._M_node; }

      _Base_ptr _M_node;
  };

  template<typename _Tp>
    struct _Rb_tree_const_iterator
    {
      typedef _Tp value_type;
      typedef const _Tp& reference;
      typedef const _Tp* pointer;

      typedef _Rb_tree_iterator<_Tp> iterator;

      typedef bidirectional_iterator_tag iterator_category;
      typedef ptrdiff_t difference_type;

      typedef _Rb_tree_const_iterator<_Tp> _Self;
      typedef _Rb_tree_node_base::_Const_Base_ptr _Base_ptr;
      typedef const _Rb_tree_node<_Tp>* _Link_type;

      _Rb_tree_const_iterator()
      : _M_node() { }

      explicit
      _Rb_tree_const_iterator(_Base_ptr __x)
      : _M_node(__x) { }

      _Rb_tree_const_iterator(const iterator& __it)
      : _M_node(__it._M_node) { }

      iterator
      _M_const_cast() const
      { return iterator(const_cast<typename iterator::_Base_ptr>(_M_node)); }

      reference
      operator*() const
      { return *static_cast<_Link_type>(_M_node)->_M_valptr(); }

      pointer
      operator->() const
      { return static_cast<_Link_type>(_M_node)->_M_valptr(); }

      _Self&
      operator++()
      {
 _M_node = _Rb_tree_increment(_M_node);
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_increment(_M_node);
 return __tmp;
      }

      _Self&
      operator--()
      {
 _M_node = _Rb_tree_decrement(_M_node);
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_decrement(_M_node);
 return __tmp;
      }

      friend bool
      operator==(const _Self& __x, const _Self& __y)
      { return __x._M_node == __y._M_node; }

      friend bool
      operator!=(const _Self& __x, const _Self& __y)
      { return __x._M_node != __y._M_node; }

      _Base_ptr _M_node;
    };

  void
  _Rb_tree_insert_and_rebalance(const bool __insert_left,
    _Rb_tree_node_base* __x,
    _Rb_tree_node_base* __p,
    _Rb_tree_node_base& __header) throw ();

  _Rb_tree_node_base*
  _Rb_tree_rebalance_for_erase(_Rb_tree_node_base* const __z,
          _Rb_tree_node_base& __header) throw ();
# 434 "/usr/include/c++/9/bits/stl_tree.h" 3
  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc = allocator<_Val> >
    class _Rb_tree
    {
      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
 rebind<_Rb_tree_node<_Val> >::other _Node_allocator;

      typedef __gnu_cxx::__alloc_traits<_Node_allocator> _Alloc_traits;

    protected:
      typedef _Rb_tree_node_base* _Base_ptr;
      typedef const _Rb_tree_node_base* _Const_Base_ptr;
      typedef _Rb_tree_node<_Val>* _Link_type;
      typedef const _Rb_tree_node<_Val>* _Const_Link_type;

    private:


      struct _Reuse_or_alloc_node
      {
 _Reuse_or_alloc_node(_Rb_tree& __t)
 : _M_root(__t._M_root()), _M_nodes(__t._M_rightmost()), _M_t(__t)
 {
   if (_M_root)
     {
       _M_root->_M_parent = 0;

       if (_M_nodes->_M_left)
  _M_nodes = _M_nodes->_M_left;
     }
   else
     _M_nodes = 0;
 }





 ~_Reuse_or_alloc_node()
 { _M_t._M_erase(static_cast<_Link_type>(_M_root)); }

 template<typename _Arg>
   _Link_type

   operator()(const _Arg& __arg)



   {
     _Link_type __node = static_cast<_Link_type>(_M_extract());
     if (__node)
       {
  _M_t._M_destroy_node(__node);
  _M_t._M_construct_node(__node, (__arg));
  return __node;
       }

     return _M_t._M_create_node((__arg));
   }

      private:
 _Base_ptr
 _M_extract()
 {
   if (!_M_nodes)
     return _M_nodes;

   _Base_ptr __node = _M_nodes;
   _M_nodes = _M_nodes->_M_parent;
   if (_M_nodes)
     {
       if (_M_nodes->_M_right == __node)
  {
    _M_nodes->_M_right = 0;

    if (_M_nodes->_M_left)
      {
        _M_nodes = _M_nodes->_M_left;

        while (_M_nodes->_M_right)
   _M_nodes = _M_nodes->_M_right;

        if (_M_nodes->_M_left)
   _M_nodes = _M_nodes->_M_left;
      }
  }
       else
  _M_nodes->_M_left = 0;
     }
   else
     _M_root = 0;

   return __node;
 }

 _Base_ptr _M_root;
 _Base_ptr _M_nodes;
 _Rb_tree& _M_t;
      };



      struct _Alloc_node
      {
 _Alloc_node(_Rb_tree& __t)
 : _M_t(__t) { }

 template<typename _Arg>
   _Link_type

   operator()(const _Arg& __arg) const



   { return _M_t._M_create_node((__arg)); }

      private:
 _Rb_tree& _M_t;
      };

    public:
      typedef _Key key_type;
      typedef _Val value_type;
      typedef value_type* pointer;
      typedef const value_type* const_pointer;
      typedef value_type& reference;
      typedef const value_type& const_reference;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Alloc allocator_type;

      _Node_allocator&
      _M_get_Node_allocator()
      { return this->_M_impl; }

      const _Node_allocator&
      _M_get_Node_allocator() const
      { return this->_M_impl; }

      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Node_allocator()); }

    protected:
      _Link_type
      _M_get_node()
      { return _Alloc_traits::allocate(_M_get_Node_allocator(), 1); }

      void
      _M_put_node(_Link_type __p)
      { _Alloc_traits::deallocate(_M_get_Node_allocator(), __p, 1); }


      void
      _M_construct_node(_Link_type __node, const value_type& __x)
      {
 try
   { get_allocator().construct(__node->_M_valptr(), __x); }
 catch(...)
   {
     _M_put_node(__node);
     throw;
   }
      }

      _Link_type
      _M_create_node(const value_type& __x)
      {
 _Link_type __tmp = _M_get_node();
 _M_construct_node(__tmp, __x);
 return __tmp;
      }
# 636 "/usr/include/c++/9/bits/stl_tree.h" 3
      void
      _M_destroy_node(_Link_type __p)
      {

 get_allocator().destroy(__p->_M_valptr());




      }

      void
      _M_drop_node(_Link_type __p)
      {
 _M_destroy_node(__p);
 _M_put_node(__p);
      }

      template<typename _NodeGen>
 _Link_type
 _M_clone_node(_Const_Link_type __x, _NodeGen& __node_gen)
 {
   _Link_type __tmp = __node_gen(*__x->_M_valptr());
   __tmp->_M_color = __x->_M_color;
   __tmp->_M_left = 0;
   __tmp->_M_right = 0;
   return __tmp;
 }

    protected:




      template<typename _Key_compare,
        bool = __is_pod(_Key_compare)>

 struct _Rb_tree_impl
 : public _Node_allocator
 , public _Rb_tree_key_compare<_Key_compare>
 , public _Rb_tree_header
 {
   typedef _Rb_tree_key_compare<_Key_compare> _Base_key_compare;

   _Rb_tree_impl()
    


   : _Node_allocator()
   { }

   _Rb_tree_impl(const _Rb_tree_impl& __x)
   : _Node_allocator(_Alloc_traits::_S_select_on_copy(__x))
   , _Base_key_compare(__x._M_key_compare)
   { }


   _Rb_tree_impl(const _Key_compare& __comp, const _Node_allocator& __a)
   : _Node_allocator(__a), _Base_key_compare(__comp)
   { }
# 714 "/usr/include/c++/9/bits/stl_tree.h" 3
 };

      _Rb_tree_impl<_Compare> _M_impl;

    protected:
      _Base_ptr&
      _M_root()
      { return this->_M_impl._M_header._M_parent; }

      _Const_Base_ptr
      _M_root() const
      { return this->_M_impl._M_header._M_parent; }

      _Base_ptr&
      _M_leftmost()
      { return this->_M_impl._M_header._M_left; }

      _Const_Base_ptr
      _M_leftmost() const
      { return this->_M_impl._M_header._M_left; }

      _Base_ptr&
      _M_rightmost()
      { return this->_M_impl._M_header._M_right; }

      _Const_Base_ptr
      _M_rightmost() const
      { return this->_M_impl._M_header._M_right; }

      _Link_type
      _M_begin()
      { return static_cast<_Link_type>(this->_M_impl._M_header._M_parent); }

      _Const_Link_type
      _M_begin() const
      {
 return static_cast<_Const_Link_type>
   (this->_M_impl._M_header._M_parent);
      }

      _Base_ptr
      _M_end()
      { return &this->_M_impl._M_header; }

      _Const_Base_ptr
      _M_end() const
      { return &this->_M_impl._M_header; }

      static const_reference
      _S_value(_Const_Link_type __x)
      { return *__x->_M_valptr(); }

      static const _Key&
      _S_key(_Const_Link_type __x)
      {
# 785 "/usr/include/c++/9/bits/stl_tree.h" 3
 return _KeyOfValue()(*__x->_M_valptr());
      }

      static _Link_type
      _S_left(_Base_ptr __x)
      { return static_cast<_Link_type>(__x->_M_left); }

      static _Const_Link_type
      _S_left(_Const_Base_ptr __x)
      { return static_cast<_Const_Link_type>(__x->_M_left); }

      static _Link_type
      _S_right(_Base_ptr __x)
      { return static_cast<_Link_type>(__x->_M_right); }

      static _Const_Link_type
      _S_right(_Const_Base_ptr __x)
      { return static_cast<_Const_Link_type>(__x->_M_right); }

      static const_reference
      _S_value(_Const_Base_ptr __x)
      { return *static_cast<_Const_Link_type>(__x)->_M_valptr(); }

      static const _Key&
      _S_key(_Const_Base_ptr __x)
      { return _S_key(static_cast<_Const_Link_type>(__x)); }

      static _Base_ptr
      _S_minimum(_Base_ptr __x)
      { return _Rb_tree_node_base::_S_minimum(__x); }

      static _Const_Base_ptr
      _S_minimum(_Const_Base_ptr __x)
      { return _Rb_tree_node_base::_S_minimum(__x); }

      static _Base_ptr
      _S_maximum(_Base_ptr __x)
      { return _Rb_tree_node_base::_S_maximum(__x); }

      static _Const_Base_ptr
      _S_maximum(_Const_Base_ptr __x)
      { return _Rb_tree_node_base::_S_maximum(__x); }

    public:
      typedef _Rb_tree_iterator<value_type> iterator;
      typedef _Rb_tree_const_iterator<value_type> const_iterator;

      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
# 842 "/usr/include/c++/9/bits/stl_tree.h" 3
      pair<_Base_ptr, _Base_ptr>
      _M_get_insert_unique_pos(const key_type& __k);

      pair<_Base_ptr, _Base_ptr>
      _M_get_insert_equal_pos(const key_type& __k);

      pair<_Base_ptr, _Base_ptr>
      _M_get_insert_hint_unique_pos(const_iterator __pos,
        const key_type& __k);

      pair<_Base_ptr, _Base_ptr>
      _M_get_insert_hint_equal_pos(const_iterator __pos,
       const key_type& __k);

    private:
# 879 "/usr/include/c++/9/bits/stl_tree.h" 3
      template<typename _NodeGen>
 iterator
 _M_insert_(_Base_ptr __x, _Base_ptr __y,
     const value_type& __v, _NodeGen&);



      iterator
      _M_insert_lower(_Base_ptr __y, const value_type& __v);

      iterator
      _M_insert_equal_lower(const value_type& __x);


      template<typename _NodeGen>
 _Link_type
 _M_copy(_Const_Link_type __x, _Base_ptr __p, _NodeGen&);

      template<typename _NodeGen>
 _Link_type
 _M_copy(const _Rb_tree& __x, _NodeGen& __gen)
 {
   _Link_type __root = _M_copy(__x._M_begin(), _M_end(), __gen);
   _M_leftmost() = _S_minimum(__root);
   _M_rightmost() = _S_maximum(__root);
   _M_impl._M_node_count = __x._M_impl._M_node_count;
   return __root;
 }

      _Link_type
      _M_copy(const _Rb_tree& __x)
      {
 _Alloc_node __an(*this);
 return _M_copy(__x, __an);
      }

      void
      _M_erase(_Link_type __x);

      iterator
      _M_lower_bound(_Link_type __x, _Base_ptr __y,
       const _Key& __k);

      const_iterator
      _M_lower_bound(_Const_Link_type __x, _Const_Base_ptr __y,
       const _Key& __k) const;

      iterator
      _M_upper_bound(_Link_type __x, _Base_ptr __y,
       const _Key& __k);

      const_iterator
      _M_upper_bound(_Const_Link_type __x, _Const_Base_ptr __y,
       const _Key& __k) const;

    public:


      _Rb_tree() { }




      _Rb_tree(const _Compare& __comp,
        const allocator_type& __a = allocator_type())
      : _M_impl(__comp, _Node_allocator(__a)) { }

      _Rb_tree(const _Rb_tree& __x)
      : _M_impl(__x._M_impl)
      {
 if (__x._M_root() != 0)
   _M_root() = _M_copy(__x);
      }
# 994 "/usr/include/c++/9/bits/stl_tree.h" 3
      ~_Rb_tree()
      { _M_erase(_M_begin()); }

      _Rb_tree&
      operator=(const _Rb_tree& __x);


      _Compare
      key_comp() const
      { return _M_impl._M_key_compare; }

      iterator
      begin()
      { return iterator(this->_M_impl._M_header._M_left); }

      const_iterator
      begin() const
      { return const_iterator(this->_M_impl._M_header._M_left); }

      iterator
      end()
      { return iterator(&this->_M_impl._M_header); }

      const_iterator
      end() const
      { return const_iterator(&this->_M_impl._M_header); }

      reverse_iterator
      rbegin()
      { return reverse_iterator(end()); }

      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(end()); }

      reverse_iterator
      rend()
      { return reverse_iterator(begin()); }

      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(begin()); }

      bool
      empty() const
      { return _M_impl._M_node_count == 0; }

      size_type
      size() const
      { return _M_impl._M_node_count; }

      size_type
      max_size() const
      { return _Alloc_traits::max_size(_M_get_Node_allocator()); }

      void
      swap(_Rb_tree& __t)
      ;
# 1142 "/usr/include/c++/9/bits/stl_tree.h" 3
      pair<iterator, bool>
      _M_insert_unique(const value_type& __x);

      iterator
      _M_insert_equal(const value_type& __x);

      template<typename _NodeGen>
 iterator
 _M_insert_unique_(const_iterator __pos, const value_type& __x,
     _NodeGen&);

      iterator
      _M_insert_unique_(const_iterator __pos, const value_type& __x)
      {
 _Alloc_node __an(*this);
 return _M_insert_unique_(__pos, __x, __an);
      }

      template<typename _NodeGen>
 iterator
 _M_insert_equal_(const_iterator __pos, const value_type& __x,
    _NodeGen&);
      iterator
      _M_insert_equal_(const_iterator __pos, const value_type& __x)
      {
 _Alloc_node __an(*this);
 return _M_insert_equal_(__pos, __x, __an);
      }

      template<typename _InputIterator>
 void
 _M_insert_range_unique(_InputIterator __first, _InputIterator __last)
 {
   _Alloc_node __an(*this);
   for (; __first != __last; ++__first)
     _M_insert_unique_(end(), *__first, __an);
 }

      template<typename _InputIterator>
 void
 _M_insert_range_equal(_InputIterator __first, _InputIterator __last)
 {
   _Alloc_node __an(*this);
   for (; __first != __last; ++__first)
     _M_insert_equal_(end(), *__first, __an);
 }


    private:
      void
      _M_erase_aux(const_iterator __position);

      void
      _M_erase_aux(const_iterator __first, const_iterator __last);

    public:
# 1224 "/usr/include/c++/9/bits/stl_tree.h" 3
      void
      erase(iterator __position)
      {
 ;
 _M_erase_aux(__position);
      }

      void
      erase(const_iterator __position)
      {
 ;
 _M_erase_aux(__position);
      }

      size_type
      erase(const key_type& __x);
# 1252 "/usr/include/c++/9/bits/stl_tree.h" 3
      void
      erase(iterator __first, iterator __last)
      { _M_erase_aux(__first, __last); }

      void
      erase(const_iterator __first, const_iterator __last)
      { _M_erase_aux(__first, __last); }

      void
      erase(const key_type* __first, const key_type* __last);

      void
      clear()
      {
 _M_erase(_M_begin());
 _M_impl._M_reset();
      }


      iterator
      find(const key_type& __k);

      const_iterator
      find(const key_type& __k) const;

      size_type
      count(const key_type& __k) const;

      iterator
      lower_bound(const key_type& __k)
      { return _M_lower_bound(_M_begin(), _M_end(), __k); }

      const_iterator
      lower_bound(const key_type& __k) const
      { return _M_lower_bound(_M_begin(), _M_end(), __k); }

      iterator
      upper_bound(const key_type& __k)
      { return _M_upper_bound(_M_begin(), _M_end(), __k); }

      const_iterator
      upper_bound(const key_type& __k) const
      { return _M_upper_bound(_M_begin(), _M_end(), __k); }

      pair<iterator, iterator>
      equal_range(const key_type& __k);

      pair<const_iterator, const_iterator>
      equal_range(const key_type& __k) const;
# 1411 "/usr/include/c++/9/bits/stl_tree.h" 3
      bool
      __rb_verify() const;
# 1615 "/usr/include/c++/9/bits/stl_tree.h" 3
      friend bool
      operator==(const _Rb_tree& __x, const _Rb_tree& __y)
      {
 return __x.size() == __y.size()
   && std::equal(__x.begin(), __x.end(), __y.begin());
      }

      friend bool
      operator<(const _Rb_tree& __x, const _Rb_tree& __y)
      {
 return std::lexicographical_compare(__x.begin(), __x.end(),
         __y.begin(), __y.end());
      }

      friend bool
      operator!=(const _Rb_tree& __x, const _Rb_tree& __y)
      { return !(__x == __y); }

      friend bool
      operator>(const _Rb_tree& __x, const _Rb_tree& __y)
      { return __y < __x; }

      friend bool
      operator<=(const _Rb_tree& __x, const _Rb_tree& __y)
      { return !(__y < __x); }

      friend bool
      operator>=(const _Rb_tree& __x, const _Rb_tree& __y)
      { return !(__x < __y); }
    };

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    inline void
    swap(_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
  _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __y)
    { __x.swap(__y); }
# 1754 "/usr/include/c++/9/bits/stl_tree.h" 3
  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    operator=(const _Rb_tree& __x)
    {
      if (this != &__x)
 {
# 1779 "/usr/include/c++/9/bits/stl_tree.h" 3
   _Reuse_or_alloc_node __roan(*this);
   _M_impl._M_reset();
   _M_impl._M_key_compare = __x._M_impl._M_key_compare;
   if (__x._M_root() != 0)
     _M_root() = _M_copy(__x, __roan);
 }

      return *this;
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>



    template<typename _NodeGen>

      typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
      _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
      _M_insert_(_Base_ptr __x, _Base_ptr __p,



   const _Val& __v,

   _NodeGen& __node_gen)
      {
 bool __insert_left = (__x != 0 || __p == _M_end()
         || _M_impl._M_key_compare(_KeyOfValue()(__v),
       _S_key(__p)));

 _Link_type __z = __node_gen((__v));

 _Rb_tree_insert_and_rebalance(__insert_left, __z, __p,
          this->_M_impl._M_header);
 ++_M_impl._M_node_count;
 return iterator(__z);
      }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>



    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::



    _M_insert_lower(_Base_ptr __p, const _Val& __v)

    {
      bool __insert_left = (__p == _M_end()
       || !_M_impl._M_key_compare(_S_key(__p),
             _KeyOfValue()(__v)));

      _Link_type __z = _M_create_node((__v));

      _Rb_tree_insert_and_rebalance(__insert_left, __z, __p,
        this->_M_impl._M_header);
      ++_M_impl._M_node_count;
      return iterator(__z);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>



    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::



    _M_insert_equal_lower(const _Val& __v)

    {
      _Link_type __x = _M_begin();
      _Base_ptr __y = _M_end();
      while (__x != 0)
 {
   __y = __x;
   __x = !_M_impl._M_key_compare(_S_key(__x), _KeyOfValue()(__v)) ?
  _S_left(__x) : _S_right(__x);
 }
      return _M_insert_lower(__y, (__v));
    }

  template<typename _Key, typename _Val, typename _KoV,
    typename _Compare, typename _Alloc>
    template<typename _NodeGen>
      typename _Rb_tree<_Key, _Val, _KoV, _Compare, _Alloc>::_Link_type
      _Rb_tree<_Key, _Val, _KoV, _Compare, _Alloc>::
      _M_copy(_Const_Link_type __x, _Base_ptr __p, _NodeGen& __node_gen)
      {

 _Link_type __top = _M_clone_node(__x, __node_gen);
 __top->_M_parent = __p;

 try
   {
     if (__x->_M_right)
       __top->_M_right = _M_copy(_S_right(__x), __top, __node_gen);
     __p = __top;
     __x = _S_left(__x);

     while (__x != 0)
       {
  _Link_type __y = _M_clone_node(__x, __node_gen);
  __p->_M_left = __y;
  __y->_M_parent = __p;
  if (__x->_M_right)
    __y->_M_right = _M_copy(_S_right(__x), __y, __node_gen);
  __p = __y;
  __x = _S_left(__x);
       }
   }
 catch(...)
   {
     _M_erase(__top);
     throw;
   }
 return __top;
      }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_erase(_Link_type __x)
    {

      while (__x != 0)
 {
   _M_erase(_S_right(__x));
   _Link_type __y = _S_left(__x);
   _M_drop_node(__x);
   __x = __y;
 }
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_lower_bound(_Link_type __x, _Base_ptr __y,
     const _Key& __k)
    {
      while (__x != 0)
 if (!_M_impl._M_key_compare(_S_key(__x), __k))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);
      return iterator(__y);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::const_iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_lower_bound(_Const_Link_type __x, _Const_Base_ptr __y,
     const _Key& __k) const
    {
      while (__x != 0)
 if (!_M_impl._M_key_compare(_S_key(__x), __k))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);
      return const_iterator(__y);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_upper_bound(_Link_type __x, _Base_ptr __y,
     const _Key& __k)
    {
      while (__x != 0)
 if (_M_impl._M_key_compare(__k, _S_key(__x)))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);
      return iterator(__y);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::const_iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_upper_bound(_Const_Link_type __x, _Const_Base_ptr __y,
     const _Key& __k) const
    {
      while (__x != 0)
 if (_M_impl._M_key_compare(__k, _S_key(__x)))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);
      return const_iterator(__y);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::iterator,
  typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::iterator>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    equal_range(const _Key& __k)
    {
      _Link_type __x = _M_begin();
      _Base_ptr __y = _M_end();
      while (__x != 0)
 {
   if (_M_impl._M_key_compare(_S_key(__x), __k))
     __x = _S_right(__x);
   else if (_M_impl._M_key_compare(__k, _S_key(__x)))
     __y = __x, __x = _S_left(__x);
   else
     {
       _Link_type __xu(__x);
       _Base_ptr __yu(__y);
       __y = __x, __x = _S_left(__x);
       __xu = _S_right(__xu);
       return pair<iterator,
     iterator>(_M_lower_bound(__x, __y, __k),
        _M_upper_bound(__xu, __yu, __k));
     }
 }
      return pair<iterator, iterator>(iterator(__y),
          iterator(__y));
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::const_iterator,
  typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::const_iterator>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    equal_range(const _Key& __k) const
    {
      _Const_Link_type __x = _M_begin();
      _Const_Base_ptr __y = _M_end();
      while (__x != 0)
 {
   if (_M_impl._M_key_compare(_S_key(__x), __k))
     __x = _S_right(__x);
   else if (_M_impl._M_key_compare(__k, _S_key(__x)))
     __y = __x, __x = _S_left(__x);
   else
     {
       _Const_Link_type __xu(__x);
       _Const_Base_ptr __yu(__y);
       __y = __x, __x = _S_left(__x);
       __xu = _S_right(__xu);
       return pair<const_iterator,
     const_iterator>(_M_lower_bound(__x, __y, __k),
       _M_upper_bound(__xu, __yu, __k));
     }
 }
      return pair<const_iterator, const_iterator>(const_iterator(__y),
        const_iterator(__y));
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    swap(_Rb_tree& __t)
   
    {
      if (_M_root() == 0)
 {
   if (__t._M_root() != 0)
     _M_impl._M_move_data(__t._M_impl);
 }
      else if (__t._M_root() == 0)
 __t._M_impl._M_move_data(_M_impl);
      else
 {
   std::swap(_M_root(),__t._M_root());
   std::swap(_M_leftmost(),__t._M_leftmost());
   std::swap(_M_rightmost(),__t._M_rightmost());

   _M_root()->_M_parent = _M_end();
   __t._M_root()->_M_parent = __t._M_end();
   std::swap(this->_M_impl._M_node_count, __t._M_impl._M_node_count);
 }

      std::swap(this->_M_impl._M_key_compare, __t._M_impl._M_key_compare);

      _Alloc_traits::_S_on_swap(_M_get_Node_allocator(),
    __t._M_get_Node_allocator());
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::_Base_ptr,
  typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::_Base_ptr>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_get_insert_unique_pos(const key_type& __k)
    {
      typedef pair<_Base_ptr, _Base_ptr> _Res;
      _Link_type __x = _M_begin();
      _Base_ptr __y = _M_end();
      bool __comp = true;
      while (__x != 0)
 {
   __y = __x;
   __comp = _M_impl._M_key_compare(__k, _S_key(__x));
   __x = __comp ? _S_left(__x) : _S_right(__x);
 }
      iterator __j = iterator(__y);
      if (__comp)
 {
   if (__j == begin())
     return _Res(__x, __y);
   else
     --__j;
 }
      if (_M_impl._M_key_compare(_S_key(__j._M_node), __k))
 return _Res(__x, __y);
      return _Res(__j._M_node, 0);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::_Base_ptr,
  typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::_Base_ptr>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_get_insert_equal_pos(const key_type& __k)
    {
      typedef pair<_Base_ptr, _Base_ptr> _Res;
      _Link_type __x = _M_begin();
      _Base_ptr __y = _M_end();
      while (__x != 0)
 {
   __y = __x;
   __x = _M_impl._M_key_compare(__k, _S_key(__x)) ?
  _S_left(__x) : _S_right(__x);
 }
      return _Res(__x, __y);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>



    pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::iterator, bool>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::



    _M_insert_unique(const _Val& __v)

    {
      typedef pair<iterator, bool> _Res;
      pair<_Base_ptr, _Base_ptr> __res
 = _M_get_insert_unique_pos(_KeyOfValue()(__v));

      if (__res.second)
 {
   _Alloc_node __an(*this);
   return _Res(_M_insert_(__res.first, __res.second,
     (__v), __an),
        true);
 }

      return _Res(iterator(__res.first), false);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>



    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::



    _M_insert_equal(const _Val& __v)

    {
      pair<_Base_ptr, _Base_ptr> __res
 = _M_get_insert_equal_pos(_KeyOfValue()(__v));
      _Alloc_node __an(*this);
      return _M_insert_(__res.first, __res.second,
   (__v), __an);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::_Base_ptr,
  typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::_Base_ptr>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_get_insert_hint_unique_pos(const_iterator __position,
      const key_type& __k)
    {
      iterator __pos = __position._M_const_cast();
      typedef pair<_Base_ptr, _Base_ptr> _Res;


      if (__pos._M_node == _M_end())
 {
   if (size() > 0
       && _M_impl._M_key_compare(_S_key(_M_rightmost()), __k))
     return _Res(0, _M_rightmost());
   else
     return _M_get_insert_unique_pos(__k);
 }
      else if (_M_impl._M_key_compare(__k, _S_key(__pos._M_node)))
 {

   iterator __before = __pos;
   if (__pos._M_node == _M_leftmost())
     return _Res(_M_leftmost(), _M_leftmost());
   else if (_M_impl._M_key_compare(_S_key((--__before)._M_node), __k))
     {
       if (_S_right(__before._M_node) == 0)
  return _Res(0, __before._M_node);
       else
  return _Res(__pos._M_node, __pos._M_node);
     }
   else
     return _M_get_insert_unique_pos(__k);
 }
      else if (_M_impl._M_key_compare(_S_key(__pos._M_node), __k))
 {

   iterator __after = __pos;
   if (__pos._M_node == _M_rightmost())
     return _Res(0, _M_rightmost());
   else if (_M_impl._M_key_compare(__k, _S_key((++__after)._M_node)))
     {
       if (_S_right(__pos._M_node) == 0)
  return _Res(0, __pos._M_node);
       else
  return _Res(__after._M_node, __after._M_node);
     }
   else
     return _M_get_insert_unique_pos(__k);
 }
      else

 return _Res(__pos._M_node, 0);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>



    template<typename _NodeGen>

      typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
      _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
      _M_insert_unique_(const_iterator __position,



   const _Val& __v,

   _NodeGen& __node_gen)
    {
      pair<_Base_ptr, _Base_ptr> __res
 = _M_get_insert_hint_unique_pos(__position, _KeyOfValue()(__v));

      if (__res.second)
 return _M_insert_(__res.first, __res.second,
     (__v),
     __node_gen);
      return iterator(__res.first);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::_Base_ptr,
  typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::_Base_ptr>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_get_insert_hint_equal_pos(const_iterator __position, const key_type& __k)
    {
      iterator __pos = __position._M_const_cast();
      typedef pair<_Base_ptr, _Base_ptr> _Res;


      if (__pos._M_node == _M_end())
 {
   if (size() > 0
       && !_M_impl._M_key_compare(__k, _S_key(_M_rightmost())))
     return _Res(0, _M_rightmost());
   else
     return _M_get_insert_equal_pos(__k);
 }
      else if (!_M_impl._M_key_compare(_S_key(__pos._M_node), __k))
 {

   iterator __before = __pos;
   if (__pos._M_node == _M_leftmost())
     return _Res(_M_leftmost(), _M_leftmost());
   else if (!_M_impl._M_key_compare(__k, _S_key((--__before)._M_node)))
     {
       if (_S_right(__before._M_node) == 0)
  return _Res(0, __before._M_node);
       else
  return _Res(__pos._M_node, __pos._M_node);
     }
   else
     return _M_get_insert_equal_pos(__k);
 }
      else
 {

   iterator __after = __pos;
   if (__pos._M_node == _M_rightmost())
     return _Res(0, _M_rightmost());
   else if (!_M_impl._M_key_compare(_S_key((++__after)._M_node), __k))
     {
       if (_S_right(__pos._M_node) == 0)
  return _Res(0, __pos._M_node);
       else
  return _Res(__after._M_node, __after._M_node);
     }
   else
     return _Res(0, 0);
 }
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>



    template<typename _NodeGen>

      typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
      _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
      _M_insert_equal_(const_iterator __position,



         const _Val& __v,

         _NodeGen& __node_gen)
      {
 pair<_Base_ptr, _Base_ptr> __res
   = _M_get_insert_hint_equal_pos(__position, _KeyOfValue()(__v));

 if (__res.second)
   return _M_insert_(__res.first, __res.second,
       (__v),
       __node_gen);

 return _M_insert_equal_lower((__v));
      }
# 2501 "/usr/include/c++/9/bits/stl_tree.h" 3
  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_erase_aux(const_iterator __position)
    {
      _Link_type __y =
 static_cast<_Link_type>(_Rb_tree_rebalance_for_erase
    (const_cast<_Base_ptr>(__position._M_node),
     this->_M_impl._M_header));
      _M_drop_node(__y);
      --_M_impl._M_node_count;
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_erase_aux(const_iterator __first, const_iterator __last)
    {
      if (__first == begin() && __last == end())
 clear();
      else
 while (__first != __last)
   _M_erase_aux(__first++);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::size_type
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    erase(const _Key& __x)
    {
      pair<iterator, iterator> __p = equal_range(__x);
      const size_type __old_size = size();
      _M_erase_aux(__p.first, __p.second);
      return __old_size - size();
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    erase(const _Key* __first, const _Key* __last)
    {
      while (__first != __last)
 erase(*__first++);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    find(const _Key& __k)
    {
      iterator __j = _M_lower_bound(_M_begin(), _M_end(), __k);
      return (__j == end()
       || _M_impl._M_key_compare(__k,
     _S_key(__j._M_node))) ? end() : __j;
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::const_iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    find(const _Key& __k) const
    {
      const_iterator __j = _M_lower_bound(_M_begin(), _M_end(), __k);
      return (__j == end()
       || _M_impl._M_key_compare(__k,
     _S_key(__j._M_node))) ? end() : __j;
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::size_type
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    count(const _Key& __k) const
    {
      pair<const_iterator, const_iterator> __p = equal_range(__k);
      const size_type __n = std::distance(__p.first, __p.second);
      return __n;
    }

  __attribute__ ((__pure__)) unsigned int
  _Rb_tree_black_count(const _Rb_tree_node_base* __node,
         const _Rb_tree_node_base* __root) throw ();

  template<typename _Key, typename _Val, typename _KeyOfValue,
    typename _Compare, typename _Alloc>
    bool
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::__rb_verify() const
    {
      if (_M_impl._M_node_count == 0 || begin() == end())
 return _M_impl._M_node_count == 0 && begin() == end()
        && this->_M_impl._M_header._M_left == _M_end()
        && this->_M_impl._M_header._M_right == _M_end();

      unsigned int __len = _Rb_tree_black_count(_M_leftmost(), _M_root());
      for (const_iterator __it = begin(); __it != end(); ++__it)
 {
   _Const_Link_type __x = static_cast<_Const_Link_type>(__it._M_node);
   _Const_Link_type __L = _S_left(__x);
   _Const_Link_type __R = _S_right(__x);

   if (__x->_M_color == _S_red)
     if ((__L && __L->_M_color == _S_red)
  || (__R && __R->_M_color == _S_red))
       return false;

   if (__L && _M_impl._M_key_compare(_S_key(__x), _S_key(__L)))
     return false;
   if (__R && _M_impl._M_key_compare(_S_key(__R), _S_key(__x)))
     return false;

   if (!__L && !__R && _Rb_tree_black_count(__x, _M_root()) != __len)
     return false;
 }

      if (_M_leftmost() != _Rb_tree_node_base::_S_minimum(_M_root()))
 return false;
      if (_M_rightmost() != _Rb_tree_node_base::_S_maximum(_M_root()))
 return false;
      return true;
    }
# 2645 "/usr/include/c++/9/bits/stl_tree.h" 3

}
# 61 "/usr/include/c++/9/map" 2 3
# 1 "/usr/include/c++/9/bits/stl_map.h" 1 3
# 66 "/usr/include/c++/9/bits/stl_map.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{



  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    class multimap;
# 98 "/usr/include/c++/9/bits/stl_map.h" 3
  template <typename _Key, typename _Tp, typename _Compare = std::less<_Key>,
     typename _Alloc = std::allocator<std::pair<const _Key, _Tp> > >
    class map
    {
    public:
      typedef _Key key_type;
      typedef _Tp mapped_type;
      typedef std::pair<const _Key, _Tp> value_type;
      typedef _Compare key_compare;
      typedef _Alloc allocator_type;

    private:
# 126 "/usr/include/c++/9/bits/stl_map.h" 3
    public:
      class value_compare
      : public std::binary_function<value_type, value_type, bool>
      {
 friend class map<_Key, _Tp, _Compare, _Alloc>;
      protected:
 _Compare comp;

 value_compare(_Compare __c)
 : comp(__c) { }

      public:
 bool operator()(const value_type& __x, const value_type& __y) const
 { return comp(__x.first, __y.first); }
      };

    private:

      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
 rebind<value_type>::other _Pair_alloc_type;

      typedef _Rb_tree<key_type, value_type, _Select1st<value_type>,
         key_compare, _Pair_alloc_type> _Rep_type;


      _Rep_type _M_t;

      typedef __gnu_cxx::__alloc_traits<_Pair_alloc_type> _Alloc_traits;

    public:


      typedef typename _Alloc_traits::pointer pointer;
      typedef typename _Alloc_traits::const_pointer const_pointer;
      typedef typename _Alloc_traits::reference reference;
      typedef typename _Alloc_traits::const_reference const_reference;
      typedef typename _Rep_type::iterator iterator;
      typedef typename _Rep_type::const_iterator const_iterator;
      typedef typename _Rep_type::size_type size_type;
      typedef typename _Rep_type::difference_type difference_type;
      typedef typename _Rep_type::reverse_iterator reverse_iterator;
      typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;
# 181 "/usr/include/c++/9/bits/stl_map.h" 3
      map() : _M_t() { }
# 191 "/usr/include/c++/9/bits/stl_map.h" 3
      explicit
      map(const _Compare& __comp,
   const allocator_type& __a = allocator_type())
      : _M_t(__comp, _Pair_alloc_type(__a)) { }







      map(const map& __x)
      : _M_t(__x._M_t) { }
# 270 "/usr/include/c++/9/bits/stl_map.h" 3
      template<typename _InputIterator>
 map(_InputIterator __first, _InputIterator __last)
 : _M_t()
 { _M_t._M_insert_range_unique(__first, __last); }
# 287 "/usr/include/c++/9/bits/stl_map.h" 3
      template<typename _InputIterator>
 map(_InputIterator __first, _InputIterator __last,
     const _Compare& __comp,
     const allocator_type& __a = allocator_type())
 : _M_t(__comp, _Pair_alloc_type(__a))
 { _M_t._M_insert_range_unique(__first, __last); }
# 309 "/usr/include/c++/9/bits/stl_map.h" 3
      map&
      operator=(const map& __x)
      {
 _M_t = __x._M_t;
 return *this;
      }
# 343 "/usr/include/c++/9/bits/stl_map.h" 3
      allocator_type
      get_allocator() const
      { return allocator_type(_M_t.get_allocator()); }







      iterator
      begin()
      { return _M_t.begin(); }






      const_iterator
      begin() const
      { return _M_t.begin(); }






      iterator
      end()
      { return _M_t.end(); }






      const_iterator
      end() const
      { return _M_t.end(); }






      reverse_iterator
      rbegin()
      { return _M_t.rbegin(); }






      const_reverse_iterator
      rbegin() const
      { return _M_t.rbegin(); }






      reverse_iterator
      rend()
      { return _M_t.rend(); }






      const_reverse_iterator
      rend() const
      { return _M_t.rend(); }
# 462 "/usr/include/c++/9/bits/stl_map.h" 3
      bool
      empty() const
      { return _M_t.empty(); }


      size_type
      size() const
      { return _M_t.size(); }


      size_type
      max_size() const
      { return _M_t.max_size(); }
# 489 "/usr/include/c++/9/bits/stl_map.h" 3
      mapped_type&
      operator[](const key_type& __k)
      {



 iterator __i = lower_bound(__k);

 if (__i == end() || key_comp()(__k, (*__i).first))





   __i = insert(__i, value_type(__k, mapped_type()));

 return (*__i).second;
      }
# 534 "/usr/include/c++/9/bits/stl_map.h" 3
      mapped_type&
      at(const key_type& __k)
      {
 iterator __i = lower_bound(__k);
 if (__i == end() || key_comp()(__k, (*__i).first))
   __throw_out_of_range(("map::at"));
 return (*__i).second;
      }

      const mapped_type&
      at(const key_type& __k) const
      {
 const_iterator __i = lower_bound(__k);
 if (__i == end() || key_comp()(__k, (*__i).first))
   __throw_out_of_range(("map::at"));
 return (*__i).second;
      }
# 800 "/usr/include/c++/9/bits/stl_map.h" 3
      std::pair<iterator, bool>
      insert(const value_type& __x)
      { return _M_t._M_insert_unique(__x); }
# 856 "/usr/include/c++/9/bits/stl_map.h" 3
      iterator



      insert(iterator __position, const value_type& __x)

      { return _M_t._M_insert_unique_(__position, __x); }
# 889 "/usr/include/c++/9/bits/stl_map.h" 3
      template<typename _InputIterator>
 void
 insert(_InputIterator __first, _InputIterator __last)
 { _M_t._M_insert_range_unique(__first, __last); }
# 1050 "/usr/include/c++/9/bits/stl_map.h" 3
      void
      erase(iterator __position)
      { _M_t.erase(__position); }
# 1066 "/usr/include/c++/9/bits/stl_map.h" 3
      size_type
      erase(const key_type& __x)
      { return _M_t.erase(__x); }
# 1102 "/usr/include/c++/9/bits/stl_map.h" 3
      void
      erase(iterator __first, iterator __last)
      { _M_t.erase(__first, __last); }
# 1120 "/usr/include/c++/9/bits/stl_map.h" 3
      void
      swap(map& __x)
     
      { _M_t.swap(__x._M_t); }







      void
      clear()
      { _M_t.clear(); }






      key_compare
      key_comp() const
      { return _M_t.key_comp(); }





      value_compare
      value_comp() const
      { return value_compare(_M_t.key_comp()); }
# 1167 "/usr/include/c++/9/bits/stl_map.h" 3
      iterator
      find(const key_type& __x)
      { return _M_t.find(__x); }
# 1192 "/usr/include/c++/9/bits/stl_map.h" 3
      const_iterator
      find(const key_type& __x) const
      { return _M_t.find(__x); }
# 1213 "/usr/include/c++/9/bits/stl_map.h" 3
      size_type
      count(const key_type& __x) const
      { return _M_t.find(__x) == _M_t.end() ? 0 : 1; }
# 1256 "/usr/include/c++/9/bits/stl_map.h" 3
      iterator
      lower_bound(const key_type& __x)
      { return _M_t.lower_bound(__x); }
# 1281 "/usr/include/c++/9/bits/stl_map.h" 3
      const_iterator
      lower_bound(const key_type& __x) const
      { return _M_t.lower_bound(__x); }
# 1301 "/usr/include/c++/9/bits/stl_map.h" 3
      iterator
      upper_bound(const key_type& __x)
      { return _M_t.upper_bound(__x); }
# 1321 "/usr/include/c++/9/bits/stl_map.h" 3
      const_iterator
      upper_bound(const key_type& __x) const
      { return _M_t.upper_bound(__x); }
# 1350 "/usr/include/c++/9/bits/stl_map.h" 3
      std::pair<iterator, iterator>
      equal_range(const key_type& __x)
      { return _M_t.equal_range(__x); }
# 1379 "/usr/include/c++/9/bits/stl_map.h" 3
      std::pair<const_iterator, const_iterator>
      equal_range(const key_type& __x) const
      { return _M_t.equal_range(__x); }
# 1396 "/usr/include/c++/9/bits/stl_map.h" 3
      template<typename _K1, typename _T1, typename _C1, typename _A1>
 friend bool
 operator==(const map<_K1, _T1, _C1, _A1>&,
     const map<_K1, _T1, _C1, _A1>&);

      template<typename _K1, typename _T1, typename _C1, typename _A1>
 friend bool
 operator<(const map<_K1, _T1, _C1, _A1>&,
    const map<_K1, _T1, _C1, _A1>&);
    };
# 1453 "/usr/include/c++/9/bits/stl_map.h" 3
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator==(const map<_Key, _Tp, _Compare, _Alloc>& __x,
        const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __x._M_t == __y._M_t; }
# 1470 "/usr/include/c++/9/bits/stl_map.h" 3
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<(const map<_Key, _Tp, _Compare, _Alloc>& __x,
       const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __x._M_t < __y._M_t; }


  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator!=(const map<_Key, _Tp, _Compare, _Alloc>& __x,
        const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__x == __y); }


  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>(const map<_Key, _Tp, _Compare, _Alloc>& __x,
       const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __y < __x; }


  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<=(const map<_Key, _Tp, _Compare, _Alloc>& __x,
        const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__y < __x); }


  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>=(const map<_Key, _Tp, _Compare, _Alloc>& __x,
        const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__x < __y); }


  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline void
    swap(map<_Key, _Tp, _Compare, _Alloc>& __x,
  map<_Key, _Tp, _Compare, _Alloc>& __y)
   
    { __x.swap(__y); }


# 1535 "/usr/include/c++/9/bits/stl_map.h" 3

}
# 62 "/usr/include/c++/9/map" 2 3
# 1 "/usr/include/c++/9/bits/stl_multimap.h" 1 3
# 64 "/usr/include/c++/9/bits/stl_multimap.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{



  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    class map;
# 96 "/usr/include/c++/9/bits/stl_multimap.h" 3
  template <typename _Key, typename _Tp,
     typename _Compare = std::less<_Key>,
     typename _Alloc = std::allocator<std::pair<const _Key, _Tp> > >
    class multimap
    {
    public:
      typedef _Key key_type;
      typedef _Tp mapped_type;
      typedef std::pair<const _Key, _Tp> value_type;
      typedef _Compare key_compare;
      typedef _Alloc allocator_type;

    private:
# 125 "/usr/include/c++/9/bits/stl_multimap.h" 3
    public:
      class value_compare
      : public std::binary_function<value_type, value_type, bool>
      {
 friend class multimap<_Key, _Tp, _Compare, _Alloc>;
      protected:
 _Compare comp;

 value_compare(_Compare __c)
 : comp(__c) { }

      public:
 bool operator()(const value_type& __x, const value_type& __y) const
 { return comp(__x.first, __y.first); }
      };

    private:

      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
 rebind<value_type>::other _Pair_alloc_type;

      typedef _Rb_tree<key_type, value_type, _Select1st<value_type>,
         key_compare, _Pair_alloc_type> _Rep_type;

      _Rep_type _M_t;

      typedef __gnu_cxx::__alloc_traits<_Pair_alloc_type> _Alloc_traits;

    public:


      typedef typename _Alloc_traits::pointer pointer;
      typedef typename _Alloc_traits::const_pointer const_pointer;
      typedef typename _Alloc_traits::reference reference;
      typedef typename _Alloc_traits::const_reference const_reference;
      typedef typename _Rep_type::iterator iterator;
      typedef typename _Rep_type::const_iterator const_iterator;
      typedef typename _Rep_type::size_type size_type;
      typedef typename _Rep_type::difference_type difference_type;
      typedef typename _Rep_type::reverse_iterator reverse_iterator;
      typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;
# 178 "/usr/include/c++/9/bits/stl_multimap.h" 3
      multimap() : _M_t() { }
# 188 "/usr/include/c++/9/bits/stl_multimap.h" 3
      explicit
      multimap(const _Compare& __comp,
        const allocator_type& __a = allocator_type())
      : _M_t(__comp, _Pair_alloc_type(__a)) { }







      multimap(const multimap& __x)
      : _M_t(__x._M_t) { }
# 266 "/usr/include/c++/9/bits/stl_multimap.h" 3
      template<typename _InputIterator>
 multimap(_InputIterator __first, _InputIterator __last)
 : _M_t()
 { _M_t._M_insert_range_equal(__first, __last); }
# 282 "/usr/include/c++/9/bits/stl_multimap.h" 3
      template<typename _InputIterator>
 multimap(_InputIterator __first, _InputIterator __last,
   const _Compare& __comp,
   const allocator_type& __a = allocator_type())
 : _M_t(__comp, _Pair_alloc_type(__a))
 { _M_t._M_insert_range_equal(__first, __last); }
# 304 "/usr/include/c++/9/bits/stl_multimap.h" 3
      multimap&
      operator=(const multimap& __x)
      {
 _M_t = __x._M_t;
 return *this;
      }
# 338 "/usr/include/c++/9/bits/stl_multimap.h" 3
      allocator_type
      get_allocator() const
      { return allocator_type(_M_t.get_allocator()); }







      iterator
      begin()
      { return _M_t.begin(); }






      const_iterator
      begin() const
      { return _M_t.begin(); }






      iterator
      end()
      { return _M_t.end(); }






      const_iterator
      end() const
      { return _M_t.end(); }






      reverse_iterator
      rbegin()
      { return _M_t.rbegin(); }






      const_reverse_iterator
      rbegin() const
      { return _M_t.rbegin(); }






      reverse_iterator
      rend()
      { return _M_t.rend(); }






      const_reverse_iterator
      rend() const
      { return _M_t.rend(); }
# 455 "/usr/include/c++/9/bits/stl_multimap.h" 3
      bool
      empty() const
      { return _M_t.empty(); }


      size_type
      size() const
      { return _M_t.size(); }


      size_type
      max_size() const
      { return _M_t.max_size(); }
# 536 "/usr/include/c++/9/bits/stl_multimap.h" 3
      iterator
      insert(const value_type& __x)
      { return _M_t._M_insert_equal(__x); }
# 575 "/usr/include/c++/9/bits/stl_multimap.h" 3
      iterator



      insert(iterator __position, const value_type& __x)

      { return _M_t._M_insert_equal_(__position, __x); }
# 609 "/usr/include/c++/9/bits/stl_multimap.h" 3
      template<typename _InputIterator>
 void
 insert(_InputIterator __first, _InputIterator __last)
 { _M_t._M_insert_range_equal(__first, __last); }
# 720 "/usr/include/c++/9/bits/stl_multimap.h" 3
      void
      erase(iterator __position)
      { _M_t.erase(__position); }
# 736 "/usr/include/c++/9/bits/stl_multimap.h" 3
      size_type
      erase(const key_type& __x)
      { return _M_t.erase(__x); }
# 776 "/usr/include/c++/9/bits/stl_multimap.h" 3
      void
      erase(iterator __first, iterator __last)
      { _M_t.erase(__first, __last); }
# 794 "/usr/include/c++/9/bits/stl_multimap.h" 3
      void
      swap(multimap& __x)
     
      { _M_t.swap(__x._M_t); }







      void
      clear()
      { _M_t.clear(); }






      key_compare
      key_comp() const
      { return _M_t.key_comp(); }





      value_compare
      value_comp() const
      { return value_compare(_M_t.key_comp()); }
# 840 "/usr/include/c++/9/bits/stl_multimap.h" 3
      iterator
      find(const key_type& __x)
      { return _M_t.find(__x); }
# 864 "/usr/include/c++/9/bits/stl_multimap.h" 3
      const_iterator
      find(const key_type& __x) const
      { return _M_t.find(__x); }
# 882 "/usr/include/c++/9/bits/stl_multimap.h" 3
      size_type
      count(const key_type& __x) const
      { return _M_t.count(__x); }
# 925 "/usr/include/c++/9/bits/stl_multimap.h" 3
      iterator
      lower_bound(const key_type& __x)
      { return _M_t.lower_bound(__x); }
# 950 "/usr/include/c++/9/bits/stl_multimap.h" 3
      const_iterator
      lower_bound(const key_type& __x) const
      { return _M_t.lower_bound(__x); }
# 970 "/usr/include/c++/9/bits/stl_multimap.h" 3
      iterator
      upper_bound(const key_type& __x)
      { return _M_t.upper_bound(__x); }
# 990 "/usr/include/c++/9/bits/stl_multimap.h" 3
      const_iterator
      upper_bound(const key_type& __x) const
      { return _M_t.upper_bound(__x); }
# 1017 "/usr/include/c++/9/bits/stl_multimap.h" 3
      std::pair<iterator, iterator>
      equal_range(const key_type& __x)
      { return _M_t.equal_range(__x); }
# 1044 "/usr/include/c++/9/bits/stl_multimap.h" 3
      std::pair<const_iterator, const_iterator>
      equal_range(const key_type& __x) const
      { return _M_t.equal_range(__x); }
# 1061 "/usr/include/c++/9/bits/stl_multimap.h" 3
      template<typename _K1, typename _T1, typename _C1, typename _A1>
 friend bool
 operator==(const multimap<_K1, _T1, _C1, _A1>&,
     const multimap<_K1, _T1, _C1, _A1>&);

      template<typename _K1, typename _T1, typename _C1, typename _A1>
 friend bool
 operator<(const multimap<_K1, _T1, _C1, _A1>&,
    const multimap<_K1, _T1, _C1, _A1>&);
  };
# 1117 "/usr/include/c++/9/bits/stl_multimap.h" 3
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator==(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
        const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __x._M_t == __y._M_t; }
# 1134 "/usr/include/c++/9/bits/stl_multimap.h" 3
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
       const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __x._M_t < __y._M_t; }


  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator!=(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
        const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__x == __y); }


  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
       const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __y < __x; }


  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<=(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
        const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__y < __x); }


  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>=(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
        const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__x < __y); }


  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline void
    swap(multimap<_Key, _Tp, _Compare, _Alloc>& __x,
  multimap<_Key, _Tp, _Compare, _Alloc>& __y)
   
    { __x.swap(__y); }


# 1199 "/usr/include/c++/9/bits/stl_multimap.h" 3

}
# 63 "/usr/include/c++/9/map" 2 3
# 1 "/usr/include/c++/9/bits/range_access.h" 1 3
# 33 "/usr/include/c++/9/bits/range_access.h" 3
       
# 34 "/usr/include/c++/9/bits/range_access.h" 3
# 64 "/usr/include/c++/9/map" 2 3
# 1 "/usr/include/c++/9/bits/erase_if.h" 1 3
# 33 "/usr/include/c++/9/bits/erase_if.h" 3
       
# 34 "/usr/include/c++/9/bits/erase_if.h" 3
# 65 "/usr/include/c++/9/map" 2 3
# 2 "map.cpp" 2

# 2 "map.cpp"
int main() {}
