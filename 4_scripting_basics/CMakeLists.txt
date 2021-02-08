cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)
message(STATUS "The version of the project set is: ${PROJECT_VERSION}")

message(STATUS "I am a message")
set(MY_VARIABLE "I am a variable")
message(STATUS "The variable value is: ${MY_VARIABLE}")


if("TRUE")   #if("FALSE")
    message(STATUS "Condition was met")
else()
    message(STATUS "Condition was not met")
endif()


set(my_bool TRUE) #set(my_bool FALSE)

if(my_bool)
    message(STATUS "[my_bool] Condition was met")
else()
    message(STATUS "[my_bool] Condition was not met")
endif()

set(MY_STRING "This is a string")
set(MY_OTHER_STRING "This is a string")


if(NOT my_bool)
    message(STATUS "[my_bool] Condition was met")
else()
    message(STATUS "[my_bool] Condition was not met")
endif()

if(MY_STRING STREQUAL MY_OTHER_STRING)
    message(STATUS "[MY_STRING]condition was met")
else()
    message(STATUS "[MY_STRING]Condition failed")
endif()

if(NOT MY_STRING STREQUAL MY_OTHER_STRING)
    message(STATUS "[MY_STRING]condition was met")
else()
    message(STATUS "[MY_STRING]Condition failed")
endif()


set(my_value 4)
if((MY_STRING STREQUAL MY_OTHER_STRING) AND ("1" EQUAL my_value))
    message(STATUS "[ MY_STRING => my_value ] condition was met")
elseif(MY_OTHER_STRING MATCHES "string$")    # checks if the value of string named MY_OTHER_STRING is ending with a word 'string'
    message(STATUS "[ MY_STRING => my_value ]variable ends with the word 'string'")
else()
    message(STATUS "[ MY_STRING => my_value ] Condition failed")
endif()

while(my_value LESS 50)
    message(STATUS "value is ${my_value}")
    math(EXPR my_value "${my_value} + 1")
endwhile()

foreach(item IN ITEMS foo bar baz qux)
    message(STATUS "Item is: ${item}")
endforeach()

foreach(idx RANGE 10)
    message(STATUS "idx no is: ${idx}")
endforeach()

foreach(idx RANGE 0 99 10)   #starting number 0, range till 99, step size is 10
    message(STATUS "idx no is: ${idx}")
endforeach()







