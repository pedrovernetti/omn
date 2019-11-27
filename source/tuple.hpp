#pragma once
#ifndef _OMN_TUPLE_INCLUDED
#define _OMN_TUPLE_INCLUDED

#include "globalUtilities.hpp"
#include <tuple>

namespace std 
{
	template <size_t position = 0, typename... type>
	inline ostream & operator << ( ostream & os, const tuple<type...> t )
	{
		if constexpr (!position) os << "(";
		if constexpr (position < std::tuple_size<tuple<type...>>::value)
		{
			os << std::get<position>(t);
			if constexpr (position < (std::tuple_size<tuple<type...>>::value - 1)) os << ", ";
			else os << ")";
			operator << <position + 1>(os, t);
		}
		return os;
	}
}

namespace omn
{
	template <typename valueType>
	using tuple = std::tuple<valueType>;
}

#endif // _OMN_TUPLE_INCLUDED
