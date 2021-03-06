// The MIT License (MIT) 

// Copyright (c) 2013-2016 Rapptz, ThePhD and contributors

// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#ifndef SOL_FUNCTION_TYPES_CORE_HPP
#define SOL_FUNCTION_TYPES_CORE_HPP

#include "stack.hpp"
#include "wrapper.hpp"
#include <memory>

namespace sol {
	namespace function_detail {
		inline decltype(auto) cleanup_key() {
			const auto& name = u8"sol.ƒ.♲.🗑.(/¯◡ ‿ ◡)/¯ ~ ┻━┻ (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧";
			return name;
		}

		template <typename Fx>
		inline int call(lua_State* L) {
			Fx& fx = stack::get<user<Fx>>(L, upvalue_index(1));
			return fx(L);
		}
	} // function_detail
} // sol

#endif // SOL_FUNCTION_TYPES_CORE_HPP
