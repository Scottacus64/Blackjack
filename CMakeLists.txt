cmake_minimum_required(VERSION 3.10)
project(BlackJack)

# Add the Card class source files
set(SOURCES
    main.cpp
    Card.cpp
    Deck.cpp
    Hand.cpp
    BlackJack.cpp
)

# Add the Card class header files
set(HEADERS
    Card.h
    Deck.h
    Hand.h
    BlackJack.h
)

# Create an executable from the sources
add_executable(CardExample ${SOURCES} ${HEADERS})