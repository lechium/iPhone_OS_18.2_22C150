//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _ICLLPlaybackControlSettings, _ICLLQueue;

__attribute__((visibility("hidden")))
@interface _ICLLQueueQuery : PBCodable
{
    _ICLLPlaybackControlSettings *_controlSettings;	// 8 = 0x8
    _ICLLQueue *_queue;	// 16 = 0x10
    NSString *_queueContext;	// 24 = 0x18
    int _revision;	// 32 = 0x20
    CDStruct_3e022450 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000001108b3
- (unsigned long long)hash;	// IMP=0x0000000000110823
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000110714
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000110626
- (void)writeTo:(id)arg1;	// IMP=0x0000000000110586
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000110579
- (id)dictionaryRepresentation;	// IMP=0x0000000000110421
- (id)description;	// IMP=0x0000000000110372

@end

