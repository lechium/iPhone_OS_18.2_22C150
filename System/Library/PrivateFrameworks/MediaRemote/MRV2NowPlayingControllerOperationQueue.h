//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface MRV2NowPlayingControllerOperationQueue : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
    _Bool _invalidated;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cb9fa
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb977
- (void)invalidate;	// IMP=0x00000000000cb922
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000cb884

@end
