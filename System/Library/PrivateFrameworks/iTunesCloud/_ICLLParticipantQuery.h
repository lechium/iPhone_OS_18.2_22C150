//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _ICLLParticipantQuery : PBCodable
{
    NSMutableArray *_participants;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000110148
- (unsigned long long)hash;	// IMP=0x000000000011012b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011009b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010fefd
- (void)writeTo:(id)arg1;	// IMP=0x000000000010fdc7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010fdba
- (id)dictionaryRepresentation;	// IMP=0x000000000010fb8a
- (id)description;	// IMP=0x000000000010fadb

@end
