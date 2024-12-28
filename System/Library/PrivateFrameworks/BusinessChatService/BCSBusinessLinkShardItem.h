//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface BCSBusinessLinkShardItem : PBCodable
{
    long long _count;	// 8 = 0x8
    long long _index;	// 16 = 0x10
    long long _ttl;	// 24 = 0x18
    NSData *_filter;	// 32 = 0x20
    CDStruct_db572d93 _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005819b
@property(retain, nonatomic) NSData *filter; // @synthesize filter=_filter;
@property(nonatomic) long long ttl; // @synthesize ttl=_ttl;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000580a5
- (unsigned long long)hash;	// IMP=0x0000000000058023
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000057f1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000057e4e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000057db0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000057d00
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000579de
- (id)dictionaryRepresentation;	// IMP=0x0000000000057868
- (id)description;	// IMP=0x00000000000577b9
@property(readonly, nonatomic) _Bool hasFilter;
@property(nonatomic) _Bool hasTtl;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) _Bool hasIndex;

@end
