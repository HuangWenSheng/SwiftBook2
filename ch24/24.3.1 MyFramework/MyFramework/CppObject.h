//
//  CppObject.h
//  HelloSwiftCallCPP
//
//  Created by 关东升 on 2017-1-18.
//  本书网站：http://www.51work6.com
//  智捷课堂在线课堂：http://www.zhijieketang.com/
//  智捷课堂微信公共号：zhijieketang
//  作者微博：@tony_关东升
//  作者微信：tony关东升
//  QQ：569418560 邮箱：eorient@sina.com
//  QQ交流群：162030268
//

#ifndef CppObject_hpp
#define CppObject_hpp

#include <stdio.h>

class CppObject {
public:
    int add(int a, int b);

    int sub(int a, int b);

    static int static_add(int a, int b);

    static int static_sub(int a, int b);

};

#endif /* CppObject_hpp */
