#ifndef STFS_LIBREAD_H
#define STFS_LIBREAD_H

///////////////////////////////////////////////////////////////////////////////
// 
///  \file    libread.h
///  \brief   Header file for STFSLIB_read-associated functionality
///    
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2008-2014 Hewlett-Packard Development Company, L.P.
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
///////////////////////////////////////////////////////////////////////////////

namespace STFS {

  /////////////////////////////////////
  /// function protototypes
  /////////////////////////////////////

  ssize_t STFSLIB_read ( stfs_fhndl_t pvFhandle, void *pp_Buf, size_t pv_Count);

} // namespace STFS

#endif //ifndef STFS_LIBREAD_H
