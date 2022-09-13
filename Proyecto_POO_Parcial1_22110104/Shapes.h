#pragma once
#include<iostream>

class  Shape {
private:
    int x, y;
    char character;
public:
    Shape(char character, int x, int y) {
        this->character = character;
        this->x = x;
        this->y = y;
    };
    int getX();
    int getY();
    char getCharacter();
    virtual void draw() = 0;
};

class Square : public Shape {
private:
    int side, fill;
public:
    Square(char character, int x, int y, int side, int fill) : Shape(character, x, y) {
        this->side = side;
        this->fill = fill;
    };
    int getSide();
    int getFill();
    void draw();
};

class Triangle : public Shape {
private:
    int height;
public:
    Triangle(char character, int x, int y, int height) : Shape(character, x, y) {
        this->height = height;
    };
    int getHeight();
    void draw();
};

class Circle : public Shape {
private:
    int radius;
public:
    Circle(char character, int x, int y, int radius) : Shape(character, x, y) {
        this->radius = radius;
    };
    int getRadius();
    void draw();
};
