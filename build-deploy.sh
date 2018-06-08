# Build the contract source
eosiocpp -o ahello.wast ahello.cpp
eosiocpp -g ahello.abi ahello.cpp

# Deploy the contract
cleos set contract scuser . ahello.wast ahello.abi

# Execute the action in the contract
cleos push action scuser hi '["user2"]' -p scuser