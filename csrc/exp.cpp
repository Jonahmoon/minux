#include <pybind11/pybind11.h>
namespace py = pybind11;
int add(int i, int j) 
{
    return i + j;
}
//pybind11宏用于绑定函数，exp为python模块名称
PYBIND11_MODULE(exp, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring
//add为函数名称，&add为函数指针
    m.def("add", &add, "A function which adds two numbers");
}
