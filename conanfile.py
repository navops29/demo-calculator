from conans import ConanFile, CMake, tools


class CalculatorConan(ConanFile):
    name = "calculator"
    version = "0.0.1"
    description = "Simple math lib for calc options"
    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake"
    requires = "mathlib/0.0.1",
    url = "https://github.com/navops29/demo-calculator"
    def source(self):
        self.run("git clone https://github.com/navops29/demo-calculator.git calculator")

    def build(self):
        self.deps_cpp_info["mathlib"].include_paths	
        cmake = CMake(self)
        cmake.configure(source_dir="calculator")
        cmake.build()
        cmake.install()

    def package_info(self):
        self.cpp_info.libs = ["mathlib", "calculator"]

