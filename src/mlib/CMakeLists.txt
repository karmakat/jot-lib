
SET(NORMAL_SOURCES
	global.cpp
	points.cpp
	vec4.cpp)

SET(TEMPLATED_SOURCES
	plane.cpp
	pointlist.cpp
	point2.cpp
	point3.cpp
	mat4.cpp
	quat.cpp
	random.cpp)

SET(JOT_NEEDS_TEMPLATES_IN_H_FILE BOOL False)

IF(WIN32)
SET(JOT_NEEDS_TEMPLATES_IN_H_FILE BOOL True)
ENDIF(WIN32)

IF(UNIX)
SET(JOT_NEEDS_TEMPLATES_IN_H_FILE BOOL True)
ENDIF(UNIX)

IF(NOT JOT_NEEDS_TEMPLATES_IN_H_FILE)
SET(MLIB_FILES ${NORMAL_SOURCES} ${TEMPLATED_SOURCES})
ELSE(NOT JOT_NEEDS_TEMPLATES_IN_H_FILE)
SET(MLIB_FILES ${NORMAL_SOURCES})
ENDIF(NOT JOT_NEEDS_TEMPLATES_IN_H_FILE)

ADD_LIBRARY(mlib ${MLIB_FILES})

TARGET_LINK_LIBRARIES(mlib
	std)

