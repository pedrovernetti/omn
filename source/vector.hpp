#pragma once
#ifndef _OMN_VECTOR_INCLUDED
#define _OMN_VECTOR_INCLUDED

#include "globalUtilities.hpp"
#include <vector>

namespace std 
{
	template <typename valueType>
	ostream & operator << ( ostream & os, const vector<valueType> & v )
	{
		os << "[";
		if (!v.empty())
		{
			for (size_t i = 0, size = v.size() - 1; i < size; i++) os << v[i] << ", ";
			os << v.back();
		}
		os << "]";
		return os;
	}
}

namespace omn
{
	template <typename valueType>
	using vector = std::vector<valueType>;
}

#endif // _OMN_VECTOR_INCLUDED
