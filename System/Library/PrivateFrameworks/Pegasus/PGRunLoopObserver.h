//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PGRunLoopObserver : NSObject
{
    CDUnknownBlockType _actions;	// 8 = 0x8
    struct __CFRunLoopObserver *_runLoopObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000148a8
@property(nonatomic) struct __CFRunLoopObserver *runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(copy, nonatomic) CDUnknownBlockType actions; // @synthesize actions=_actions;
- (void)dealloc;	// IMP=0x000000000001468d

@end
