//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUIMetricsFlushTimer : NSObject
{
    NSHashTable *_metricsControllers;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    unsigned long long _timerStartTime;	// 24 = 0x18
}

+ (id)sharedTimer;	// IMP=0x00600000003ba003
- (void).cxx_destruct;	// IMP=0x00000000003ba6db
- (void)_performFlush;	// IMP=0x00000000003ba502
- (void)_cancelFlushTimer;	// IMP=0x00000000003ba4cc
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000000003ba4ba
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000000003ba460
- (void)removeMetricsController:(id)arg1;	// IMP=0x00000000003ba3d0
- (void)reloadFlushInterval;	// IMP=0x00000000003ba083
- (void)flushAllMetricsControllers;	// IMP=0x00000000003ba071
- (void)addMetricsController:(id)arg1;	// IMP=0x00000000003ba03f
- (void)dealloc;	// IMP=0x00000000003b9f53
- (id)init;	// IMP=0x00000000003b9e17

@end

