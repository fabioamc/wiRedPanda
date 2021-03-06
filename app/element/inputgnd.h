/*
 * Copyright 2015 - 2021, GIBIS-Unifesp and the wiRedPanda contributors
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INPUTGND_H
#define INPUTGND_H

#include "graphicelement.h"

class InputGnd : public GraphicElement
{
public:
    explicit InputGnd(QGraphicsItem *parent = nullptr);
    ~InputGnd() override = default;
public:
    void setSkin(bool defaultSkin, QString filename) override;
};

#endif /* INPUTGND_H */
