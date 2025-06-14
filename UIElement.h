#ifndef UIELEMENT_H
#define UIELEMENT_H

class UIElement {
public:
    virtual void draw() = 0;
    virtual void click() = 0;
    virtual bool hover() = 0;
    virtual ~UIElement() {}
};

#endif