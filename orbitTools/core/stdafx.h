//
// stdafx.h
//
// Copyright (c) 2003-2013 Michael F. Henry
//
#pragma once

#ifdef _WIN32
#include <tchar.h>
#else
#define gmtime_s(a, b) gmtime_r(b, a)
#define _get_timezone(a) {*(a) = timezone; 0;}
#define _snprintf_s(...) snprintf(__VA_ARGS__)
#endif

#include <assert.h>
#include <math.h>
#include <time.h>
#include <string.h>

#include <string>
#include <map>

using namespace std;
