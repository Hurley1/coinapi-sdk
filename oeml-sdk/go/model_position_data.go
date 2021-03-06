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
// PositionData The Position object.
type PositionData struct {
	// Exchange symbol.
	SymbolIdExchange string `json:"symbol_id_exchange,omitempty"`
	// CoinAPI symbol.
	SymbolIdCoinapi string `json:"symbol_id_coinapi,omitempty"`
	// Calculated average price of all fills on this position.
	AvgEntryPrice float32 `json:"avg_entry_price,omitempty"`
	// The current position quantity.
	Quantity float32 `json:"quantity,omitempty"`
	Side OrdSide `json:"side,omitempty"`
	// Unrealised profit or loss (PNL) of this position.
	UnrealizedPnl float32 `json:"unrealized_pnl,omitempty"`
	// Leverage for this position reported by the exchange.
	Leverage float32 `json:"leverage,omitempty"`
	// Is cross margin mode enable for this position?
	CrossMargin bool `json:"cross_margin,omitempty"`
	// Liquidation price. If mark price will reach this value, the position will be liquidated.
	LiquidationPrice float32 `json:"liquidation_price,omitempty"`
	RawData map[string]interface{} `json:"raw_data,omitempty"`
}
