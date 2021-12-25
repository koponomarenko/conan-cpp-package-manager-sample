# conan-cpp-package-manager-sample

Links:
- https://conan.io/center
- https://docs.conan.io/en/latest/cheatsheet.html
- https://docs.conan.io/en/latest/getting_started.html


Profiles:
```
$ conan profile list
$ conan profile new ~/.conan/profiles/my-default --detect
```

Setup Conan remotes
```
$ conan remote list
$ conan remote add conancenter https://center.conan.io
```

Get dependencies and generate build system files
```
$ mkdir cmake-build-release && cd cmake-build-release
$ conan install .. -pr my-default -r conancenter -b missing
```

## Useful notes

https://docs.conan.io/en/latest/reference/env_vars.html#conan-user-home  
https://docs.conan.io/en/latest/mastering/custom_cache.html#custom-cache  
