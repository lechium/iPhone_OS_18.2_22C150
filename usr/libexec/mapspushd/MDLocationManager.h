//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationManager, GEOObserverHashTable, NSString;
@protocol OS_dispatch_queue;

@interface MDLocationManager : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_locationQueue;	// 16 = 0x10
    CLLocationManager *_locationManager;	// 24 = 0x18
    GEOObserverHashTable *_locationObservers;	// 32 = 0x20
    _Bool _mapsAuthorized;	// 40 = 0x28
    _Bool _mapsLocationIsPrecise;	// 41 = 0x29
    double _requestedAccuracy;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000012a20
@property(nonatomic) double requestedAccuracy; // @synthesize requestedAccuracy=_requestedAccuracy;
@property(readonly, nonatomic) _Bool mapsPreciseLocationAuthorized; // @synthesize mapsPreciseLocationAuthorized=_mapsLocationIsPrecise;
@property(readonly, nonatomic) _Bool mapsLocationAuthorized; // @synthesize mapsLocationAuthorized=_mapsAuthorized;
- (void)mapsInstallStateDidChange:(_Bool)arg1;	// IMP=0x0010000000012996
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0010000000012878
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000127bc
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00100000000125a1
- (void)_notifyClients:(id)arg1 error:(id)arg2;	// IMP=0x00100000000124c6
- (void)_shiftLocationIfNeeded:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000121da
- (void)_timeoutOccurred;	// IMP=0x0010000000012165
- (void)fetchSingleLocationWithAccuracy:(double)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011f21
- (void)unregisterLocationObserver:(id)arg1;	// IMP=0x0010000000011e15
- (void)registerLocationObserver:(id)arg1;	// IMP=0x0010000000011caf
- (void)_setupLocationManager;	// IMP=0x0010000000011bc8
- (void)dealloc;	// IMP=0x0010000000011b86
- (id)init;	// IMP=0x0010000000011a89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

