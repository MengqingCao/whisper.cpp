# Builds and runs a test source file.
# Optional args:
# - NAME: name of the executable & test target (defaults to the source file name without extension)
# - LABEL: label for the test (defaults to main)
# - ARGS: arguments to pass to the test executable
# - WORKING_DIRECTORY
function(whisper_target_and_test source)
    include(CMakeParseArguments)
    set(options)
    set(oneValueArgs NAME LABEL WORKING_DIRECTORY)
    set(multiValueArgs ARGS)
    cmake_parse_arguments(WHISPER_TEST "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    if (NOT DEFINED WHISPER_TEST_LABEL)
        set(WHISPER_TEST_LABEL "main")
    endif()
    if (NOT DEFINED WHISPER_TEST_WORKING_DIRECTORY)
        set(WHISPER_TEST_WORKING_DIRECTORY .)
    endif()
    if (DEFINED WHISPER_TEST_NAME)
        set(TEST_TARGET ${WHISPER_TEST_NAME})
    else()
        get_filename_component(TEST_TARGET ${source} NAME_WE)
    endif()

    add_executable(${TEST_TARGET} ${source})
    install(TARGETS ${TEST_TARGET} RUNTIME)
    target_link_libraries(${TEST_TARGET} PRIVATE common ggml -lpthread -lm)
    add_test(
        NAME ${TEST_TARGET}
        WORKING_DIRECTORY ${WHISPER_TEST_WORKING_DIRECTORY}
        COMMAND $<TARGET_FILE:${TEST_TARGET}>
        ${WHISPER_TEST_ARGS})

    set_property(TEST ${TEST_TARGET} PROPERTY LABELS ${WHISPER_TEST_LABEL})
endfunction()

set(TEST_TARGET test-backend-ops)
whisper_target_and_test(test-backend-ops.cpp)


# if (EMSCRIPTEN)
#     #
#     # test-whisper-js

#     set(TEST_TARGET test-whisper-js)

#     add_test(NAME ${TEST_TARGET}
#         COMMAND node test-whisper.js --experimental-wasm-threads
#         WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
#         )

#     return()
# endif()

# set(TEST_TARGET test-main-tiny)
# add_test(NAME ${TEST_TARGET}
#     COMMAND $<TARGET_FILE:main>
#     -m ${PROJECT_SOURCE_DIR}/models/for-tests-ggml-tiny.bin -l fr
#     -f ${PROJECT_SOURCE_DIR}/samples/jfk.wav)
# set_tests_properties(${TEST_TARGET} PROPERTIES LABELS "tiny;gh")

# set(TEST_TARGET test-main-tiny.en)
# add_test(NAME ${TEST_TARGET}
#     COMMAND $<TARGET_FILE:main>
#     -m ${PROJECT_SOURCE_DIR}/models/for-tests-ggml-tiny.en.bin
#     -f ${PROJECT_SOURCE_DIR}/samples/jfk.wav)
# set_tests_properties(${TEST_TARGET} PROPERTIES LABELS "tiny;en;gh")

# set(TEST_TARGET test-main-base)
# add_test(NAME ${TEST_TARGET}
#     COMMAND $<TARGET_FILE:main>
#     -m ${PROJECT_SOURCE_DIR}/models/for-tests-ggml-base.bin -l fr
#     -f ${PROJECT_SOURCE_DIR}/samples/jfk.wav)
# set_tests_properties(${TEST_TARGET} PROPERTIES LABELS "base")

# set(TEST_TARGET test-main-base.en)
# add_test(NAME ${TEST_TARGET}
#     COMMAND $<TARGET_FILE:main>
#     -m ${PROJECT_SOURCE_DIR}/models/for-tests-ggml-base.en.bin
#     -f ${PROJECT_SOURCE_DIR}/samples/jfk.wav)
# set_tests_properties(${TEST_TARGET} PROPERTIES LABELS "base;en")

# set(TEST_TARGET test-main-small)
# add_test(NAME ${TEST_TARGET}
#     COMMAND $<TARGET_FILE:main>
#     -m ${PROJECT_SOURCE_DIR}/models/for-tests-ggml-small.bin -l fr
#     -f ${PROJECT_SOURCE_DIR}/samples/jfk.wav)
# set_tests_properties(${TEST_TARGET} PROPERTIES LABELS "small")

# set(TEST_TARGET test-main-small.en)
# add_test(NAME ${TEST_TARGET}
#     COMMAND $<TARGET_FILE:main>
#     -m ${PROJECT_SOURCE_DIR}/models/for-tests-ggml-small.en.bin
#     -f ${PROJECT_SOURCE_DIR}/samples/jfk.wav)
# set_tests_properties(${TEST_TARGET} PROPERTIES LABELS "small;en")

# set(TEST_TARGET test-main-medium)
# add_test(NAME ${TEST_TARGET}
#     COMMAND $<TARGET_FILE:main>
#     -m ${PROJECT_SOURCE_DIR}/models/for-tests-ggml-medium.bin -l fr
#     -f ${PROJECT_SOURCE_DIR}/samples/jfk.wav)
# set_tests_properties(${TEST_TARGET} PROPERTIES LABELS "medium")

# set(TEST_TARGET test-main-medium.en)
# add_test(NAME ${TEST_TARGET}
#     COMMAND $<TARGET_FILE:main>
#     -m ${PROJECT_SOURCE_DIR}/models/for-tests-ggml-medium.en.bin
#     -f ${PROJECT_SOURCE_DIR}/samples/jfk.wav)
# set_tests_properties(${TEST_TARGET} PROPERTIES LABELS "medium;en")

# set(TEST_TARGET test-main-large)
# add_test(NAME ${TEST_TARGET}
#     COMMAND $<TARGET_FILE:main>
#     -m ${PROJECT_SOURCE_DIR}/models/for-tests-ggml-large.bin
#     -f ${PROJECT_SOURCE_DIR}/samples/jfk.wav)
# set_tests_properties(${TEST_TARGET} PROPERTIES LABELS "large")

# if (WHISPER_FFMPEG)
#     set(TEST_TARGET test-main-tiny-mp3)
#     # Check with reviewers: any way to check the output transcription via ctest (diff, ...)?
#     add_test(NAME ${TEST_TARGET}
#       COMMAND $<TARGET_FILE:main>
#       -m ${PROJECT_SOURCE_DIR}/models/for-tests-ggml-tiny.en.bin
#       -f ${PROJECT_SOURCE_DIR}/samples/jfk.mp3)
#     set_tests_properties(${TEST_TARGET} PROPERTIES LABELS "tiny;mp3")
# endif()

