//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TUHandle;

__attribute__((visibility("hidden")))
@interface CSDMessagingHandle : PBCodable
{
    NSString *_isoCountryCode;	// 8 = 0x8
    NSString *_siriDisplayName;	// 16 = 0x10
    int _type;	// 24 = 0x18
    NSString *_value;	// 32 = 0x20
    struct {
        unsigned int type:1;
    } _has;	// 40 = 0x28
}

+ (id)handleWithTUHandle:(id)arg1;	// IMP=0x001000000002e6b8
- (void).cxx_destruct;	// IMP=0x0000000000158af8
@property(retain, nonatomic) NSString *siriDisplayName; // @synthesize siriDisplayName=_siriDisplayName;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001589e6
- (unsigned long long)hash;	// IMP=0x000000000015894f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000158839
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000158750
- (void)copyTo:(id)arg1;	// IMP=0x00000000001586ad
- (void)writeTo:(id)arg1;	// IMP=0x000000000015860d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000158600
- (id)dictionaryRepresentation;	// IMP=0x0000000000158293
- (id)description;	// IMP=0x00000000001581e4
@property(readonly, nonatomic) _Bool hasSiriDisplayName;
@property(readonly, nonatomic) _Bool hasIsoCountryCode;
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000001580f1
- (id)typeAsString:(int)arg1;	// IMP=0x00000000001580a8
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) TUHandle *tuHandle;

@end

