//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, geo_isolater;
@protocol _GEONetworkDefaultsServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsLocalProxy : NSObject
{
    id <_GEONetworkDefaultsServerProxyDelegate> _delegate;	// 8 = 0x8
    geo_isolater *_isolation;	// 16 = 0x10
    NSMutableArray *_updateCompletionHandlers;	// 24 = 0x18
    unsigned long long _stateCaptureHandle;	// 32 = 0x20
    double _lastAttempt;	// 40 = 0x28
    int _missingContainerRetryCount;	// 48 = 0x30
    _Bool _activelyUpdating;	// 52 = 0x34
    struct atomic_flag _isWaiting;	// 53 = 0x35
}

- (void).cxx_destruct;	// IMP=0x0000000000d48af3
@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0000000000d48896
- (_Bool)_updateWithNewConfig:(id)arg1 request:(id)arg2 response:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000d47de7
- (void)_callCompletionHandlersWithError:(id)arg1;	// IMP=0x0000000000d47ba4
- (void)_processNetworkDefaultsResponse:(id)arg1 data:(id)arg2 error:(id)arg3 request:(id)arg4;	// IMP=0x0000000000d47762
- (id)_urlRequestForNetworkDefaults;	// IMP=0x0000000000d47491
- (void)_updateNetworkDefaults;	// IMP=0x0000000000d46ee3
- (void)updateNetworkDefaultsWithReason:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000d469ed
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;	// IMP=0x0000000000d469d3
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x0000000000d46957
- (unsigned long long)_updateReason;	// IMP=0x0000000000d463ef
- (id)init;	// IMP=0x0000000000d46262

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
