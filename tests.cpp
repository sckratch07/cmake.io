#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

SCENARIO ("Les vectors peuvent être dimensionnés et redimensionnés", "[vector]") {
    GIVEN("Un vector avec quelques éléments") {
        std::vector<int> v(5);
        REQUIRE(v.size() == 5);
        
        WHEN("la taille est augmentée") {
            v.resize(10);
            THEN("la taille et la capacité changent") {
               REQUIRE(v.size() == 10);
               REQUIRE(v.capacity() >= 10);
            }
        }

        WHEN("la taille est réduite") {
            v.resize(3);
            THEN("la taille change mais la capacité reste la même") {
               REQUIRE(v.size() == 3);
               REQUIRE(v.capacity() >= 5);
            }
        }

        WHEN("la vector est vidé") {
            v.clear();  
            THEN("la taille est zéro mais la capacité est inchangée") {
               REQUIRE(v.size() == 0);
               REQUIRE(v.capacity() >= 5);
            }
        }
    }

    GIVEN("Un vector avec des charactères") {
        std::vector<char> v(5);
        REQUIRE(v.size() == 5);

        WHEN("la vector est vidé") {
            v.clear();
            THEN("la taille est zéro mais la capacité est inchangée") {
               REQUIRE(v.size() == 0);
               REQUIRE(v.capacity() >= 5);
               ééé NON j'ai pas envie de fonctionner ééé
            }
        }
    }
}