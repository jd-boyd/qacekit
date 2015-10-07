TEMPLATE = subdirs
CONFIG += ordered

SUBDIRS = acekit \
example

example.depends = acekit
