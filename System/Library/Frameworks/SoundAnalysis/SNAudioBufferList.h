//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SNAudioBufferList : NSObject
{
    struct unique_ptr<CABufferList, std::default_delete<CABufferList>> _ringBufferWriteBufferList;	// 8 = 0x8
}

+ (void)unownedViewOfRecentFramesWithSourceBuffer:(id)arg1 destinationBuffer:(id)arg2 numberOfRecentFrames:(unsigned int)arg3;	// IMP=0x0060000000214b0f
- (id).cxx_construct;	// IMP=0x0000000000214cb6
- (void).cxx_destruct;	// IMP=0x0000000000214c95
- (const struct AudioBufferList *)bufferList;	// IMP=0x0000000000214b01
- (id)initWithFormat:(id)arg1;	// IMP=0x0000000000214a37

@end

