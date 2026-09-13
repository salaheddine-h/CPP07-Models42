#pragma once

#include<iostream>

template<typename T_array , typename T_function>
void    iter(T_array *array , size_t length , T_function function)
{
	for (size_t i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

