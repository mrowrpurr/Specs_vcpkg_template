<img src="https://raw.githubusercontent.com/mrowrpurr/Specs.cpp/main/Resources/Images/Logo_400.png" width=200 align="right">

# Specs.cpp vcpkg template

Get started with the [`Specs.cpp`][specs] testing framework using CMake with `vcpkg`!

```cpp
#define SPEC_GROUP My_Tests
 
#include <Specs.h>
 
Setup { /* Setup Code */ }
Teardown { /* Teardown Code */ }
 
Test("Some thing") {
    assert(69 == 420);
    AssertThat(69, Equals(69));
}
 
TestAsync("Slow thing") {
    // Do something slow...
    done();
}
```

## ✨ Getting Started

Simply [create a new repository][template] using this template or copy its code into your existing project!

For more information on how to use `Specs.cpp`, check out the official [Specs][specs] website!

👓 https://specs.tools/

## ℹ️ Note

When using this template, you will want to update the `baseline` values in [`vcpkg-configuration.json`](vcpkg-configuration.json) for:
- the `default-registry` (_this should be the latest commit SHA of [`microsoft/vcpkg`](https://github.com/microsoft/vcpkg/commits/master/)_)
- the [`MrowrLib/Packages`](https://github.com/MrowrLib/Packages/commits/main/) registry (_same thing, get the latest commit SHA_)

_Otherwise, you will be using old versions of `Spec` and its dependencies!_

> _I have no plans to continue to keep the [`vcpkg-configuration.json`](vcpkg-configuration.json) file up-to-date every time a new version of `Specs` is released_ 😸

## `libassert`

At the time of writing, I cannot get the [`libassert`](https://github.com/jeremy-rifkin/libassert) `vcpkg` package to work.

For that reason, only the [`snowhouse`](https://github.com/banditcpp/snowhouse) assertion library is used in this template for now.

Feel free to follow these CMake instructions from the official `libassert` README to add `libassert` to your project:

- [Install libassert with CMake `FetchContent`](https://github.com/jeremy-rifkin/libassert?tab=readme-ov-file#a-with-cmake-fetchcontent)

> _I plan to revisit this and add `libassert` support to this repository!_

[specs]: https://specs.tools/
[template]: https://github.com/new?template_name=Specs_xmake_template&template_owner=mrowrpurr
