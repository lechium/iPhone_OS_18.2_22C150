//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16HealthExperience31CloudSyncEventPublisherObserver : NSObject
{
    MISSING_TYPE *healthStore;	// 8 = 0x8
    MISSING_TYPE *observer;	// 16 = 0x10
    MISSING_TYPE *publisher;	// 24 = 0x18
    MISSING_TYPE *subject;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000043680
- (id)init;	// IMP=0x0000000000043620
- (void)cloudSyncObserverStatusUpdated:(id)arg1 status:(id)arg2;	// IMP=0x0000000000043540
- (void)cloudSyncObserverSyncCompleted:(id)arg1;	// IMP=0x0000000000043470
- (void)cloudSyncObserver:(id)arg1 syncFailedWithError:(id)arg2;	// IMP=0x00000000000433b0
- (void)cloudSyncObserver:(id)arg1 syncDidStartWithProgress:(id)arg2;	// IMP=0x0000000000043350

@end
