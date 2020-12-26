// Copyright 2020 Petr Portnov me@progrm-jarvis.ru

#include <gtest/gtest.h>

#include <http_client_lib/simple_http_client.hpp>

namespace http_client_lib {

    TEST(SimpleHttpClient, from__throws) {
        EXPECT_THROW(SimpleHttpClient::from("some incorrect host", "8800"), SimpleHttpClient::exception_t);
    }
}