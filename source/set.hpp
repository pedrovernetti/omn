#pragma once
#ifndef _OMN_SET_INCLUDED
#define _OMN_SET_INCLUDED

#include "globalUtilities.hpp"
#include <set>

namespace std 
{
	template <typename valueType>
	ostream & operator << ( ostream & os, const set<valueType> & s )
	{
		os << "{";
		for (const auto & item : s) os << item << ", ";
		if (!s.empty()) os << "\b\b";
		os << "}";
		return os;
	}
}

namespace omn
{
	template <typename valueType>
	using set = std::set<valueType>;
}

#endif // _OMN_SET_INCLUDED
