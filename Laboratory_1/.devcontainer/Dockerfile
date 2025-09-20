# Базовый образ с GCC 14
FROM gcc:14

# Установка необходимых инструментов
RUN apt-get update && \
    apt-get install -y \
        cmake \
        make \
        git \
        wget \
        unzip \
        build-essential \
        libssl-dev \
        && rm -rf /var/lib/apt/lists/*

# (Опционально) Установка свежей версии CMake, если нужна поддержка FetchContent для GTest
# RUN wget https://github.com/Kitware/CMake/releases/download/v3.27.7/cmake-3.27.7-linux-x86_64.sh && \
#     sh cmake-3.27.7-linux-x86_64.sh --skip-license --prefix=/usr/local && \
#     rm cmake-3.27.7-linux-x86_64.sh

# Установка рабочей директории внутри контейнера
WORKDIR /workspace

# Копирование файлов проекта в контейнер (опционально, см. devcontainer.json)
# COPY . /workspace

# По умолчанию запускать bash
CMD ["/bin/bash"]
