//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDDPDate;

@interface PDDPSchedule : PBCodable
{
    NSString *_classId;	// 8 = 0x8
    PDDPDate *_dateCreated;	// 16 = 0x10
    PDDPDate *_dateLastModified;	// 24 = 0x18
    NSString *_objectId;	// 32 = 0x20
    NSString *_parentObjectId;	// 40 = 0x28
    int _scheduleAction;	// 48 = 0x30
    PDDPDate *_scheduleDate;	// 56 = 0x38
    int _scheduledEntityType;	// 64 = 0x40
    struct {
        unsigned int scheduleAction:1;
        unsigned int scheduledEntityType:1;
    } _has;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0020000000119b12
@property(retain, nonatomic) NSString *classId; // @synthesize classId=_classId;
@property(retain, nonatomic) PDDPDate *scheduleDate; // @synthesize scheduleDate=_scheduleDate;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *parentObjectId; // @synthesize parentObjectId=_parentObjectId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001198d2
- (unsigned long long)hash;	// IMP=0x00100000001197c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000119607
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000119486
- (void)copyTo:(id)arg1;	// IMP=0x0010000000119366
- (void)writeTo:(id)arg1;	// IMP=0x0010000000119245
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000119238
- (id)dictionaryRepresentation;	// IMP=0x0010000000118c15
- (id)description;	// IMP=0x0010000000118b66
@property(readonly, nonatomic) _Bool hasClassId;
@property(readonly, nonatomic) _Bool hasScheduleDate;
- (int)StringAsScheduleAction:(id)arg1;	// IMP=0x0010000000118ad7
- (id)scheduleActionAsString:(int)arg1;	// IMP=0x0010000000118a82
@property(nonatomic) _Bool hasScheduleAction;
@property(nonatomic) int scheduleAction; // @synthesize scheduleAction=_scheduleAction;
- (int)StringAsScheduledEntityType:(id)arg1;	// IMP=0x00100000001189b9
- (id)scheduledEntityTypeAsString:(int)arg1;	// IMP=0x0010000000118964
@property(nonatomic) _Bool hasScheduledEntityType;
@property(nonatomic) int scheduledEntityType; // @synthesize scheduledEntityType=_scheduledEntityType;
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasParentObjectId;
@property(readonly, nonatomic) _Bool hasObjectId;

@end

