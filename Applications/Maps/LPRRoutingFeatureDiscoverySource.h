//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FeatureDiscoveryModel, NSString, VGVirtualGarage;
@protocol FeatureDiscoverySourceDelegate, OS_dispatch_queue;

@interface LPRRoutingFeatureDiscoverySource : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    _Bool _dismissed;	// 24 = 0x18
    _Bool _available;	// 25 = 0x19
    unsigned long long _modelViewedTimes;	// 32 = 0x20
    id <FeatureDiscoverySourceDelegate> _delegate;	// 40 = 0x28
    long long _priority;	// 48 = 0x30
    long long _transportType;	// 56 = 0x38
    VGVirtualGarage *_virtualGarage;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000082fd67
@property(retain, nonatomic) VGVirtualGarage *virtualGarage; // @synthesize virtualGarage=_virtualGarage;
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) __weak id <FeatureDiscoverySourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x001000000082fbfb
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x001000000082fbd6
- (void)_reloadAvailability;	// IMP=0x001000000082f809
- (unsigned long long)numberOfLPRLVehicles;	// IMP=0x001000000082f678
- (void)_didSelectModel;	// IMP=0x001000000082f54d
- (void)_didViewModel;	// IMP=0x001000000082f356
- (void)_dismiss;	// IMP=0x001000000082f21b
@property(readonly, nonatomic) _Bool wantsAllRouteCollectionChanges;
@property(readonly, nonatomic) FeatureDiscoveryModel *model;
@property(nonatomic, getter=isAvailable) _Bool available;
- (void)setTransportType:(long long)arg1 routeCollection:(id)arg2;	// IMP=0x001000000082ea68
- (void)dealloc;	// IMP=0x001000000082ea32
- (id)initWithPriority:(long long)arg1 delegate:(id)arg2;	// IMP=0x001000000082e5f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

