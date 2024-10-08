//
// Created by xiehao on 2024/9/24.
//

#ifndef MY_THREE_COLOR_BASICTYPE_H
#define MY_THREE_COLOR_BASICTYPE_H

enum BasicType {
    T_BOOLEAN       =   4,
    T_CHAR          =   5,
    T_FLOAT         =   6,
    T_DOUBLE        =   7,
    T_BYTE          =   8,
    T_SHORT         =   9,
    T_INT           =   10,
    T_LONG          =   11,
    T_OBJECT        =   12,
    T_ARRAY         =   13,
    T_VOID          =   14,
    T_ADDRESS       =   15,
    T_NARROWOOP     =   16,
    T_METADATA      =   17,
    T_NARROWKLASS   =   18,
    T_CONFLICT      =   19, // for stack value type with conflicting contents
    T_ILLEGAL       =   99
};
#endif //MY_THREE_COLOR_BASICTYPE_H
