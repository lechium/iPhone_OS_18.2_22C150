//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ARSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MDARSessionObserver : NSObject
{
    ARSession *_session;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    struct ARSessionObserver *_observer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001026b90
@property(nonatomic) __weak ARSession *session; // @synthesize session=_session;
@property(nonatomic) struct ARSessionObserver *observer; // @synthesize observer=_observer;
- (id)initWithObserver:(struct ARSessionObserver *)arg1 onQueue:(id)arg2;	// IMP=0x0000000001026aa0

@end
