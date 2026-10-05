/**
 * Problem: Dynamic Dispatch with Abstract Classes & Virtual Functions
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <vector>
#include <memory>

// Abstract Base Class / Interface
class Shape {
public:
    virtual ~Shape() = default; // Crucial virtual destructor for proper cleanup
    virtual double area() const = 0;       // Pure virtual function
    virtual void draw() const = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override { return 3.14159 * radius * radius; }
    void draw() const override { std::cout << "Drawing Circle (radius=" << radius << ")\n"; }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
    void draw() const override { std::cout << "Drawing Rectangle (" << width << "x" << height << ")\n"; }
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>(4.0));
    shapes.push_back(std::make_unique<Rectangle>(5.0, 3.0));

    std::cout << "--- Polymorphic Dispatch Demonstration ---\n";
    for (const auto &s : shapes) {
        s->draw();
        std::cout << "Calculated Area: " << s->area() << "\n";
    }
    return 0;
}
