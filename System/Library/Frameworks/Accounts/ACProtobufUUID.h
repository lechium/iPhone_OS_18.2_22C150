//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface ACProtobufUUID : PBCodable
{
    NSString *_value;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005fba5
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005fb5c
- (unsigned long long)hash;	// IMP=0x000000000005fb3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005faaf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005fa37
- (void)copyTo:(id)arg1;	// IMP=0x000000000005fa14
- (void)writeTo:(id)arg1;	// IMP=0x000000000005f9f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005f9ea
- (id)dictionaryRepresentation;	// IMP=0x000000000005f845
- (id)description;	// IMP=0x000000000005f796
@property(retain, nonatomic) NSUUID *uuid;
- (id)initWithUUID:(id)arg1;	// IMP=0x00000000000537e1

@end

