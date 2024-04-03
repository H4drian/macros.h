/*
* MIT License
* 
* Copyright (c) 2024 Leon Cotten
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/


// inclusion guard
#ifdef MACRO_H
    #error "Macro.h already included"
#endif

#ifndef MACRO_H
    #define MACRO_H
    
    #ifndef EXIT_SUCCESS
        #define EXIT_SUCCESS 0
    #endif
    
    #ifndef EXIT_FAILURE
        #define EXIT_FAILURE 1
    #endif
    
    #ifndef _STDBOOL_H
        #ifndef TRUE
            #define TRUE 1
        #endif
    
        #ifndef FALSE
            #define FALSE 0
        #endif
    #endif 
    #ifdef _STDBOOL_H
        #ifndef TRUE
            #define TRUE true
        #endif
    
        #ifndef FALSE
            #define FALSE false
        #endif
    #endif
    
    #ifndef FOREVER
        #define FOREVER ;;
    #endif
    
    #ifndef ZERO
        #define ZERO 0
    #endif
    
    #ifndef OR
        #define OR ||
    #endif
            
    #ifndef AND
        #define AND &&
    #endif
            
    #ifndef NOT
        #define NOT !
    #endif

    #ifndef _INC_STDLIB
        #include <stdlib.h>

        #ifndef NEW
            #define NEW(type) ((type)malloc(sizeof(type))
        #endif

        #ifndef DELETE
            #define DELETE(ptr) (free(ptr))
        #endif
    #endif
        
// end of inclusion guard
#endif // MACRO_H