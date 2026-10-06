LOCAL_PATH := $(call my-dir)

# The Make files below this directory are not included: libsynergy_loc_api and
# libloc_socket link Qualcomm's non-public QMI libraries, and the NLP headers
# are unused. libloc_api_v02 builds with Soong (loc_api/loc_api_v02/Android.bp).
