/*
 * OEML - REST API
 *
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
 *
 * API version: v1
 * Contact: support@coinapi.io
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// OrderCancelSingleRequest Cancel single order request object.
type OrderCancelSingleRequest struct {
	// Exchange identifier used to identify the routing destination.
	ExchangeId string `json:"exchange_id"`
	// Unique identifier of the order assigned by the exchange or executing system. One of the properties (`exchange_order_id`, `client_order_id`) is required to identify the new order.
	ExchangeOrderId string `json:"exchange_order_id,omitempty"`
	// The unique identifier of the order assigned by the client. One of the properties (`exchange_order_id`, `client_order_id`) is required to identify the new order.
	ClientOrderId string `json:"client_order_id,omitempty"`
}
