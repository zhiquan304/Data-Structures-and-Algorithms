//
//  BinaryConversion.h
//  Stack
//
//  Created by JacobLan on 16/3/23.
//  Copyright © 2016年 JacobLan. All rights reserved.
//

#ifndef BinaryConversion_h
#define BinaryConversion_h


#include "lk_stack.h"
using  namespace std;


void Conversion(int willConvertNum, int toBinary)
{
    LinkStack<int> BinaryStack;
    BinaryStack.Init();
    int commercial = willConvertNum;     //商
    while (commercial != 0) {
        int remainder = commercial % toBinary;      //余数
        BinaryStack.Push(remainder);
        commercial = commercial / toBinary;
    }
    
    cout << "---Converted Number is " ;
    BinaryStack.Traverse();
    cout << "---" << endl;
    
}

void D2X()      //10进制 to x进制
{
    cout << "---What is the number ? ---" << endl;
    int saveNum;
    cin >> saveNum;
    cout << "---Which binary  do you want convert ?---" << endl;
    int saveBinary;
    cin >> saveBinary;
    Conversion(saveNum, saveBinary);

}



#endif /* BinaryConversion_h */
