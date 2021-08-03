REM start visual studio native x64 command prompt from the start menu

REM edit env.bat as needed

REM run boost_x64 one time, it will fail because "bjam" can't be found
REM copy boostdir/tools/build/src/engine/bjam to boostdir/

start build.bat boost_x64
start build.bat thirdparty
start build.bat static
