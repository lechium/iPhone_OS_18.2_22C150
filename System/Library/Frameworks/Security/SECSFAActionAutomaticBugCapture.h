//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SECSFAActionAutomaticBugCapture : PBCodable
{
    NSString *_domain;	// 8 = 0x8
    NSString *_subtype;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002d7ed
@property(retain, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002d6fb
- (unsigned long long)hash;	// IMP=0x000000000002d68e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002d5ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d4ea
- (void)copyTo:(id)arg1;	// IMP=0x000000000002d467
- (void)writeTo:(id)arg1;	// IMP=0x000000000002d3ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002d3e0
- (id)dictionaryRepresentation;	// IMP=0x000000000002d336
- (id)description;	// IMP=0x000000000002d287
@property(readonly, nonatomic) _Bool hasSubtype;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasDomain;

@end

