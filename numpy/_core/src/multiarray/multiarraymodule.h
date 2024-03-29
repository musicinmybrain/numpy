#ifndef NUMPY_CORE_SRC_MULTIARRAY_MULTIARRAYMODULE_H_
#define NUMPY_CORE_SRC_MULTIARRAY_MULTIARRAYMODULE_H_

NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_current_allocator;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_array;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_array_function;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_array_struct;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_array_priority;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_array_interface;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_array_wrap;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_array_finalize;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_implementation;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_axis1;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_axis2;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_like;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_numpy;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_where;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_convert;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_preserve;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_convert_if_no_array;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_cpu;
NPY_VISIBILITY_HIDDEN extern PyObject * npy_ma_str_array_err_msg_substr;

NPY_NO_EXPORT npy_intp
PyArray_SafeCast(PyArray_Descr *type1, PyArray_Descr *type2,
                 npy_intp* view_offset, NPY_CASTING minimum_safety,
                 npy_intp ignore_errors);

#endif  /* NUMPY_CORE_SRC_MULTIARRAY_MULTIARRAYMODULE_H_ */
