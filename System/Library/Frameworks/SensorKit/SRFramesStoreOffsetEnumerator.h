//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SRFrameStore;

__attribute__((visibility("hidden")))
@interface SRFramesStoreOffsetEnumerator : NSObject
{
    SRFrameStore *_framesStore;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000343be
- (void)dealloc;	// IMP=0x0000000000034387

@end
