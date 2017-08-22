#ifndef UHVWORKER_H
#define UHVWORKER_H

#define UHVWorkerDbgEn 1

#include <QStateMachine>
#include <QSignalTransition>
#include "uhvworkervarset.h"
#include "anlogger.h"
#include "commonthings.h"
#include "serialportinforequest.h"
#include "serialportinfovalidation.h"
#include "serialportconnectionestablishment.h"
#include "solitarymessagetransmission.h"
#include "messagereceiveandemitout.h"
#include "errorannouncement.h"
#include "uhvworkerdirectstatetransition.h"

class UHVWorker : public QStateMachine
{
    Q_OBJECT
public:
    UHVWorker();
signals:    
    void Out(QVariant *, QVariant * = Q_NULLPTR);
public slots:
    void In(QVariant * AnUHVWorkerEnumValue, QVariant * rawData = Q_NULLPTR);
private:
    UHVWorkerVarSet * WorkingVarSet = Q_NULLPTR;
};

#endif // UHVWORKER_H
