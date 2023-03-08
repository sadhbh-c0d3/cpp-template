#ifndef INCLUDED_LIB_HPP
#define INCLUDED_LIB_HPP

#include <type_traits>

// Demonstrates concepts
template<typename T>
concept NumericType = std::is_arithmetic<T>::value;

namespace hello_world
{
    class Hello
    {
    public:
        // Demonstrates constructor implemented in cpp file
        Hello();
        
        // Demonstrates default virtual destructor
        virtual ~Hello() = default;

        // Function demonstrates oldschool template with static assert
        template<typename T>
        static T foo(T a, T b, T c)
        {
            static_assert(std::is_arithmetic<T>::value, "T must be numeric type");
            return 2 * a * b + 2 * c;
        }
        
        // Function demonstrates use of decltype as return type and requires
        template<typename T>
        requires std::is_arithmetic<T>::value
        static auto bar(T a, T b, T c) -> decltype(1 * a * b + 1 * c)
        {
            return 2 * a * b + 2 * c;
        }
        
        // Function demonstrates auto return type and concepts
        template<NumericType T>
        static auto baz(T a, T b, T c)
        {
            return 2 * a * b + 2 * c;
        }
    };

}// end of namespace hello_world
#endif//INCLUDED_LIB_HPP