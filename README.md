# basic-calculator-cpp

To run the calculator app, clone the repo. Below procedure is only for Windows operating system.

### How to run on Windows:
If you're on Windows, make sure you have compiler installed. Refer to below link for compiler installation on Windows. 

[https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites](https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites)

Then make a `tasks.json` file with below content, go to `main.cpp` file and click `Run C/C++ File`. Your executable file will be generated. Then you can simply run your app by `./main.exe`.
```
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: gcc.exe build active file",
            "command": "C:\\msys64\\ucrt64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${workspaceFolder}/*.cpp",
                "-o",
                "${workspaceFolder}\\main.exe"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "Task generated by Debugger."
        }
    ],
    "version": "2.0.0"
}
```

## Description of the app