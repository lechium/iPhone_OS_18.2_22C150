//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10ChronoCore21TaskActivityScheduler : NSObject
{
    MISSING_TYPE *_schedulingProviderQueue;	// 8 = 0x8
    MISSING_TYPE *_schedulingProvider;	// 16 = 0x10
    MISSING_TYPE *_dataProtectionMonitor;	// 56 = 0x38
    MISSING_TYPE *_keybagProvider;	// 96 = 0x60
    MISSING_TYPE *_systemDataMigrator;	// 136 = 0x88
    MISSING_TYPE *_lock;	// 176 = 0xb0
    MISSING_TYPE *_lock_activityStore;	// 184 = 0xb8
    MISSING_TYPE *_lock_completedMigration;	// 192 = 0xc0
    MISSING_TYPE *_lock_userManager;	// 200 = 0xc8
    MISSING_TYPE *_lock_enqueueActivityBlocksWaitingForMigration;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00000000000147b0
- (id)init;	// IMP=0x0000000000017a00
- (void)dealloc;	// IMP=0x0000000000014790

@end

