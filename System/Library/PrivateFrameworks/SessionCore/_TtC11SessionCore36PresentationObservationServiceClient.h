//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11SessionCore36PresentationObservationServiceClient : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *connection;	// 24 = 0x18
    MISSING_TYPE *lock;	// 32 = 0x20
    MISSING_TYPE *_lock_bufferedPresentationUpdate;	// 40 = 0x28
    MISSING_TYPE *_lock_pendingAck;	// 48 = 0x30
    MISSING_TYPE *_lock_predicate;	// 2004049759 = 0x77735f5f
}

- (void).cxx_destruct;	// IMP=0x000000000005d7f0
- (id)init;	// IMP=0x000000000005d7a0
- (_Bool)subscribeToActivityPresentationMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005daf0

@end

