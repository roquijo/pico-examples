#include <python.h>
#include <stdio.h>

int main() {
    Py_Initialize();

    PyRun_SimpleString("import sys");
    PyRun_SimpleString("import os");
    PyRun_SimpleString("sys.path.append(os.getcwd())");

    PyObject* my_module = PyImport_ImportModule("blink");    
    PyObject* my_function = PyObject_GetAttrString(my_module, "print")
    PyObject* my_result = PyObject_CallObject(my_function, NULL);
    Py_Finalize();

    return 0;
}
