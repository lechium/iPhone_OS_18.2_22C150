//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC25RemindersIntentsFramework27TTRSnoozeTasksIntentHandler : NSObject
{
    MISSING_TYPE *store;	// 8 = 0x8
    MISSING_TYPE *queue;	// 16 = 0x10
    MISSING_TYPE *dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000021a60
- (id)init;	// IMP=0x0000000000021a00
- (void)handleSnoozeTasks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021980
- (void)resolveNextTriggerTimeForSnoozeTasks:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021900
- (void)resolveTasksForSnoozeTasks:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021820

@end

