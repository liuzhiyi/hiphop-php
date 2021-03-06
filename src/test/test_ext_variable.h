/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __TEST_EXT_VARIABLE_H__
#define __TEST_EXT_VARIABLE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtVariable : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_is_bool();
  bool test_is_int();
  bool test_is_integer();
  bool test_is_long();
  bool test_is_double();
  bool test_is_float();
  bool test_is_numeric();
  bool test_is_real();
  bool test_is_string();
  bool test_is_scalar();
  bool test_is_array();
  bool test_is_object();
  bool test_is_resource();
  bool test_is_null();
  bool test_gettype();
  bool test_get_resource_type();
  bool test_intval();
  bool test_doubleval();
  bool test_floatval();
  bool test_strval();
  bool test_settype();
  bool test_print_r();
  bool test_var_export();
  bool test_var_dump();
  bool test_debug_zval_dump();
  bool test_serialize();
  bool test_unserialize();
  bool test_get_defined_vars();
  bool test_import_request_variables();
  bool test_extract();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_VARIABLE_H__
