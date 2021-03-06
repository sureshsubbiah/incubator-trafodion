/**********************************************************************
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 1995-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
**********************************************************************/
#ifndef ELEMDDLFILEATTRINSERTLOG_H
#define ELEMDDLFILEATTRINSERTLOG_H
/* -*-C++-*-
******************************************************************************
*
* File:         ElemDDLFileAttrInsertLog.h
* Description:  class for INSERTLOG File Attribute (parse node)
*               elements in DDL statements
*
*               
* Created:      03/30/2000
* Language:     C++
*
*
*
*
******************************************************************************
*/


#include "ElemDDLFileAttr.h"


class ElemDDLFileAttrInsertLog : public ElemDDLFileAttr
{

public:

	
  // default constructor
  ElemDDLFileAttrInsertLog(NABoolean isInsertLog = FALSE)
    : ElemDDLFileAttr(ELM_FILE_ATTR_INSERT_LOG_ELEM),
      isInsertLog_(isInsertLog)
  {
  }

  // virtual destructor
  virtual ~ElemDDLFileAttrInsertLog();

  // cast
  virtual ElemDDLFileAttrInsertLog * castToElemDDLFileAttrInsertLog();

  // accessor
  NABoolean
  isInsertLog() const
  {
    return isInsertLog_;
  }

  // member functions for tracing
  virtual const NAString getText() const;
  virtual const NAString displayLabel1() const;

  // method for building text
  virtual NAString getSyntax() const;


private:

  NABoolean isInsertLog_;

}; // class ElemDDLFileAttrInsertLog

#endif // ELEMDDLFILEATTRINSERTLOG_H
