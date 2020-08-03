#ifndef ENTT_SIGNAL_FWD_HPP
#define ENTT_SIGNAL_FWD_HPP


namespace entt {


template<typename>
class delegate;


template<template<typename> typename>
class basic_dispatcher;

template<typename>
class emitter;


class connection;


struct scoped_connection;


template<typename>
class sink;


template<typename>
class sigh;

using dispatcher = basic_dispatcher<entt::sigh>;


}


#endif
