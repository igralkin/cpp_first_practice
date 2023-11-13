cmake_minimum_required(VERSION 3.27)            # требуемая версия cmake
project(        
    lesson3                                     # название проекта                            
    VERSION 0.0.0                               # номер версии проекта
    DESCRIPTION "First practice project"        # описание
    LANGUAGES CXX                               # язык программирования
)
set(CMAKE_CXX_STANDARD 17)                      # требуемый стандарт языка
set(CMAKE_CXX_STANDARD_REQUIRED ON)             # при сборке платформа будет проверять поддержку стандарта из предыдущей строчки

set(CMAKE_BUILD_TYPE Debug)                     # конфигурация сборки

add_executable(lesson3)                         # компиляция будет в файл lesson3.exe


set(sources                                     # список исходных файлов кода в cmake-переменной
    main.cpp
)

target_sources(lesson3 PRIVATE ${sources})      # исполняемый файл будет компилироваться из файлов, указанных в переменной sources