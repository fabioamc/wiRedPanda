#include "inputbutton.h"

#include <QGraphicsSceneMouseEvent>
InputButton::InputButton(QGraphicsItem * parent) : GraphicElement(0,0,1,1,parent) {
  setOutputsOnTop(false);
  setPixmap(QPixmap(":/input/resources/input/button off.svg"));
  setRotatable(false);
  setBottomPosition(72);
}

InputButton::~InputButton() {

}

void InputButton::mousePressEvent(QGraphicsSceneMouseEvent * event) {
  if(event->button() == Qt::LeftButton) {
    setPixmap(QPixmap(":/input/resources/input/button on.svg"));
    setChanged(true);
  }
}

void InputButton::mouseReleaseEvent(QGraphicsSceneMouseEvent * event) {
  if(event->button() == Qt::LeftButton) {
    setPixmap(QPixmap(":/input/resources/input/button off.svg"));
    setChanged(true);
  }
}
