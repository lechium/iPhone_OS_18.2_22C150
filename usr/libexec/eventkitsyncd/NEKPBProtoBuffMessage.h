//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NEKPBCalendarWrapper, NEKPBDeleteEvent, NEKPBDeletionWrapper, NEKPBICSWrapper, NEKPBSetAlarmSnooze, NEKPBSetParticipantStatus, NEKPBSetReminderComplete, NEKPBSourceWrapper, NEKPBValidationWrapper;

@interface NEKPBProtoBuffMessage : PBCodable
{
    NEKPBCalendarWrapper *_calendarWrapper;	// 8 = 0x8
    NEKPBDeleteEvent *_deleteEvent;	// 16 = 0x10
    NEKPBDeletionWrapper *_deletionWrapper;	// 24 = 0x18
    NEKPBICSWrapper *_iCSWrapper;	// 32 = 0x20
    unsigned int _packetNumber;	// 40 = 0x28
    NEKPBSetAlarmSnooze *_setAlarmSnooze;	// 48 = 0x30
    NEKPBSetParticipantStatus *_setParticipantStatus;	// 56 = 0x38
    NEKPBSetReminderComplete *_setReminderComplete;	// 64 = 0x40
    NEKPBSourceWrapper *_storeWrapper;	// 72 = 0x48
    NEKPBValidationWrapper *_validationWrapper;	// 80 = 0x50
    struct {
        unsigned int packetNumber:1;
    } _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000004d632
@property(retain, nonatomic) NEKPBDeleteEvent *deleteEvent; // @synthesize deleteEvent=_deleteEvent;
@property(retain, nonatomic) NEKPBSetAlarmSnooze *setAlarmSnooze; // @synthesize setAlarmSnooze=_setAlarmSnooze;
@property(retain, nonatomic) NEKPBSetParticipantStatus *setParticipantStatus; // @synthesize setParticipantStatus=_setParticipantStatus;
@property(retain, nonatomic) NEKPBSetReminderComplete *setReminderComplete; // @synthesize setReminderComplete=_setReminderComplete;
@property(retain, nonatomic) NEKPBValidationWrapper *validationWrapper; // @synthesize validationWrapper=_validationWrapper;
@property(retain, nonatomic) NEKPBDeletionWrapper *deletionWrapper; // @synthesize deletionWrapper=_deletionWrapper;
@property(retain, nonatomic) NEKPBICSWrapper *iCSWrapper; // @synthesize iCSWrapper=_iCSWrapper;
@property(retain, nonatomic) NEKPBCalendarWrapper *calendarWrapper; // @synthesize calendarWrapper=_calendarWrapper;
@property(retain, nonatomic) NEKPBSourceWrapper *storeWrapper; // @synthesize storeWrapper=_storeWrapper;
@property(nonatomic) unsigned int packetNumber; // @synthesize packetNumber=_packetNumber;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004d2ac
- (unsigned long long)hash;	// IMP=0x001000000004d175
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004cf5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004cd82
- (void)copyTo:(id)arg1;	// IMP=0x001000000004cc1f
- (void)writeTo:(id)arg1;	// IMP=0x001000000004cad1
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004cac4
- (id)dictionaryRepresentation;	// IMP=0x001000000004c2b5
- (MISSING_TYPE *)description;	// IMP=0x001000000004c206
@property(readonly, nonatomic) _Bool hasDeleteEvent;
@property(readonly, nonatomic) _Bool hasSetAlarmSnooze;
@property(readonly, nonatomic) _Bool hasSetParticipantStatus;
@property(readonly, nonatomic) _Bool hasSetReminderComplete;
@property(readonly, nonatomic) _Bool hasValidationWrapper;
@property(readonly, nonatomic) _Bool hasDeletionWrapper;
@property(readonly, nonatomic) _Bool hasICSWrapper;
@property(readonly, nonatomic) _Bool hasCalendarWrapper;
@property(readonly, nonatomic) _Bool hasStoreWrapper;
@property(nonatomic) _Bool hasPacketNumber;

@end

