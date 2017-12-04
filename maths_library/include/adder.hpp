//
//  adder.hpp
//  calc
//
//  Created by Patariki on 11/9/17.
//  Copyright © 2017 Patariki. All rights reserved.
//

#ifndef adder_hpp
#define adder_hpp

#if defined(WIN32)|defined(_WIN32)
#ifdef maths_STATIC
// dont add any keywords if building a static library
#define MATHSLIB_API
#else
#ifdef maths_EXPORTS
#define MATHSLIB_API __declspec( dllexport )
#else
#define MATHSLIB_API __declspec( dllimport )
#endif
#endif
#else
// MATHSLIB_API is defined as
#define MATHSLIB_API
#endif
// The above will include one of: // __declspec( dllexport )
// __declspec( dllimport )
// before declarations. This is a // extension to C/C++ nothing if were not on Windows Microsoft specific
// prototype for the function including additional keyword
MATHSLIB_API int add( int a, int b );
#endif
// /adder.h --------------------------------------
