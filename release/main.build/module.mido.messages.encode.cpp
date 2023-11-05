/* Generated code for Python module 'mido.messages.encode'
 * created by Nuitka version 1.4.2
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_mido$messages$encode" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mido$messages$encode;
PyDictObject *moduledict_mido$messages$encode;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[64];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[64];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("mido.messages.encode"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 64; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_mido$messages$encode(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 64; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_60b1fd4b269c748b6200f59c2561bbef;
static PyCodeObject *codeobj_b9706ea0462527bf995343958ec14626;
static PyCodeObject *codeobj_7faf31e2d6016cf0da9a490b5c126d79;
static PyCodeObject *codeobj_9bd8c906a43a11204967dd068c7f635e;
static PyCodeObject *codeobj_708b82b8de5a2375783c71208b9e6821;
static PyCodeObject *codeobj_c0af428c2299ad85c03b21d6c4f7a39a;
static PyCodeObject *codeobj_cf6a7ab2a6dee636ee49476b7c971961;
static PyCodeObject *codeobj_b6df7a03a3cb93c9de73b5f4cbd39e84;
static PyCodeObject *codeobj_ae4404e90652caa6065338892b343d38;
static PyCodeObject *codeobj_90e7250baed08173799fb3259f2ad858;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[55]); CHECK_OBJECT(module_filename_obj);
    codeobj_60b1fd4b269c748b6200f59c2561bbef = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[57], NULL, 1, 0, 0);
    codeobj_b9706ea0462527bf995343958ec14626 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[58], mod_consts[58], NULL, NULL, 0, 0, 0);
    codeobj_7faf31e2d6016cf0da9a490b5c126d79 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[59], NULL, 1, 0, 0);
    codeobj_9bd8c906a43a11204967dd068c7f635e = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[59], NULL, 1, 0, 0);
    codeobj_708b82b8de5a2375783c71208b9e6821 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[59], NULL, 1, 0, 0);
    codeobj_c0af428c2299ad85c03b21d6c4f7a39a = MAKE_CODE_OBJECT(module_filename_obj, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[60], NULL, 1, 0, 0);
    codeobj_cf6a7ab2a6dee636ee49476b7c971961 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[59], NULL, 1, 0, 0);
    codeobj_b6df7a03a3cb93c9de73b5f4cbd39e84 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[61], NULL, 1, 0, 0);
    codeobj_ae4404e90652caa6065338892b343d38 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[59], NULL, 1, 0, 0);
    codeobj_90e7250baed08173799fb3259f2ad858 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[62], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__1__encode_pitchwheel();


static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__2__encode_sysex();


static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__3__encode_quarter_frame();


static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__4__encode_songpos();


static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__5__encode_note_off();


static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__6__encode_note_on();


static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__7__encode_control_change();


static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__8_encode_message();


// The module function definitions.
static PyObject *impl_mido$messages$encode$$$function__1__encode_pitchwheel(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    PyObject *var_pitch = NULL;
    struct Nuitka_FrameObject *frame_c0af428c2299ad85c03b21d6c4f7a39a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c0af428c2299ad85c03b21d6c4f7a39a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c0af428c2299ad85c03b21d6c4f7a39a)) {
        Py_XDECREF(cache_frame_c0af428c2299ad85c03b21d6c4f7a39a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0af428c2299ad85c03b21d6c4f7a39a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0af428c2299ad85c03b21d6c4f7a39a = MAKE_FUNCTION_FRAME(codeobj_c0af428c2299ad85c03b21d6c4f7a39a, module_mido$messages$encode, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c0af428c2299ad85c03b21d6c4f7a39a->m_type_description == NULL);
    frame_c0af428c2299ad85c03b21d6c4f7a39a = cache_frame_c0af428c2299ad85c03b21d6c4f7a39a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c0af428c2299ad85c03b21d6c4f7a39a);
    assert(Py_REFCNT(frame_c0af428c2299ad85c03b21d6c4f7a39a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_msg);
        tmp_expression_value_1 = par_msg;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_sub_expr_right_1 == NULL)) {
            tmp_sub_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 5;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_pitch == NULL);
        var_pitch = tmp_assign_source_1;
    }
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_bitor_expr_left_1 = mod_consts[2];
        CHECK_OBJECT(par_msg);
        tmp_expression_value_2 = par_msg;
        tmp_subscript_value_2 = mod_consts[3];
        tmp_bitor_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BINARY_OPERATION_BITOR_OBJECT_LONG_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_bitand_expr_left_1;
            PyObject *tmp_bitand_expr_right_1;
            PyObject *tmp_rshift_expr_left_1;
            PyObject *tmp_rshift_expr_right_1;
            PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
            CHECK_OBJECT(var_pitch);
            tmp_bitand_expr_left_1 = var_pitch;
            tmp_bitand_expr_right_1 = mod_consts[4];
            tmp_list_element_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 1, tmp_list_element_1);
            CHECK_OBJECT(var_pitch);
            tmp_rshift_expr_left_1 = var_pitch;
            tmp_rshift_expr_right_1 = mod_consts[5];
            tmp_list_element_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c0af428c2299ad85c03b21d6c4f7a39a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0af428c2299ad85c03b21d6c4f7a39a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0af428c2299ad85c03b21d6c4f7a39a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0af428c2299ad85c03b21d6c4f7a39a,
        type_description_1,
        par_msg,
        var_pitch
    );


    // Release cached frame if used for exception.
    if (frame_c0af428c2299ad85c03b21d6c4f7a39a == cache_frame_c0af428c2299ad85c03b21d6c4f7a39a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0af428c2299ad85c03b21d6c4f7a39a);
        cache_frame_c0af428c2299ad85c03b21d6c4f7a39a = NULL;
    }

    assertFrameObject(frame_c0af428c2299ad85c03b21d6c4f7a39a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_pitch);
    Py_DECREF(var_pitch);
    var_pitch = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_pitch);
    var_pitch = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mido$messages$encode$$$function__2__encode_sysex(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_ae4404e90652caa6065338892b343d38;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae4404e90652caa6065338892b343d38 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae4404e90652caa6065338892b343d38)) {
        Py_XDECREF(cache_frame_ae4404e90652caa6065338892b343d38);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae4404e90652caa6065338892b343d38 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae4404e90652caa6065338892b343d38 = MAKE_FUNCTION_FRAME(codeobj_ae4404e90652caa6065338892b343d38, module_mido$messages$encode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ae4404e90652caa6065338892b343d38->m_type_description == NULL);
    frame_ae4404e90652caa6065338892b343d38 = cache_frame_ae4404e90652caa6065338892b343d38;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_ae4404e90652caa6065338892b343d38);
    assert(Py_REFCNT(frame_ae4404e90652caa6065338892b343d38) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_add_expr_left_2 = LIST_COPY(mod_consts[6]);
        CHECK_OBJECT(par_msg);
        tmp_expression_value_1 = par_msg;
        tmp_subscript_value_1 = mod_consts[7];
        tmp_list_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 10;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 10;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = LIST_COPY(mod_consts[8]);
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        assert(!(tmp_return_value == NULL));
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae4404e90652caa6065338892b343d38, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae4404e90652caa6065338892b343d38->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae4404e90652caa6065338892b343d38, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae4404e90652caa6065338892b343d38,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_ae4404e90652caa6065338892b343d38 == cache_frame_ae4404e90652caa6065338892b343d38) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae4404e90652caa6065338892b343d38);
        cache_frame_ae4404e90652caa6065338892b343d38 = NULL;
    }

    assertFrameObject(frame_ae4404e90652caa6065338892b343d38);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mido$messages$encode$$$function__3__encode_quarter_frame(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_cf6a7ab2a6dee636ee49476b7c971961;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf6a7ab2a6dee636ee49476b7c971961 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf6a7ab2a6dee636ee49476b7c971961)) {
        Py_XDECREF(cache_frame_cf6a7ab2a6dee636ee49476b7c971961);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf6a7ab2a6dee636ee49476b7c971961 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf6a7ab2a6dee636ee49476b7c971961 = MAKE_FUNCTION_FRAME(codeobj_cf6a7ab2a6dee636ee49476b7c971961, module_mido$messages$encode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cf6a7ab2a6dee636ee49476b7c971961->m_type_description == NULL);
    frame_cf6a7ab2a6dee636ee49476b7c971961 = cache_frame_cf6a7ab2a6dee636ee49476b7c971961;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_cf6a7ab2a6dee636ee49476b7c971961);
    assert(Py_REFCNT(frame_cf6a7ab2a6dee636ee49476b7c971961) == 2);

    // Framed code:
    {
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[9];
        tmp_return_value = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_bitor_expr_left_1;
            PyObject *tmp_bitor_expr_right_1;
            PyObject *tmp_lshift_expr_left_1;
            PyObject *tmp_lshift_expr_right_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyList_SET_ITEM0(tmp_return_value, 0, tmp_list_element_1);
            CHECK_OBJECT(par_msg);
            tmp_expression_value_1 = par_msg;
            tmp_subscript_value_1 = mod_consts[10];
            tmp_lshift_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            if (tmp_lshift_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_lshift_expr_right_1 = mod_consts[11];
            tmp_bitor_expr_left_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
            Py_DECREF(tmp_lshift_expr_left_1);
            if (tmp_bitor_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_msg);
            tmp_expression_value_2 = par_msg;
            tmp_subscript_value_2 = mod_consts[12];
            tmp_bitor_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_bitor_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_bitor_expr_left_1);

                exception_lineno = 14;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
            Py_DECREF(tmp_bitor_expr_left_1);
            Py_DECREF(tmp_bitor_expr_right_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf6a7ab2a6dee636ee49476b7c971961, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf6a7ab2a6dee636ee49476b7c971961->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf6a7ab2a6dee636ee49476b7c971961, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf6a7ab2a6dee636ee49476b7c971961,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_cf6a7ab2a6dee636ee49476b7c971961 == cache_frame_cf6a7ab2a6dee636ee49476b7c971961) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf6a7ab2a6dee636ee49476b7c971961);
        cache_frame_cf6a7ab2a6dee636ee49476b7c971961 = NULL;
    }

    assertFrameObject(frame_cf6a7ab2a6dee636ee49476b7c971961);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mido$messages$encode$$$function__4__encode_songpos(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_pos = NULL;
    struct Nuitka_FrameObject *frame_b6df7a03a3cb93c9de73b5f4cbd39e84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b6df7a03a3cb93c9de73b5f4cbd39e84 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b6df7a03a3cb93c9de73b5f4cbd39e84)) {
        Py_XDECREF(cache_frame_b6df7a03a3cb93c9de73b5f4cbd39e84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6df7a03a3cb93c9de73b5f4cbd39e84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6df7a03a3cb93c9de73b5f4cbd39e84 = MAKE_FUNCTION_FRAME(codeobj_b6df7a03a3cb93c9de73b5f4cbd39e84, module_mido$messages$encode, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b6df7a03a3cb93c9de73b5f4cbd39e84->m_type_description == NULL);
    frame_b6df7a03a3cb93c9de73b5f4cbd39e84 = cache_frame_b6df7a03a3cb93c9de73b5f4cbd39e84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b6df7a03a3cb93c9de73b5f4cbd39e84);
    assert(Py_REFCNT(frame_b6df7a03a3cb93c9de73b5f4cbd39e84) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_data);
        tmp_expression_value_1 = par_data;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_pos == NULL);
        var_pos = tmp_assign_source_1;
    }
    {
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = mod_consts[14];
        tmp_return_value = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_bitand_expr_left_1;
            PyObject *tmp_bitand_expr_right_1;
            PyObject *tmp_rshift_expr_left_1;
            PyObject *tmp_rshift_expr_right_1;
            PyList_SET_ITEM0(tmp_return_value, 0, tmp_list_element_1);
            CHECK_OBJECT(var_pos);
            tmp_bitand_expr_left_1 = var_pos;
            tmp_bitand_expr_right_1 = mod_consts[4];
            tmp_list_element_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 1, tmp_list_element_1);
            CHECK_OBJECT(var_pos);
            tmp_rshift_expr_left_1 = var_pos;
            tmp_rshift_expr_right_1 = mod_consts[5];
            tmp_list_element_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6df7a03a3cb93c9de73b5f4cbd39e84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6df7a03a3cb93c9de73b5f4cbd39e84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6df7a03a3cb93c9de73b5f4cbd39e84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6df7a03a3cb93c9de73b5f4cbd39e84,
        type_description_1,
        par_data,
        var_pos
    );


    // Release cached frame if used for exception.
    if (frame_b6df7a03a3cb93c9de73b5f4cbd39e84 == cache_frame_b6df7a03a3cb93c9de73b5f4cbd39e84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b6df7a03a3cb93c9de73b5f4cbd39e84);
        cache_frame_b6df7a03a3cb93c9de73b5f4cbd39e84 = NULL;
    }

    assertFrameObject(frame_b6df7a03a3cb93c9de73b5f4cbd39e84);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_pos);
    Py_DECREF(var_pos);
    var_pos = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_pos);
    var_pos = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mido$messages$encode$$$function__5__encode_note_off(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_9bd8c906a43a11204967dd068c7f635e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9bd8c906a43a11204967dd068c7f635e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9bd8c906a43a11204967dd068c7f635e)) {
        Py_XDECREF(cache_frame_9bd8c906a43a11204967dd068c7f635e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9bd8c906a43a11204967dd068c7f635e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9bd8c906a43a11204967dd068c7f635e = MAKE_FUNCTION_FRAME(codeobj_9bd8c906a43a11204967dd068c7f635e, module_mido$messages$encode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9bd8c906a43a11204967dd068c7f635e->m_type_description == NULL);
    frame_9bd8c906a43a11204967dd068c7f635e = cache_frame_9bd8c906a43a11204967dd068c7f635e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_9bd8c906a43a11204967dd068c7f635e);
    assert(Py_REFCNT(frame_9bd8c906a43a11204967dd068c7f635e) == 2);

    // Framed code:
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_bitor_expr_left_1 = mod_consts[15];
        CHECK_OBJECT(par_msg);
        tmp_expression_value_1 = par_msg;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_bitor_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BINARY_OPERATION_BITOR_OBJECT_LONG_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
            CHECK_OBJECT(par_msg);
            tmp_expression_value_2 = par_msg;
            tmp_subscript_value_2 = mod_consts[16];
            tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 1, tmp_list_element_1);
            CHECK_OBJECT(par_msg);
            tmp_expression_value_3 = par_msg;
            tmp_subscript_value_3 = mod_consts[17];
            tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9bd8c906a43a11204967dd068c7f635e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9bd8c906a43a11204967dd068c7f635e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9bd8c906a43a11204967dd068c7f635e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9bd8c906a43a11204967dd068c7f635e,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_9bd8c906a43a11204967dd068c7f635e == cache_frame_9bd8c906a43a11204967dd068c7f635e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9bd8c906a43a11204967dd068c7f635e);
        cache_frame_9bd8c906a43a11204967dd068c7f635e = NULL;
    }

    assertFrameObject(frame_9bd8c906a43a11204967dd068c7f635e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mido$messages$encode$$$function__6__encode_note_on(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_708b82b8de5a2375783c71208b9e6821;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_708b82b8de5a2375783c71208b9e6821 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_708b82b8de5a2375783c71208b9e6821)) {
        Py_XDECREF(cache_frame_708b82b8de5a2375783c71208b9e6821);

#if _DEBUG_REFCOUNTS
        if (cache_frame_708b82b8de5a2375783c71208b9e6821 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_708b82b8de5a2375783c71208b9e6821 = MAKE_FUNCTION_FRAME(codeobj_708b82b8de5a2375783c71208b9e6821, module_mido$messages$encode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_708b82b8de5a2375783c71208b9e6821->m_type_description == NULL);
    frame_708b82b8de5a2375783c71208b9e6821 = cache_frame_708b82b8de5a2375783c71208b9e6821;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_708b82b8de5a2375783c71208b9e6821);
    assert(Py_REFCNT(frame_708b82b8de5a2375783c71208b9e6821) == 2);

    // Framed code:
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_bitor_expr_left_1 = mod_consts[18];
        CHECK_OBJECT(par_msg);
        tmp_expression_value_1 = par_msg;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_bitor_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BINARY_OPERATION_BITOR_OBJECT_LONG_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
            CHECK_OBJECT(par_msg);
            tmp_expression_value_2 = par_msg;
            tmp_subscript_value_2 = mod_consts[16];
            tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 1, tmp_list_element_1);
            CHECK_OBJECT(par_msg);
            tmp_expression_value_3 = par_msg;
            tmp_subscript_value_3 = mod_consts[17];
            tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_708b82b8de5a2375783c71208b9e6821, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_708b82b8de5a2375783c71208b9e6821->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_708b82b8de5a2375783c71208b9e6821, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_708b82b8de5a2375783c71208b9e6821,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_708b82b8de5a2375783c71208b9e6821 == cache_frame_708b82b8de5a2375783c71208b9e6821) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_708b82b8de5a2375783c71208b9e6821);
        cache_frame_708b82b8de5a2375783c71208b9e6821 = NULL;
    }

    assertFrameObject(frame_708b82b8de5a2375783c71208b9e6821);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mido$messages$encode$$$function__7__encode_control_change(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    struct Nuitka_FrameObject *frame_7faf31e2d6016cf0da9a490b5c126d79;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7faf31e2d6016cf0da9a490b5c126d79 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7faf31e2d6016cf0da9a490b5c126d79)) {
        Py_XDECREF(cache_frame_7faf31e2d6016cf0da9a490b5c126d79);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7faf31e2d6016cf0da9a490b5c126d79 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7faf31e2d6016cf0da9a490b5c126d79 = MAKE_FUNCTION_FRAME(codeobj_7faf31e2d6016cf0da9a490b5c126d79, module_mido$messages$encode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7faf31e2d6016cf0da9a490b5c126d79->m_type_description == NULL);
    frame_7faf31e2d6016cf0da9a490b5c126d79 = cache_frame_7faf31e2d6016cf0da9a490b5c126d79;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_7faf31e2d6016cf0da9a490b5c126d79);
    assert(Py_REFCNT(frame_7faf31e2d6016cf0da9a490b5c126d79) == 2);

    // Framed code:
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_bitor_expr_left_1 = mod_consts[19];
        CHECK_OBJECT(par_msg);
        tmp_expression_value_1 = par_msg;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_bitor_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BINARY_OPERATION_BITOR_OBJECT_LONG_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
            CHECK_OBJECT(par_msg);
            tmp_expression_value_2 = par_msg;
            tmp_subscript_value_2 = mod_consts[20];
            tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 1, tmp_list_element_1);
            CHECK_OBJECT(par_msg);
            tmp_expression_value_3 = par_msg;
            tmp_subscript_value_3 = mod_consts[21];
            tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_return_value, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7faf31e2d6016cf0da9a490b5c126d79, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7faf31e2d6016cf0da9a490b5c126d79->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7faf31e2d6016cf0da9a490b5c126d79, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7faf31e2d6016cf0da9a490b5c126d79,
        type_description_1,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_7faf31e2d6016cf0da9a490b5c126d79 == cache_frame_7faf31e2d6016cf0da9a490b5c126d79) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7faf31e2d6016cf0da9a490b5c126d79);
        cache_frame_7faf31e2d6016cf0da9a490b5c126d79 = NULL;
    }

    assertFrameObject(frame_7faf31e2d6016cf0da9a490b5c126d79);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mido$messages$encode$$$function__8_encode_message(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    PyObject *var_encode = NULL;
    PyObject *var_spec = NULL;
    PyObject *var_status_byte = NULL;
    PyObject *var_data = NULL;
    PyObject *outline_0_var_name = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_90e7250baed08173799fb3259f2ad858;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_FrameObject *frame_60b1fd4b269c748b6200f59c2561bbef_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_60b1fd4b269c748b6200f59c2561bbef_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_90e7250baed08173799fb3259f2ad858 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_90e7250baed08173799fb3259f2ad858)) {
        Py_XDECREF(cache_frame_90e7250baed08173799fb3259f2ad858);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90e7250baed08173799fb3259f2ad858 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90e7250baed08173799fb3259f2ad858 = MAKE_FUNCTION_FRAME(codeobj_90e7250baed08173799fb3259f2ad858, module_mido$messages$encode, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_90e7250baed08173799fb3259f2ad858->m_type_description == NULL);
    frame_90e7250baed08173799fb3259f2ad858 = cache_frame_90e7250baed08173799fb3259f2ad858;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_90e7250baed08173799fb3259f2ad858);
    assert(Py_REFCNT(frame_90e7250baed08173799fb3259f2ad858) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_msg);
        tmp_expression_value_2 = par_msg;
        tmp_subscript_value_1 = mod_consts[24];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_90e7250baed08173799fb3259f2ad858->m_frame.f_lineno = 56;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_encode == NULL);
        var_encode = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_encode);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_encode);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_encode);
        tmp_called_value_2 = var_encode;
        CHECK_OBJECT(par_msg);
        tmp_args_element_value_2 = par_msg;
        frame_90e7250baed08173799fb3259f2ad858->m_frame.f_lineno = 58;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_msg);
        tmp_expression_value_4 = par_msg;
        tmp_subscript_value_3 = mod_consts[24];
        tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spec == NULL);
        var_spec = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_spec);
        tmp_expression_value_5 = var_spec;
        tmp_subscript_value_4 = mod_consts[26];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_status_byte == NULL);
        var_status_byte = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_status_byte);
        tmp_cmp_expr_left_1 = var_status_byte;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_ibitor_expr_left_1;
        PyObject *tmp_ibitor_expr_right_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_status_byte);
        tmp_ibitor_expr_left_1 = var_status_byte;
        CHECK_OBJECT(par_msg);
        tmp_expression_value_6 = par_msg;
        tmp_subscript_value_5 = mod_consts[3];
        tmp_ibitor_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_5);
        if (tmp_ibitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
        Py_DECREF(tmp_ibitor_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_ibitor_expr_left_1;
        var_status_byte = tmp_assign_source_4;

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_6;
            CHECK_OBJECT(var_spec);
            tmp_expression_value_7 = var_spec;
            tmp_subscript_value_6 = mod_consts[28];
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_6);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_7;
        }
        if (isFrameUnusable(cache_frame_60b1fd4b269c748b6200f59c2561bbef_2)) {
            Py_XDECREF(cache_frame_60b1fd4b269c748b6200f59c2561bbef_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_60b1fd4b269c748b6200f59c2561bbef_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_60b1fd4b269c748b6200f59c2561bbef_2 = MAKE_FUNCTION_FRAME(codeobj_60b1fd4b269c748b6200f59c2561bbef, module_mido$messages$encode, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_60b1fd4b269c748b6200f59c2561bbef_2->m_type_description == NULL);
        frame_60b1fd4b269c748b6200f59c2561bbef_2 = cache_frame_60b1fd4b269c748b6200f59c2561bbef_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStack(frame_60b1fd4b269c748b6200f59c2561bbef_2);
        assert(Py_REFCNT(frame_60b1fd4b269c748b6200f59c2561bbef_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 66;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_name;
                outline_0_var_name = tmp_assign_source_9;
                Py_INCREF(outline_0_var_name);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(outline_0_var_name);
            tmp_cmp_expr_left_2 = outline_0_var_name;
            tmp_cmp_expr_right_2 = mod_consts[3];
            tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_7;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(par_msg);
            tmp_expression_value_8 = par_msg;
            CHECK_OBJECT(outline_0_var_name);
            tmp_subscript_value_7 = outline_0_var_name;
            tmp_append_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_7);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        branch_no_3:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_5);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_60b1fd4b269c748b6200f59c2561bbef_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_60b1fd4b269c748b6200f59c2561bbef_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_60b1fd4b269c748b6200f59c2561bbef_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_60b1fd4b269c748b6200f59c2561bbef_2,
            type_description_2,
            outline_0_var_name,
            par_msg
        );


        // Release cached frame if used for exception.
        if (frame_60b1fd4b269c748b6200f59c2561bbef_2 == cache_frame_60b1fd4b269c748b6200f59c2561bbef_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_60b1fd4b269c748b6200f59c2561bbef_2);
            cache_frame_60b1fd4b269c748b6200f59c2561bbef_2 = NULL;
        }

        assertFrameObject(frame_60b1fd4b269c748b6200f59c2561bbef_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_name);
        outline_0_var_name = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_name);
        outline_0_var_name = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 66;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_data == NULL);
        var_data = tmp_assign_source_5;
    }
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_status_byte);
        tmp_list_element_1 = var_status_byte;
        tmp_add_expr_left_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_add_expr_left_1, 0, tmp_list_element_1);
        CHECK_OBJECT(var_data);
        tmp_add_expr_right_1 = var_data;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_90e7250baed08173799fb3259f2ad858, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90e7250baed08173799fb3259f2ad858->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90e7250baed08173799fb3259f2ad858, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90e7250baed08173799fb3259f2ad858,
        type_description_1,
        par_msg,
        var_encode,
        var_spec,
        var_status_byte,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_90e7250baed08173799fb3259f2ad858 == cache_frame_90e7250baed08173799fb3259f2ad858) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90e7250baed08173799fb3259f2ad858);
        cache_frame_90e7250baed08173799fb3259f2ad858 = NULL;
    }

    assertFrameObject(frame_90e7250baed08173799fb3259f2ad858);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_encode);
    Py_DECREF(var_encode);
    var_encode = NULL;
    Py_XDECREF(var_spec);
    var_spec = NULL;
    Py_XDECREF(var_status_byte);
    var_status_byte = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_encode);
    var_encode = NULL;
    Py_XDECREF(var_spec);
    var_spec = NULL;
    Py_XDECREF(var_status_byte);
    var_status_byte = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__1__encode_pitchwheel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mido$messages$encode$$$function__1__encode_pitchwheel,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c0af428c2299ad85c03b21d6c4f7a39a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mido$messages$encode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__2__encode_sysex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mido$messages$encode$$$function__2__encode_sysex,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ae4404e90652caa6065338892b343d38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mido$messages$encode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__3__encode_quarter_frame() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mido$messages$encode$$$function__3__encode_quarter_frame,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cf6a7ab2a6dee636ee49476b7c971961,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mido$messages$encode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__4__encode_songpos() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mido$messages$encode$$$function__4__encode_songpos,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b6df7a03a3cb93c9de73b5f4cbd39e84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mido$messages$encode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__5__encode_note_off() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mido$messages$encode$$$function__5__encode_note_off,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9bd8c906a43a11204967dd068c7f635e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mido$messages$encode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__6__encode_note_on() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mido$messages$encode$$$function__6__encode_note_on,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_708b82b8de5a2375783c71208b9e6821,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mido$messages$encode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__7__encode_control_change() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mido$messages$encode$$$function__7__encode_control_change,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7faf31e2d6016cf0da9a490b5c126d79,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mido$messages$encode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mido$messages$encode$$$function__8_encode_message() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mido$messages$encode$$$function__8_encode_message,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_90e7250baed08173799fb3259f2ad858,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mido$messages$encode,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_mido$messages$encode[] = {
    impl_mido$messages$encode$$$function__1__encode_pitchwheel,
    impl_mido$messages$encode$$$function__2__encode_sysex,
    impl_mido$messages$encode$$$function__3__encode_quarter_frame,
    impl_mido$messages$encode$$$function__4__encode_songpos,
    impl_mido$messages$encode$$$function__5__encode_note_off,
    impl_mido$messages$encode$$$function__6__encode_note_on,
    impl_mido$messages$encode$$$function__7__encode_control_change,
    impl_mido$messages$encode$$$function__8_encode_message,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_mido$messages$encode;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_mido$messages$encode) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_mido$messages$encode[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_mido$messages$encode,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_mido$messages$encode(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("mido.messages.encode");

    // Store the module for future use.
    module_mido$messages$encode = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("mido.messages.encode: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("mido.messages.encode: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("mido.messages.encode: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initmido$messages$encode\n");

    moduledict_mido$messages$encode = MODULE_DICT(module_mido$messages$encode);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_mido$messages$encode,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_mido$messages$encode,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[63]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_mido$messages$encode,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_mido$messages$encode,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_mido$messages$encode,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_mido$messages$encode);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_mido$messages$encode, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_mido$messages$encode, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_mido$messages$encode, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_mido$messages$encode);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_b9706ea0462527bf995343958ec14626;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_2);
    }
    frame_b9706ea0462527bf995343958ec14626 = MAKE_MODULE_FRAME(codeobj_b9706ea0462527bf995343958ec14626, module_mido$messages$encode);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b9706ea0462527bf995343958ec14626);
    assert(Py_REFCNT(frame_b9706ea0462527bf995343958ec14626) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[36];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_mido$messages$encode;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[37];
        tmp_level_value_1 = mod_consts[38];
        frame_b9706ea0462527bf995343958ec14626->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_mido$messages$encode,
                mod_consts[27],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[27]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_mido$messages$encode,
                mod_consts[25],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[25]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_mido$messages$encode,
                mod_consts[1],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[1]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9706ea0462527bf995343958ec14626, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9706ea0462527bf995343958ec14626->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9706ea0462527bf995343958ec14626, exception_lineno);
    }



    assertFrameObject(frame_b9706ea0462527bf995343958ec14626);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_mido$messages$encode$$$function__1__encode_pitchwheel();

        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_mido$messages$encode$$$function__2__encode_sysex();

        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_mido$messages$encode$$$function__3__encode_quarter_frame();

        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_mido$messages$encode$$$function__4__encode_songpos();

        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_mido$messages$encode$$$function__5__encode_note_off();

        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_mido$messages$encode$$$function__6__encode_note_on();

        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_mido$messages$encode$$$function__7__encode_control_change();

        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[47];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_assign_source_15 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[48];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[49];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[50];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[51];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[52];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[53];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_mido$messages$encode$$$function__8_encode_message();

        UPDATE_STRING_DICT1(moduledict_mido$messages$encode, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_16);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("mido.messages.encode", false);

    Py_INCREF(module_mido$messages$encode);
    return module_mido$messages$encode;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mido$messages$encode, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("mido$messages$encode", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
