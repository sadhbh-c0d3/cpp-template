# Dockerized C++ Code Template

### _Start your C++ project without hassle!_

---

## About

Example C++ template, which includes following:
- Docker development container configuration
- CMake configuration with Boost, Boost.Threads, and Boost.System included
- Sample C++ code with shared include, lib and tests
- Some samples of new C++ standard

## Building

1. Launch Docker container
```
    docker-compose up -d
```

2. Enter development environment within Docker container
```
    ./enter-app.sh
```

3. Configure
```
    mkdir /home/build
    cd /home/build
    cmake /home/app
```

4. Build
```
    make
```

5. Test
```
    ctest
```

6. Run App
```
    ./bin/run_app 1 2 3
```
