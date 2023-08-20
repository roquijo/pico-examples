#include <Python.h>
#include <stdio.h>

int main() {
    Py_Initialize();
    PyObject* my_module = PyImport_ImportModule("blink");    
    PyObject* my_result = PyObject_CallObject(my_function, NULL);
    Py_Finalize();

    return 0;
}
