//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, CUTWeakReference, CoreTelephonyClient, NSString, PCInterfaceUsabilityMonitor;
@protocol OS_dispatch_queue, PCInterfaceUsabilityMonitorDelegate;

__attribute__((visibility("hidden")))
@interface PCWWANUsabilityMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_ivarQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;	// 24 = 0x18
    CUTWeakReference *_delegateReference;	// 32 = 0x20
    _Bool _isInCall;	// 40 = 0x28
    _Bool _isInHighPowerState;	// 41 = 0x29
    _Bool _trackUsability;	// 42 = 0x2a
    unsigned long long _thresholdOffTransitionCount;	// 48 = 0x30
    double _trackedTimeInterval;	// 56 = 0x38
    NSString *_interfaceName;	// 64 = 0x40
    PCInterfaceUsabilityMonitor *_interfaceMonitor;	// 72 = 0x48
    int _currentRAT;	// 80 = 0x50
    unsigned int _currentDataBearerSoMask;	// 84 = 0x54
    int _powerlogCDRXToken;	// 88 = 0x58
    CoreTelephonyClient *_ctClient;	// 96 = 0x60
    int _wwanContextID;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_ctServerQueue;	// 112 = 0x70
    CTXPCServiceSubscriptionContext *_currentDataSimContext;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000016de0
- (void)interfaceConstraintChanged:(id)arg1;	// IMP=0x0000000000016ca7
- (void)interfaceReachabilityChanged:(id)arg1;	// IMP=0x0000000000016b6e
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;	// IMP=0x0000000000016a16
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000168f4
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) _Bool isNetworkingPowerExpensiveToUse;
@property(readonly, nonatomic) long long interfaceConstraint;
@property(readonly, nonatomic) _Bool isRadioHot;
@property(readonly, nonatomic) _Bool isBadLinkQuality;
@property(readonly, nonatomic) _Bool isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) _Bool isInternetReachable;
@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) _Bool isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) long long interfaceIdentifier;
- (void)setTrackedTimeInterval:(double)arg1;	// IMP=0x0000000000016121
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;	// IMP=0x00000000000160a8
- (void)setTrackUsability:(_Bool)arg1;	// IMP=0x0000000000015ff4
- (void)_forwardConfigurationOnIvarQueue;	// IMP=0x0000000000015fa6
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
@property(readonly, nonatomic) int currentRAT; // @synthesize currentRAT=_currentRAT;
- (id)_currentDataSimContext;	// IMP=0x0000000000015ce4
@property(readonly, nonatomic) NSString *networkCode;
@property(readonly, nonatomic) unsigned long long interface5GMode;
@property(readonly, nonatomic) _Bool isLTEWithCDRX;
- (_Bool)_isCurrentDataSimContextOnIvarQueue:(id)arg1;	// IMP=0x0000000000015c67
- (void)_adjustInterfaceNameForWWANContextID:(int)arg1 interfaceName:(id)arg2 forContext:(id)arg3;	// IMP=0x0000000000015a1a
- (void)_setupWWANMonitor;	// IMP=0x0000000000015944
- (void)dealloc;	// IMP=0x00000000000158e6
- (id)initWithDelegateQueue:(id)arg1;	// IMP=0x000000000001575c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
