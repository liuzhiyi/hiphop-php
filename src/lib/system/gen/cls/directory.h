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

#ifndef __GENERATED_cls_directory_h__
#define __GENERATED_cls_directory_h__


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/directory.php line 3 */
class c_directory : virtual public ObjectData {
  BEGIN_CLASS_MAP(directory)
  END_CLASS_MAP(directory)
  DECLARE_CLASS(directory, Directory, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: Variant m_path;
  public: Variant m_handle;
  public: void t___construct(Variant v_path);
  public: ObjectData *create(Variant v_path);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: Variant t_read();
  public: Variant t_rewind();
  public: Variant t_close();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_directory_h__
