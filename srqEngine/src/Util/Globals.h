#ifndef _H_GLOBALS
#define _H_GLOBALS
#include<glad/glad.h>
#include<vector>


const int MAX_ENTITIES = 5;
const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 768;

/* Data type enum class*/
enum class DataType { Float, Float2, Float3, Float4, Mat3, Mat4 }; // To match shader data types

/* Lookup table to translate generic data type into GL ENUM */
static GLenum GL_DATA_TYPE_LOOKUP(DataType type) {
	switch (type) 
	{
		case DataType::Float:    return GL_FLOAT;
		case DataType::Float2:   return GL_FLOAT;
		case DataType::Float3:   return GL_FLOAT;
		case DataType::Float4:   return GL_FLOAT;
		case DataType::Mat3:     return GL_FLOAT;
		case DataType::Mat4:     return GL_FLOAT;
	}
	return GL_FLOAT;
}

#endif