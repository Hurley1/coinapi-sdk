# OpenapiClient::BalancesApi

All URIs are relative to *https://13d16e9d-d8b1-4ef4-bc4a-ed8156b2b159.mock.pstmn.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1_balances_get**](BalancesApi.md#v1_balances_get) | **GET** /v1/balances | Get balances



## v1_balances_get

> Array&lt;Balance&gt; v1_balances_get(opts)

Get balances

Get current currency balance from all or single exchange.

### Example

```ruby
# load the gem
require 'openapi_client'

api_instance = OpenapiClient::BalancesApi.new
opts = {
  exchange_id: 'KRAKEN' # String | Filter the balances to the specific exchange.
}

begin
  #Get balances
  result = api_instance.v1_balances_get(opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Exception when calling BalancesApi->v1_balances_get: #{e}"
end
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchange_id** | **String**| Filter the balances to the specific exchange. | [optional] 

### Return type

[**Array&lt;Balance&gt;**](Balance.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, appliction/json

