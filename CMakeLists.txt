cmake_minimum_required(VERSION 3.28)
project(SWEA)

set(CMAKE_CXX_STANDARD 17)

file(GLOB ALL_ITEMs "${CMAKE_SOURCE_DIR}/*")
message("${ALL_ITEMs}")
set(SUB_DIR)

# exclude directory name
set(EXCLUDE_LEVEL "D0")

foreach (ITEM ${ALL_ITEMs})
    if (IS_DIRECTORY ${ITEM})
        get_filename_component(LEVEL ${ITEM} NAME_WE)
        list(FIND EXCLUDE_LEVEL "${LEVEL}" INDEX)
        if (INDEX EQUAL -1)
            list(APPEND SUB_DIR ${ITEM})
        endif ()
    endif ()
endforeach ()

foreach (DIR ${SUB_DIR})
    get_filename_component(NOW_LEVEL ${DIR} NAME_WE)
    file(GLOB DIR_SOURCES "${DIR}/*.cpp")
    foreach (SOURCE ${DIR_SOURCES})
        get_filename_component(EXE_NAME ${SOURCE} NAME_WE)
        add_executable("${NOW_LEVEL}_${EXE_NAME}" ${SOURCE})
    endforeach ()
endforeach ()
