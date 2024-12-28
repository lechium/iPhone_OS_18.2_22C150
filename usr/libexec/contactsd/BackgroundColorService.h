//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNPublishingSubject;
@protocol CNCancelable, CNInhibitor, CNScheduler;

@interface BackgroundColorService : NSObject
{
    CNPublishingSubject *_coalescer;	// 8 = 0x8
    id <CNCancelable> _coalescingToken;	// 16 = 0x10
    id <CNScheduler> _workQueue;	// 24 = 0x18
    id <CNInhibitor> _coalescingInhibitor;	// 32 = 0x20
}

+ (id)makeWorkQueueUsingSchedulerProvider:(id)arg1;	// IMP=0x002000000000c122
+ (unsigned long long)_getDefaultBatchSize;	// IMP=0x001000000000bf9a
+ (unsigned long long)batchSize;	// IMP=0x001000000000bedc
+ (id)sharedInstance;	// IMP=0x001000000000be57
- (void).cxx_destruct;	// IMP=0x002000000000d3ac
@property(retain, nonatomic) id <CNInhibitor> coalescingInhibitor; // @synthesize coalescingInhibitor=_coalescingInhibitor;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) id <CNCancelable> coalescingToken; // @synthesize coalescingToken=_coalescingToken;
@property(retain, nonatomic) CNPublishingSubject *coalescer; // @synthesize coalescer=_coalescer;
- (void)batchUpdateBackgroundColorsForContactIdentifiers:(id)arg1;	// IMP=0x001000000000cd58
- (void)_updateBackgroundColorIfNeeded:(id)arg1 colorAnalyzer:(id)arg2;	// IMP=0x001000000000ca35
- (id)fetchContactsWithImageKeysForIdentifiers:(id)arg1;	// IMP=0x001000000000c83e
- (id)imageKeysToFetch;	// IMP=0x001000000000c7aa
- (id)fetchContactIdentifiersForContactsMissingBackgroundColors;	// IMP=0x001000000000c51f
- (void)handleNotificationName:(id)arg1;	// IMP=0x001000000000c333
- (id)interestedNotifications;	// IMP=0x001000000000c2c1
- (void)handleCoalescedEvent:(id)arg1;	// IMP=0x001000000000c180
- (id)init;	// IMP=0x001000000000bfda

@end
