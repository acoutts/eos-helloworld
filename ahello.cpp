#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>
using namespace eosio;
class hello : public eosio::contract {
  // Add a variable to use in the contract
  uint32_t number = 0;

  public:
      using contract::contract;

      /// @abi action
      void hi( account_name user ) {
        print( "Hello, World ", name{user}, " Number: ", internal_test(), "\n");
        print( "End of Hello World Contract\n");
      }

      int internal_test() {
        print( "Inside test function Code\n");
        return 32;
      }
};
EOSIO_ABI( hello, (hi) )
