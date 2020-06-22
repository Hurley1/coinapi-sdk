/**
 * OMS - REST API ...@
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIMessages.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMessages::OAIMessages(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessages::OAIMessages() {
    this->initializeModel();
}

OAIMessages::~OAIMessages() {}

void OAIMessages::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_exchange_id_isSet = false;
    m_exchange_id_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;
}

void OAIMessages::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessages::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_exchange_id_isValid = ::OpenAPI::fromJsonValue(exchange_id, json[QString("exchange_id")]);
    m_exchange_id_isSet = !json[QString("exchange_id")].isNull() && m_exchange_id_isValid;

    m_message_isValid = ::OpenAPI::fromJsonValue(message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;
}

QString OAIMessages::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessages::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_exchange_id_isSet) {
        obj.insert(QString("exchange_id"), ::OpenAPI::toJsonValue(exchange_id));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::OpenAPI::toJsonValue(message));
    }
    return obj;
}

QString OAIMessages::getType() const {
    return type;
}
void OAIMessages::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAIMessages::is_type_Set() const{
    return m_type_isSet;
}

bool OAIMessages::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIMessages::getExchangeId() const {
    return exchange_id;
}
void OAIMessages::setExchangeId(const QString &exchange_id) {
    this->exchange_id = exchange_id;
    this->m_exchange_id_isSet = true;
}

bool OAIMessages::is_exchange_id_Set() const{
    return m_exchange_id_isSet;
}

bool OAIMessages::is_exchange_id_Valid() const{
    return m_exchange_id_isValid;
}

QString OAIMessages::getMessage() const {
    return message;
}
void OAIMessages::setMessage(const QString &message) {
    this->message = message;
    this->m_message_isSet = true;
}

bool OAIMessages::is_message_Set() const{
    return m_message_isSet;
}

bool OAIMessages::is_message_Valid() const{
    return m_message_isValid;
}

bool OAIMessages::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_exchange_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessages::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI