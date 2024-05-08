#ifndef VOIDPTR_LIBRARY_H
#define VOIDPTR_LIBRARY_H

#include <glob.h>

//  void* data_in  -- указатель на вх. данные
//  int len_in     -- записанное кол-во байт вх. данных
//  void* data_out -- указатель на вых. данные
//  int len_out    -- максимальное кол-во байт вых. данных
//  return         -- записанное кол-во байт вых. данных
int myFunc(void* data_in, int len_in, void* data_out, int len_out);

#endif //VOIDPTR_LIBRARY_H
