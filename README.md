
# Chocolate Divider

Программа для вычисления минимального количества разбиений шоколадки размером n × m.

---

## Сборка и запуск локально

### Windows (PowerShell)
```powershell
cmake -S . -B build -G Ninja
cmake --build build --target chocolate runTests
cd build
ctest # Запуск тестов
# Альтернатива: можно запустить тесты напрямую
# ./tests/runTests
./chocolate.exe # Запуск программы
```

### Linux/macOS
```bash
mkdir -p build && cd build
cmake ..
make
./chocolate
ctest # Запуск тестов
```

---

## Сборка и запуск через Docker

1. Убедитесь, что установлен Docker.
2. Соберите контейнер:
   ```bash
   docker build -t chocolate-divider .devcontainer
   ```
3. Запустите контейнер с монтированием исходников:
   ```bash
   docker run -it -v $(pwd):/workspace chocolate-divider
   ```
4. Внутри контейнера выполните:
   ```bash
   cd /workspace
   mkdir -p build && cd build
   cmake ..
   make
   ./chocolate
   ctest
   ```

---

## Сборка и запуск в VS Code Devcontainer

1. Откройте проект в VS Code.
2. При первом запуске выберите "Reopen in Container".
3. В терминале контейнера:
   ```bash
   mkdir -p build && cd build
   cmake ..
   make
   ./chocolate
   ctest
   ```

---

## Структура проекта

- `src/` — исходный код программы
- `include/` — заголовочные файлы
- `tests/` — тесты (GoogleTest подгружается автоматически)
- `build/` — папка для сборки
- `.devcontainer/` — конфигурация для Docker/devcontainer

---

## Требования

- CMake >= 3.16
- GCC >= 14 или совместимый компилятор C++
- Ninja (для Windows)
- Docker (для контейнерной сборки)

---

## Пример запуска

```bash
./chocolate
# Введите размеры шоколадки (n m): 3 3
# Минимальное количество разбиений: 8
```

