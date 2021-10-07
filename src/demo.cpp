
#include <pybind11/pybind11.h>

namespace py = pybind11;
using namespace pybind11::literals;


class MyClass {
    int number;

public:
    MyClass(int number) : number(number) {}

    void doStuff(const std::string& msg) {
        
    }

    int getNumber() const {
        return number;
    }

    void setNumber(int number) {
        this->number = number;
    }
};


PYBIND11_MODULE(demo, mod) {

    py::class_<MyClass>(mod, "MyClass")
        .def(py::init<int>(), "number"_a, "Construct a new instance of MyClass")
        .def("do_stuff", &MyClass::doStuff, "msg"_a, "Do some stuff")
        .def_property("number", &MyClass::getNumber, &MyClass::setNumber)
        .doc() = "Documentation for MyClass";

}
