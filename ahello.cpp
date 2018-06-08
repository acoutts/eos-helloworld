#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>
using namespace eosio;
class hello : public eosio::contract {
  public:
      using contract::contract;
/// @abi action
      void hi( account_name user ) {
         print( "Hello, World ", name{user}, "\n");
         print( "End of Hello World Contract");
      }
};
EOSIO_ABI( hello, (hi) )
