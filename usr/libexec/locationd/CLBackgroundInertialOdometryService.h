//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSArray, NSMutableSet, NSString;

@interface CLBackgroundInertialOdometryService : CLIntersiloService
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _backgroundBatchDispatcher;	// 8 = 0x8
    float _trajectorySampleInterval;	// 16 = 0x10
    struct unique_ptr<CLInertialOdometryNotifier::GeomagneticModelClient, std::default_delete<CLInertialOdometryNotifier::GeomagneticModelClient>> _geomagneticModelClient;	// 24 = 0x18
    _Bool _isStatic;	// 32 = 0x20
    float _rotationArbitraryToTrueNorth;	// 36 = 0x24
    NSMutableSet *_activeClients;	// 40 = 0x28
    NSArray *_attitude;	// 48 = 0x30
}

+ (id)getSilo;	// IMP=0x00200000003a1820
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003a1807
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003a17aa
+ (_Bool)isAvailable;	// IMP=0x00100000003a1617
- (id).cxx_construct;	// IMP=0x00200000003a2f9e
- (void).cxx_destruct;	// IMP=0x00100000003a2f59
@property(retain, nonatomic) NSArray *attitude; // @synthesize attitude=_attitude;
@property(retain, nonatomic) NSMutableSet *activeClients; // @synthesize activeClients=_activeClients;
- (id)sessionForClient:(byref id)arg1;	// IMP=0x00100000003a2ddc
- (void)toggleUpdates;	// IMP=0x00100000003a2b77
- (void)onBackgroundBatchData:(const struct BackgroundInertialOdometryBatch *)arg1;	// IMP=0x00100000003a2341
- (void)stopBackgroundInertialOdometryUpdatesForClient:(byref id)arg1;	// IMP=0x00100000003a212c
- (void)startBackgroundInertialOdometryUpdatesForClient:(byref id)arg1 withIdentifier:(id)arg2 usingReferenceFrame:(unsigned long long)arg3;	// IMP=0x00100000003a1d5f
- (void)isAvailableWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000003a1d30
- (void)endService;	// IMP=0x00100000003a1cb7
- (void)beginService;	// IMP=0x00100000003a1907
- (void)dealloc;	// IMP=0x00100000003a18b9
- (id)init;	// IMP=0x00100000003a187c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
