//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDDisplayMonitor, NSDate, NSMutableSet, NSString;
@protocol MRDLockScreenRoutingControllerDataSource, OS_dispatch_queue;

@interface MRDProximityController : NSObject
{
    _Bool _hasTriggered;	// 8 = 0x8
    _Bool _shouldRun;	// 9 = 0x9
    _Bool _invalidated;	// 10 = 0xa
    id <MRDLockScreenRoutingControllerDataSource> _dataSource;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableSet *_nearbyDevices;	// 32 = 0x20
    MRDDisplayMonitor *_displayMonitor;	// 40 = 0x28
    NSString *_mediaSuggestionDeviceID;	// 48 = 0x30
    NSDate *_mediaSuggestionDate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000007c6a5
@property(copy, nonatomic) NSDate *mediaSuggestionDate; // @synthesize mediaSuggestionDate=_mediaSuggestionDate;
@property(copy, nonatomic) NSString *mediaSuggestionDeviceID; // @synthesize mediaSuggestionDeviceID=_mediaSuggestionDeviceID;
@property(retain, nonatomic) MRDDisplayMonitor *displayMonitor; // @synthesize displayMonitor=_displayMonitor;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) _Bool shouldRun; // @synthesize shouldRun=_shouldRun;
@property(nonatomic) _Bool hasTriggered; // @synthesize hasTriggered=_hasTriggered;
@property(retain, nonatomic) NSMutableSet *nearbyDevices; // @synthesize nearbyDevices=_nearbyDevices;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <MRDLockScreenRoutingControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_handleElectedPlayerDidChangeNotification:(id)arg1;	// IMP=0x001000000007c566
- (void)_handleLayoutDidChangeNotification:(id)arg1;	// IMP=0x001000000007c1a1
- (id)_configurationForUID:(id)arg1;	// IMP=0x001000000007c088
- (void)_onQueue_reevaluateRemoteControlState;	// IMP=0x001000000007c082
- (void)_configureObserver;	// IMP=0x001000000007c07c
- (void)startObservationIfNeeded;	// IMP=0x001000000007c076
- (id)init;	// IMP=0x001000000007be7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
