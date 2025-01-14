//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol AMSUIWebJSAppQueryManagerDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIWebJSAppQueryManager : NSObject
{
    id <AMSUIWebJSAppQueryManagerDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_observingQueries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b7415
@property(readonly, nonatomic) NSMutableDictionary *observingQueries; // @synthesize observingQueries=_observingQueries;
@property(nonatomic) __weak id <AMSUIWebJSAppQueryManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_postMediaQueryResultsChangeEventWithApps:(id)arg1;	// IMP=0x00000000000b7302
- (id)_executeAppQuery:(id)arg1;	// IMP=0x00000000000b6f1e
- (id)_encodeApp:(id)arg1;	// IMP=0x00000000000b6c21
- (void)appQuery:(id)arg1 resultsDidChange:(id)arg2;	// IMP=0x00000000000b6c0c
- (void)stopObservingAppsWithStoreItemIDs:(id)arg1;	// IMP=0x00000000000b6a33
- (void)stopObservingAppsWithBundleIDs:(id)arg1;	// IMP=0x00000000000b685a
- (void)stopObservingAllApps;	// IMP=0x00000000000b67da
- (id)queryAppsWithStoreItemIDs:(id)arg1 startObserving:(_Bool)arg2;	// IMP=0x00000000000b646b
- (id)queryAppsWithBundleIDs:(id)arg1 startObserving:(_Bool)arg2;	// IMP=0x00000000000b6048
- (void)invalidate;	// IMP=0x00000000000b5fb8
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000b5f3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

