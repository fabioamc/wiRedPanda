/*
 * Copyright 2015 - 2021, GIBIS-Unifesp and the wiRedPanda contributors
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef XNOR_H
#define XNOR_H

#include "graphicelement.h"

class Xnor : public GraphicElement
{
public:
    explicit Xnor(QGraphicsItem *parent = nullptr);
    ~Xnor() override = default;
    void setSkin(bool defaultSkin, QString filename) override;
};

#endif /* Xnor_H */
