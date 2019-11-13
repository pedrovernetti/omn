#pragma once
#ifndef _OMN_UNORDEREDSET_INCLUDED
#define _OMN_UNORDEREDSET_INCLUDED

#include "globalUtilities.hpp"
#include <unordered_set>

namespace std 
{
	template <typename valueType>
	ostream & operator << ( ostream & os, const std::unordered_set<valueType> & s )
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
	template <ttypename valueType>
	using unorderedSet = std::unordered_set<valueType>;
}

#endif // _OMN_UNORDEREDSET_INCLUDED
