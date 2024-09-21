cmake_minimum_required(VERSION 3.16)
project(zeptomoby VERSION 1.0 LANGUAGES CXX)

set(CORE_HEADERS 
	orbitTools/core/cJulian.h
	orbitTools/core/coord.h
	orbitTools/core/exceptions.h
	orbitTools/core/cTLE.h
	orbitTools/core/globals.h
	orbitTools/core/cEci.h
	orbitTools/core/stdafx.h
	orbitTools/core/cSite.h
	orbitTools/core/cVector.h
	orbitTools/core/coreLib.h
)

add_library(otcore SHARED
	${CORE_HEADERS}
	orbitTools/core/coord.cpp
	orbitTools/core/globals.cpp
	orbitTools/core/cJulian.cpp
	orbitTools/core/cTLE.cpp
	orbitTools/core/cSite.cpp
	orbitTools/core/cEci.cpp
	orbitTools/core/stdafx.cpp
	orbitTools/core/cVector.cpp
)
target_include_directories(otcore PUBLIC orbitTools/core)

set(ORBIT_HEADERS
	orbitTools/orbit/cNoradBase.h
	orbitTools/orbit/cNoradSDP4.h
	orbitTools/orbit/cNoradSGP4.h
	orbitTools/orbit/cOrbit.h
	orbitTools/orbit/orbitLib.h
	orbitTools/orbit/stdafx.h
	orbitTools/orbit/cSatellite.h
)
add_library(otorbit SHARED
	${ORBIT_HEADERS}
	orbitTools/orbit/cNoradSGP4.cpp
	orbitTools/orbit/cOrbit.cpp
	orbitTools/orbit/cNoradBase.cpp
	orbitTools/orbit/cNoradSDP4.cpp
	orbitTools/orbit/cSatellite.cpp
	orbitTools/orbit/stdafx.cpp
)
target_include_directories(otorbit PUBLIC orbitTools/orbit)
target_link_libraries(otorbit otcore)

install(TARGETS otorbit otcore LIBRARY DESTINATION lib)
install(FILES 
	${CORE_HEADERS}
	${ORBIT_HEADERS}
	DESTINATION include/orbitTools
)

add_executable(orbitToolsDemo
	orbitToolsDemo/main.cpp
	orbitToolsDemo/resource.h
	orbitToolsDemo/stdafx.cpp
	orbitToolsDemo/stdafx.h
)
target_link_libraries(orbitToolsDemo otorbit otcore)

