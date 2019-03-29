#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/ys/MOMDP_DESPOT/ROSPlan/src/navigation/base_local_planner"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/ys/MOMDP_DESPOT/ROSPlan/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/ys/MOMDP_DESPOT/ROSPlan/install/lib/python2.7/dist-packages:/home/ys/MOMDP_DESPOT/ROSPlan/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/ys/MOMDP_DESPOT/ROSPlan/build" \
    "/usr/bin/python" \
    "/home/ys/MOMDP_DESPOT/ROSPlan/src/navigation/base_local_planner/setup.py" \
    build --build-base "/home/ys/MOMDP_DESPOT/ROSPlan/build/navigation/base_local_planner" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/ys/MOMDP_DESPOT/ROSPlan/install" --install-scripts="/home/ys/MOMDP_DESPOT/ROSPlan/install/bin"
