//
//  main.cpp
//  Geom3
//
//  Created by Christian J Howard on 9/24/16.
//  Copyright © 2016 Christian Howard. All rights reserved.
//

#include <iostream>
#include "vec3.hpp"
#include "Quaternion.hpp"

typedef mat<3,3> mat3;
typedef vec<3> v3;
typedef Quaternion<> quat;

int main(int argc, const char * argv[]) {
    
    v3 v(1,0,0);
    quat q(3.14/6.0,v);
    mat3 m;
    v3 v2 = m*v + 2.0;
    m.print();
    q.print();
    v.print();
    v2.print();
    
    return 0;
}
