#pragma once
#ifndef _OMN_UNORDEREDMAP_INCLUDED
#define _OMN_UNORDEREDMAP_INCLUDED

#include "globalUtilities.hpp"
#include <unordered_map>

namespace std 
{
	template <typename keyType, typename valueType>
	ostream & operator << ( ostream & os, const unordered_map<keyType, valueType> & m )
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
	using unorderedMap = std::unordered_map<keyType, valueType>;
}

#endif // _OMN_UNORDEREDMAP_INCLUDED
