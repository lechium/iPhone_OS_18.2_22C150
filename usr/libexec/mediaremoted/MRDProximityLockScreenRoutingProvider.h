//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;
@protocol MRDLockScreenRoutingProviderDelegate, OS_dispatch_queue;

@interface MRDProximityLockScreenRoutingProvider : NSObject
{
    _Bool _invalidated;	// 8 = 0x8
    id <MRDLockScreenRoutingProviderDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableSet *_nearbyDevices;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000265f7
@property(retain, nonatomic) NSMutableSet *nearbyDevices; // @synthesize nearbyDevices=_nearbyDevices;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) __weak id <MRDLockScreenRoutingProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearNearbyDevices;	// IMP=0x00100000000264ac
- (void)_configureObserver;	// IMP=0x00100000000264a6
- (void)startObservationIfNeeded;	// IMP=0x0010000000026375
- (void)didSwitchRouteTo:(id)arg1;	// IMP=0x001000000002636f
@property(readonly, copy, nonatomic) NSArray *nearbyDeviceIdentifiers;
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x00100000000262c8

@end

