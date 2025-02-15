//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileProviderDomainVersion, NSFileProviderManager, NSString;

__attribute__((visibility("hidden")))
@interface FPPendingSetEnumerator : NSObject
{
    NSFileProviderManager *_manager;	// 8 = 0x8
    NSFileProviderDomainVersion *_domainVersion;	// 16 = 0x10
    double _refreshInterval;	// 24 = 0x18
    _Bool _maximumSizeReached;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000011e8d0
@property(readonly, nonatomic, getter=isMaximumSizeReached) _Bool maximumSizeReached; // @synthesize maximumSizeReached=_maximumSizeReached;
@property(readonly, nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly, nonatomic) NSFileProviderDomainVersion *domainVersion; // @synthesize domainVersion=_domainVersion;
- (void)invalidate;	// IMP=0x000000000011e8ac
- (void)currentSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011e77c
- (void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;	// IMP=0x000000000011e368
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;	// IMP=0x000000000011df76
- (id)initWithManager:(id)arg1;	// IMP=0x000000000011def1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

