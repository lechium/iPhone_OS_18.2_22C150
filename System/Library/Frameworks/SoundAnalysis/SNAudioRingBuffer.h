//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SNAudioRingBuffer : NSObject
{
    struct unique_ptr<AT::RingBuffer, std::default_delete<AT::RingBuffer>> _ringBuffer;	// 8 = 0x8
}

+ (_Bool)copyRecentFramesFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x006000000021c64f
+ (id)copyRecentFramesOfAudioRingBufferToAVAudioBufferFrom:(id)arg1 frameCount:(long long)arg2 ringBufferStartSampleTime:(long long *)arg3;	// IMP=0x006000000021c543
+ (id)copyToAVAudioBufferFrom:(id)arg1 ringBufferStartSampleTime:(long long *)arg2 error:(id *)arg3;	// IMP=0x006000000021c335
- (id).cxx_construct;	// IMP=0x000000000021c766
- (void).cxx_destruct;	// IMP=0x000000000021c756
- (_Bool)fetch:(struct AudioBufferList *)arg1 frameCount:(unsigned int)arg2 frameNumber:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000021c2ad
- (_Bool)store:(const struct AudioBufferList *)arg1 frameCount:(unsigned int)arg2 frameNumber:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000021c225
- (_Bool)getTimeBoundsWithStartTime:(long long *)arg1 endTime:(long long *)arg2;	// IMP=0x000000000021c11b
- (id)capacityFramesWithError:(id *)arg1;	// IMP=0x000000000021c08f
- (_Bool)resizeWithFormat:(id)arg1 newCapacityFrames:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000021bedb
- (id)formatWithError:(id *)arg1;	// IMP=0x000000000021be3b
- (id)initWithFormat:(id)arg1 capacityFrames:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000021bbbc

@end

