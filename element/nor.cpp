#include "nor.h"

Nor::Nor(QGraphicsItem * parent) : GraphicElement(2,8,1,1,parent){
    setOutputsOnTop(true);
    setPixmap(QPixmap(":/basic/resources/basic/nor.svg"));
    updatePorts();
}

Nor::~Nor()
{

}


