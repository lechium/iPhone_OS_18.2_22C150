//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GKBadgeController : NSObject
{
    NSMutableDictionary *_badgeDictionaries[4];	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 40 = 0x28
    _Bool _dirty;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x00400000000f26a4
- (void).cxx_destruct;	// IMP=0x00200000000f48a6
- (void)registerBadgePermissionForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f45ee
- (void)unbadgeAllApplications;	// IMP=0x00100000000f4346
- (void)badgeAllApplications;	// IMP=0x00100000000f403e
- (void)setBadgeCount:(unsigned long long)arg1 forBundleID:(id)arg2 badgeType:(unsigned long long)arg3;	// IMP=0x00100000000f3d0e
- (unsigned long long)_totalBadgeCountForBundleID:(id)arg1;	// IMP=0x00100000000f3af7
- (unsigned long long)badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x00100000000f3859
- (unsigned long long)_badgeCountForBundleID:(id)arg1 badgeType:(unsigned long long)arg2;	// IMP=0x00100000000f3633
- (id)_dictionaryForBadgeType:(unsigned long long)arg1;	// IMP=0x00100000000f347b
- (void)badgeBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x00100000000f31f8
- (void)badgeApplicationWithBundleID:(id)arg1 badgeCount:(unsigned long long)arg2;	// IMP=0x00100000000f2e72
- (_Bool)isBadgingEnabledForBundleID:(id)arg1;	// IMP=0x00100000000f2dcb
- (void)synchronize;	// IMP=0x00100000000f283a
- (id)_plistKeyForBadgeType:(unsigned long long)arg1;	// IMP=0x00100000000f2815
- (id)init;	// IMP=0x00100000000f27ad
- (id)_badgeCountURL;	// IMP=0x00100000000f26f9

@end
