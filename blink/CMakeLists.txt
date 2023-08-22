add_executable(blink
        blink.c
        blink.py
        )

# pull in common dependencies
target_link_libraries(blink pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(blink)

# add url via pico_set_program_url
example_auto_set_url(blink)

pico_enable_stdio_uart(blink 1)
pico_add_extra_outputs(blink)

add_custom_command(
    TARGET blink POST_BUILD
    COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/blink.py
    COMMENT "Running Python script"
)
