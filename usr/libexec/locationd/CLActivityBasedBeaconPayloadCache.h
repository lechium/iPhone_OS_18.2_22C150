//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SPFinderInterface;
@protocol CLIntersiloUniverse;

@interface CLActivityBasedBeaconPayloadCache : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    shared_ptr_c7246d68 _external;	// 16 = 0x10
    struct CLSubHarvesterAvengerSettings _settings;	// 32 = 0x20
    SPFinderInterface *_finderInterface;	// 288 = 0x120
    int _recentSignalEnvironment;	// 296 = 0x128
    NSMutableArray *_beaconPayloadCache;	// 304 = 0x130
    NSMutableArray *_beaconPayloadsToUpload;	// 312 = 0x138
    _Bool _isCameraAppRunning;	// 320 = 0x140
}

- (id).cxx_construct;	// IMP=0x0020000000f3a6d6
- (void).cxx_destruct;	// IMP=0x0010000000f3a6c8
@property(retain) NSMutableArray *beaconPayloadsToUpload; // @synthesize beaconPayloadsToUpload=_beaconPayloadsToUpload;
@property(retain) NSMutableArray *beaconPayloadCache; // @synthesize beaconPayloadCache=_beaconPayloadCache;
- (double)computeCircleIntersectionAreaWithDistance:(double)arg1 firstRadius:(double)arg2 secondRadius:(double)arg3;	// IMP=0x0010000000f3a524
- (int)binAccuracy:(double)arg1;	// IMP=0x0010000000f3a3e2
- (void)updateCameraRunning:(_Bool)arg1;	// IMP=0x0010000000f3a3ca
- (void)uploadBeaconPayloadsIfAllowed;	// IMP=0x0010000000f39fd6
- (_Bool)isResubmitNeededwithOldLocationHacc:(double)arg1 newLocationHacc:(double)arg2 distance:(double)arg3;	// IMP=0x0010000000f39f4f
- (id)createNewBeaconPayloadwithNewLocation:(id)arg1 oldBeaconPayload:(id)arg2;	// IMP=0x0010000000f39bf3
- (id)createActivityRefreshBeaconPayloadIfNeededWithLocation:(id)arg1 payload:(id)arg2;	// IMP=0x0010000000f39275
- (void)regeotagBeaconPayloads;	// IMP=0x0010000000f38b88
- (void)collectSecondGeotagMetricWithResult:(long long)arg1 firstHorizontalAccuracy:(double)arg2;	// IMP=0x0010000000f38b6b
- (void)collectSecondGeotagMetricWithResult:(long long)arg1 firstHorizontalAccuracy:(double)arg2 secondHorizontalAccuracy:(double)arg3 distance:(double)arg4;	// IMP=0x0010000000f38880
- (void)receiveSignalEnvironment:(int)arg1;	// IMP=0x0010000000f38874
- (void)pruneActivityBasedBeaconPayloadCache;	// IMP=0x0010000000f38374
- (void)receiveBeaconPayload:(id)arg1;	// IMP=0x0010000000f3833f
- (void)dealloc;	// IMP=0x0010000000f382de
- (id)initInUniverse:(id)arg1 withExternal:(shared_ptr_c7246d68)arg2 withSettings:(struct CLSubHarvesterAvengerSettings)arg3;	// IMP=0x0010000000f3821c

@end
