//
//  vec3.hpp
//  Geom3
//
//  Created by Christian J Howard on 9/24/16.
//
//  The MIT License (MIT)
//    Copyright © 2016 Christian Howard. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//
//

#ifndef vec3_h
#define vec3_h

#include "vec.hpp"

template<typename data_type = double>
class vec3 : public vec<3,data_type> {
public:
    typedef vec<3,data_type> parent;
    
    vec3():parent(){}
    
    vec3( data_type x, data_type y, data_type z){
        parent::d[0] = x;
        parent::d[1] = y;
        parent::d[2] = z;
    }
    
    vec3 cross( const vec3 & v ) {
        vec3 out;
        out.d[0] = parent::d[1]*v.d[2] - parent::d[2]*v.d[1];
        out.d[1] = parent::d[2]*v.d[0] - parent::d[0]*v.d[2];
        out.d[2] = parent::d[0]*v.d[1] - parent::d[1]*v.d[0];
        return out;
    }
    void cross( const vec3 & v, vec3 & output) {
        output.d[0] = parent::d[1]*v.d[2] - parent::d[2]*v.d[1];
        output.d[1] = parent::d[2]*v.d[0] - parent::d[0]*v.d[2];
        output.d[2] = parent::d[0]*v.d[1] - parent::d[1]*v.d[0];
        return output;
    }
};


#endif /* vec3_h */
