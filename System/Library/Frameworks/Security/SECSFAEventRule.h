//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SECSFAAction, SECSFAVersionMatch;

__attribute__((visibility("hidden")))
@interface SECSFAEventRule : PBCodable
{
    long long _repeatAfterSeconds;	// 8 = 0x8
    SECSFAAction *_action;	// 16 = 0x10
    int _eventClass;	// 24 = 0x18
    NSString *_eventType;	// 32 = 0x20
    NSData *_match;	// 40 = 0x28
    NSString *_processName;	// 48 = 0x30
    SECSFAVersionMatch *_versions;	// 56 = 0x38
    _Bool _matchOnFirstFailure;	// 64 = 0x40
    struct {
        unsigned int repeatAfterSeconds:1;
        unsigned int eventClass:1;
        unsigned int matchOnFirstFailure:1;
    } _has;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000003d93f
@property(nonatomic) _Bool matchOnFirstFailure; // @synthesize matchOnFirstFailure=_matchOnFirstFailure;
@property(retain, nonatomic) SECSFAVersionMatch *versions; // @synthesize versions=_versions;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) long long repeatAfterSeconds; // @synthesize repeatAfterSeconds=_repeatAfterSeconds;
@property(retain, nonatomic) SECSFAAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSData *match; // @synthesize match=_match;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003d717
- (unsigned long long)hash;	// IMP=0x000000000003d5ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d415
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d2a6
- (void)copyTo:(id)arg1;	// IMP=0x000000000003d184
- (void)writeTo:(id)arg1;	// IMP=0x000000000003d062
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003d055
- (id)dictionaryRepresentation;	// IMP=0x000000000003cdd6
- (id)description;	// IMP=0x000000000003cd27
@property(nonatomic) _Bool hasMatchOnFirstFailure;
@property(readonly, nonatomic) _Bool hasVersions;
- (int)StringAsEventClass:(id)arg1;	// IMP=0x000000000003cbad
- (id)eventClassAsString:(int)arg1;	// IMP=0x000000000003cb5b
@property(nonatomic) _Bool hasEventClass;
@property(nonatomic) int eventClass; // @synthesize eventClass=_eventClass;
@property(readonly, nonatomic) _Bool hasProcessName;
@property(nonatomic) _Bool hasRepeatAfterSeconds;
@property(readonly, nonatomic) _Bool hasAction;
@property(readonly, nonatomic) _Bool hasMatch;
@property(readonly, nonatomic) _Bool hasEventType;

@end

