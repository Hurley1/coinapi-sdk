# coding: utf-8

# flake8: noqa

"""
    OEML - REST API

    This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>         # noqa: E501

    The version of the OpenAPI document: v1
    Contact: support@coinapi.io
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

__version__ = "1.0.0"

# import apis into sdk package
from openapi_client.api.balances_api import BalancesApi
from openapi_client.api.orders_api import OrdersApi
from openapi_client.api.positions_api import PositionsApi

# import ApiClient
from openapi_client.api_client import ApiClient
from openapi_client.configuration import Configuration
from openapi_client.exceptions import OpenApiException
from openapi_client.exceptions import ApiTypeError
from openapi_client.exceptions import ApiValueError
from openapi_client.exceptions import ApiKeyError
from openapi_client.exceptions import ApiException
# import models into sdk package
from openapi_client.models.balance import Balance
from openapi_client.models.balance_data import BalanceData
from openapi_client.models.message import Message
from openapi_client.models.ord_side import OrdSide
from openapi_client.models.ord_status import OrdStatus
from openapi_client.models.ord_type import OrdType
from openapi_client.models.order_cancel_all_request import OrderCancelAllRequest
from openapi_client.models.order_cancel_single_request import OrderCancelSingleRequest
from openapi_client.models.order_execution_report import OrderExecutionReport
from openapi_client.models.order_execution_report_all_of import OrderExecutionReportAllOf
from openapi_client.models.order_new_single_request import OrderNewSingleRequest
from openapi_client.models.position import Position
from openapi_client.models.position_data import PositionData
from openapi_client.models.severity import Severity
from openapi_client.models.time_in_force import TimeInForce
from openapi_client.models.validation_error import ValidationError

