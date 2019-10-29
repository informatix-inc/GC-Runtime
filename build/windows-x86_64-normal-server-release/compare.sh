#!/bin/bash
#
# Copyright (c) 2012, 2014, Oracle and/or its affiliates. All rights reserved.
# DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
#
# This code is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License version 2 only, as
# published by the Free Software Foundation.
#
# This code is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
# version 2 for more details (a copy is included in the LICENSE file that
# accompanied this code).
#
# You should have received a copy of the GNU General Public License version
# 2 along with this work; if not, write to the Free Software Foundation,
# Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
#
# Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
# or visit www.oracle.com if you need additional information or have any
# questions.
#

# This script is processed by configure before it's usable. It is run from
# the root of the build directory.


##########################################################################################
# Substitutions from autoconf

LEGACY_BUILD_DIR=windows-amd64

OPENJDK_TARGET_OS="windows"
OPENJDK_TARGET_CPU="x86_64"

AWK="gawk"
CAT="/usr/bin/cat"
CMP="/usr/bin/cmp"
CP="/usr/bin/cp"
CUT="/usr/bin/cut"
DIFF="/usr/bin/diff"
DUMPBIN="/cygdrive/c/cygwin64/home/fujimoto/openjdk-jdk8u/build/windows-x86_64-normal-server-release/fixpath.exe -c /cygdrive/c/progra~2/micros~1.0/vc/bin/x86_am~1/dumpbin"
EXPR="/usr/bin/expr"
FILE="/usr/bin/file"
FIND="/usr/bin/find"
GREP="/usr/bin/grep"
JAVAP="/cygdrive/c/cygwin64/home/fujimoto/openjdk-jdk8u/build/windows-x86_64-normal-server-release/fixpath.exe -c /cygdrive/c/AdoptOpenJDK/prerequisite/jdk7/bin/javap"
LDD="/usr/bin/ldd"
MKDIR="/usr/bin/mkdir"
NAWK="/usr/bin/gawk"
NM=""
OBJDUMP="/usr/bin/objdump"
OTOOL=""
PRINTF="/usr/bin/printf"
READELF="/usr/bin/readelf"
RM="/usr/bin/rm -f"
SED="/usr/bin/sed"
SORT="/usr/bin/sort"
STAT="/usr/bin/stat"
STRIP=""
TEE="/usr/bin/tee"
UNIQ="/usr/bin/uniq"
UNPACK200="/cygdrive/c/cygwin64/home/fujimoto/openjdk-jdk8u/build/windows-x86_64-normal-server-release/fixpath.exe -c /cygdrive/c/AdoptOpenJDK/prerequisite/jdk7/bin/unpack200"
UNZIP="/usr/bin/unzip"

SRC_ROOT="/cygdrive/c/cygwin64/home/fujimoto/openjdk-jdk8u"

if [ "$OPENJDK_TARGET_OS" = "windows" ]; then
  PATH="/cygdrive/c/Program Files (x86)/Microsoft Visual Studio 12.0/Common7/IDE/CommonExtensions/Microsoft/TestWindow:/cygdrive/c/Program Files (x86)/MSBuild/12.0/bin:/cygdrive/c/Program Files (x86)/Microsoft Visual Studio 12.0/Common7/IDE:/cygdrive/c/Program Files (x86)/Microsoft Visual Studio 12.0/VC/BIN/x86_amd64:/cygdrive/c/Program Files (x86)/Microsoft Visual Studio 12.0/VC/BIN:/cygdrive/c/Program Files (x86)/Microsoft Visual Studio 12.0/Common7/Tools:/cygdrive/c/Windows/Microsoft.NET/Framework/v4.0.30319:/cygdrive/c/Program Files (x86)/Microsoft Visual Studio 12.0/VC/VCPackages:/cygdrive/c/Program Files (x86)/Microsoft Visual Studio 12.0/Team Tools/Performance Tools:/cygdrive/c/Program Files (x86)/Windows Kits/8.1/bin/x86:/cygdrive/c/Program Files (x86)/Microsoft SDKs/Windows/v8.1A/bin/NETFX 4.5.1 Tools/x64:/usr/local/bin:/usr/bin:/cygdrive/c/Windows/system32:/cygdrive/c/Windows:/cygdrive/c/Windows/System32/Wbem:/cygdrive/c/Windows/System32/WindowsPowerShell/v1.0:/cygdrive/c/Program Files/Microsoft SQL Server/110/Tools/Binn:/usr/bin"
fi

# Now locate the main script and run it.
REAL_COMPARE_SCRIPT="$SRC_ROOT/common/bin/compare.sh"
if [ ! -e "$REAL_COMPARE_SCRIPT" ]; then
  echo "Error: Cannot locate compare script, it should have been in $REAL_COMPARE_SCRIPT"
  exit 1
fi

. "$REAL_COMPARE_SCRIPT" "$@"
