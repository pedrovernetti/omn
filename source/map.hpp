#pragma once
#ifndef _OMN_MAP_INCLUDED
#define _OMN_MAP_INCLUDED

#include "globalUtilities.hpp"
#include <map>

namespace std 
{
	template <typename keyType, typename valueType>
	ostream & operator << ( ostream & os, const map<keyType, valueType> & m )
	{
		os << "{";
		for (const auto & item : m) os << item.first << ": " << item.second << ", ";
		if (!m.empty()) os << "\b\b";
		os << "}";
		return os;
	}
}

namespace omn
{
	template <typename keyType, typename valueType>
	using map = std::map<keyType, valueType>;
}

#endif // _OMN_MAP_INCLUDED
