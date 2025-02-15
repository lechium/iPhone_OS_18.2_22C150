//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchableItemError : PBCodable
{
    long long _code;	// 8 = 0x8
    NSString *_customDomain;	// 16 = 0x10
    int _domain;	// 24 = 0x18
}

+ (id)errorFromString:(id)arg1;	// IMP=0x00100000000aa14b
+ (id)stringFromError:(id)arg1;	// IMP=0x00100000000a9f99
- (void).cxx_destruct;	// IMP=0x0000000000143aaa
@property(retain, nonatomic) NSString *customDomain; // @synthesize customDomain=_customDomain;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) int domain; // @synthesize domain=_domain;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000143a03
- (unsigned long long)hash;	// IMP=0x00000000001439b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000143907
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000143871
- (void)copyTo:(id)arg1;	// IMP=0x000000000014382b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001437bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001437ae
- (id)dictionaryRepresentation;	// IMP=0x0000000000143414
- (id)description;	// IMP=0x0000000000143365
@property(readonly, nonatomic) _Bool hasCustomDomain;
- (int)StringAsDomain:(id)arg1;	// IMP=0x00000000001432b9
- (id)domainAsString:(int)arg1;	// IMP=0x0000000000143270

@end

