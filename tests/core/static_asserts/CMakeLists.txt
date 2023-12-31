# Copyright (c) 2013-2015, Roland Bock
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without modification,
# are permitted provided that the following conditions are met:
#
#   Redistributions of source code must retain the above copyright notice, this
#   list of conditions and the following disclaimer.
#
#   Redistributions in binary form must reproduce the above copyright notice, this
#   list of conditions and the following disclaimer in the documentation and/or
#   other materials provided with the distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
# ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
# ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

function(test_compile name)
    set(target sqlpp11_assert_${name})
    add_executable(${target} ${name}.cpp)
    target_link_libraries(${target} PRIVATE sqlpp11::sqlpp11 sqlpp11_testing)
    # conditionally bump to a higher C++ standard to test compatibility
    if (SQLPP11_TESTS_CXX_STD)
        set_property(TARGET sqlpp11_assert_${name} PROPERTY CXX_STANDARD ${SQLPP11_TESTS_CXX_STD})
        set_property(TARGET sqlpp11_assert_${name} PROPERTY CXX_STANDARD_REQUIRED yes)
        set_property(TARGET sqlpp11_assert_${name} PROPERTY CXX_EXTENSIONS no)
    endif()  
endfunction()

test_compile(aggregates)
test_compile(case)
test_compile(from)
test_compile(join)
test_compile(where)
test_compile(update_list)
test_compile(having)
test_compile(insert)
test_compile(in)
test_compile(date)
test_compile(date_time)
test_compile(text)
test_compile(no_self_compare)
test_compile(unwrapped_bool)