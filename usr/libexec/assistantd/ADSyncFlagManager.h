//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface ADSyncFlagManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_cachedFlags;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00400000002f7917
- (void).cxx_destruct;	// IMP=0x00200000002f77cb
- (void)_clearSyncNeededFlagsForKeys:(id)arg1;	// IMP=0x00100000002f7512
- (void)_setSyncNeededFlagsForKeys:(id)arg1;	// IMP=0x00100000002f71f3
- (void)_fetchSyncFlagsOnDisk;	// IMP=0x00100000002f6f2d
- (void)clearAllFlags;	// IMP=0x00100000002f6ee2
- (void)clearFlagsForKeys:(id)arg1;	// IMP=0x00100000002f6e3b
- (void)setSyncNeededFlagForKeys:(id)arg1;	// IMP=0x00100000002f6d94
- (void)fetchKeysThatNeedToSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f6cfd
- (id)init;	// IMP=0x00100000002f6c64

@end
