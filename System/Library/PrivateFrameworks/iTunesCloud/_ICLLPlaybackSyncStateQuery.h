//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackSyncStateQuery : PBCodable
{
    NSString *_currentItemId;	// 8 = 0x8
    NSString *_initialAVSyncStartItemId;	// 16 = 0x10
    NSMutableArray *_participantStates;	// 24 = 0x18
    NSMutableArray *_transportControlStates;	// 32 = 0x20
    _Bool _initialAVSyncInitiator;	// 40 = 0x28
    struct {
        unsigned int initialAVSyncInitiator:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000000941b6
- (unsigned long long)hash;	// IMP=0x0000000000094107
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093fbd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093c77
- (void)writeTo:(id)arg1;	// IMP=0x00000000000939f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000939ec
- (id)dictionaryRepresentation;	// IMP=0x00000000000938b5
- (id)description;	// IMP=0x0000000000093806

@end

