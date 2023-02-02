cmake_minimum_required(VERSION 3.10)

project(Codeforces)

find_program(CLANG_FORMAT NAMES "clang-format")

set(FORMAT OFF CACHE BOOL "Description of the variable")

# Formatting source file, to enable it add : -DFORMAT=TRUE
if(FORMAT)
	if(FORMAT)
	  file(GLOB_RECURSE SOURCE_FILES *.cpp *.h)
	  add_custom_command(
	    OUTPUT ${SOURCE_FILES}
	    COMMAND ${CLANG_FORMAT} -i -style=file ${SOURCE_FILES}
	    DEPENDS ${SOURCE_FILES}
	    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	    COMMENT "Running clang-format"
	  )
	endif()
endif()
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

SET(FILE_NAME "" CACHE STRING "User defined option")

# Compiling all source file 
# to compile a specific file add(ex: problem.cpp) : -DFILE_NAME=problem.cpp
if(FILE_NAME STREQUAL "") 
    	file(GLOB files "src/*.cpp")
	foreach( file ${files})
		get_filename_component(name ${file} NAME)
		string( REPLACE ".cpp" "" name ${name})
		message(STATUS " ${name}")
	    	add_executable(${name} ${file})
	endforeach( file ${files} )
else()
	string( REPLACE ".cpp" "" name ${FILE_NAME})
	message(STATUS " ${name}")
	Add_executable(${name} src/${FILE_NAME})
endif()


