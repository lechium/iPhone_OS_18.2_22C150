//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FCCKPOperation : PBCodable
{
    NSString *_operationUUID;	// 8 = 0x8
    int _type;	// 16 = 0x10
    _Bool _last;	// 20 = 0x14
    _Bool _synchronousMode;	// 21 = 0x15
    struct {
        unsigned int type:1;
        unsigned int last:1;
        unsigned int synchronousMode:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000033c5ff
- (unsigned long long)hash;	// IMP=0x000000000033c55c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033c443
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033c373
- (void)writeTo:(id)arg1;	// IMP=0x000000000033c2c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000033c2b4
- (id)dictionaryRepresentation;	// IMP=0x000000000033be1c
- (id)description;	// IMP=0x000000000033bd6d

@end

