//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface FAFamilyFetchActivityScheduler : NSObject
{
    MISSING_TYPE *$__lazy_storage_$_scheduler;	// 8 = 0x8
    MISSING_TYPE *familyCircleFetchBlock;	// 48 = 0x30
    MISSING_TYPE *cacheLoadBlock;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000051f80
- (id)init;	// IMP=0x0000000000051f20
- (void)reschedule;	// IMP=0x0000000000051990
- (id)initWithFamilyCircleFetchBlock:(CDUnknownBlockType)arg1 cacheLoadBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000050760

@end
