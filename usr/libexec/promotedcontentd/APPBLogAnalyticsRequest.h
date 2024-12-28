//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSMutableArray, NSString;

@interface APPBLogAnalyticsRequest : PBRequest
{
    NSString *_bundleID;	// 8 = 0x8
    NSData *_contentiAdID;	// 16 = 0x10
    NSData *_dPID;	// 24 = 0x18
    NSMutableArray *_events;	// 32 = 0x20
    NSData *_iAdID;	// 40 = 0x28
}

+ (Class)eventsType;	// IMP=0x00200000000a0481
+ (id)options;	// IMP=0x00100000000a031c
- (void).cxx_destruct;	// IMP=0x00200000000a141b
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property(retain, nonatomic) NSData *contentiAdID; // @synthesize contentiAdID=_contentiAdID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a118e
- (unsigned long long)hash;	// IMP=0x00100000000a10ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a0fb7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a0d5a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a0c16
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a0a6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a0a60
- (id)dictionaryRepresentation;	// IMP=0x00100000000a0541
- (id)description;	// IMP=0x00100000000a0492
- (id)eventsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000a0464
- (unsigned long long)eventsCount;	// IMP=0x00100000000a0447
- (void)addEvents:(id)arg1;	// IMP=0x00100000000a03dd
- (void)clearEvents;	// IMP=0x00100000000a03c0
@property(readonly, nonatomic) _Bool hasDPID;
@property(readonly, nonatomic) _Bool hasContentiAdID;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasIAdID;

@end
