#include <stdlib.h>
#include "nodeClass.h"


/* set */
void nodeClass::setValue(int newValue){
    value = newValue;
}


/* get */
int nodeClass::getValue(){
    return value;
}

nodeClass::nodeClass(int initialValue){
    rightNode = nullptr;
    leftNode = nullptr;
    value = initialValue;
}
