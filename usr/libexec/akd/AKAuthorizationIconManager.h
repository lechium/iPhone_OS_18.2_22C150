//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AKAuthorizationIconManager : NSObject
{
    struct os_unfair_lock_s _dataBlocksLock;	// 8 = 0x8
    NSMutableDictionary *_dataBlocks;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x004000000000428c
- (void).cxx_destruct;	// IMP=0x00200000000051e3
- (void)_removeDataBlockForKey:(id)arg1;	// IMP=0x0010000000005132
- (void)_setDataBlock:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000500c
- (id)_dataBlockForKey:(id)arg1;	// IMP=0x0010000000004f1e
- (id)_serviceIDForRequestContext:(id)arg1;	// IMP=0x0010000000004e70
- (_Bool)_isFetchingIconWithRequestContext:(id)arg1;	// IMP=0x0010000000004e08
- (id)_startFetchingIconForBundleID:(id)arg1 size:(id)arg2 scale:(id)arg3;	// IMP=0x0010000000004afe
- (void)continueFetchingIconWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004997
- (void)setFetchIconBlockForPresenter:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000004602
- (void)startFetchingIconWithRequestContext:(id)arg1;	// IMP=0x00100000000042e1
- (id)init;	// IMP=0x0010000000004251

@end

