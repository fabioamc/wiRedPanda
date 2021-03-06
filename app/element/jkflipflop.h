/*
 * Copyright 2015 - 2021, GIBIS-Unifesp and the wiRedPanda contributors
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef JKFLIPFLOP_H
#define JKFLIPFLOP_H

#include "graphicelement.h"

class JKFlipFlop : public GraphicElement
{
    bool lastClk;

public:
    explicit JKFlipFlop(QGraphicsItem *parent = nullptr);
    ~JKFlipFlop() override = default;

    void updatePorts() override;
    void setSkin(bool defaultSkin, QString filename) override;
};

#endif /* JKFLIPFLOP_H */
