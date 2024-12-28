//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLTimer, NSMutableArray, SPAdvertisement, SPBeaconPayload;
@protocol CLIntersiloUniverse;

@interface CLSubHarvesterAvengerDataCollection : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    CLTimer *_cacheAdvTimer;	// 16 = 0x10
    CLTimer *_stopDataCollectionTimer;	// 24 = 0x18
    CLTimer *_cancelDataCollectionTimer;	// 32 = 0x20
    int recentSignalEnvironment;	// 40 = 0x28
    void *_proactiveRequestMonitor;	// 48 = 0x30
    struct CLSubHarvesterAvengerSettings _settings;	// 56 = 0x38
    SPAdvertisement *targetAdv;	// 312 = 0x138
    SPBeaconPayload *targetPayload;	// 320 = 0x140
    struct list<CLDaemonLocation, std::allocator<CLDaemonLocation>> locationCache;	// 328 = 0x148
    NSMutableArray *motionCache;	// 352 = 0x160
    long long _state;	// 360 = 0x168
}

- (id).cxx_construct;	// IMP=0x002000000096e36d
- (void).cxx_destruct;	// IMP=0x001000000096e35c
- (_Bool)isEqualToTargetAdv:(id)arg1;	// IMP=0x001000000096e239
- (id)getAdvType:(id)arg1;	// IMP=0x001000000096e1d7
- (long long)getTimeOfDayForAnalytics;	// IMP=0x001000000096e17c
- (void)pruneMotionCacheAfterAdv;	// IMP=0x001000000096e138
- (void)pruneMotionCacheBeforeAdv;	// IMP=0x001000000096e03c
- (void)pruneLocationCacheAfterAdv;	// IMP=0x001000000096dffd
- (void)pruneLocationCacheBeforeAdv;	// IMP=0x001000000096df49
- (id)buildEventWithAdvWithFirstTimeStamp:(id)arg1;	// IMP=0x001000000096dd1c
- (id)buildEventWithMotionWithFirstTimeStamp:(id)arg1;	// IMP=0x001000000096da9a
- (id)buildEventWithLocationWithFirstTimeStamp:(id)arg1;	// IMP=0x001000000096d92d
- (id)buildEvent;	// IMP=0x001000000096d76f
- (void)submitData;	// IMP=0x001000000096d699
- (void)stopDataCollection;	// IMP=0x001000000096d545
- (void)identifyTargetAdv:(id)arg1;	// IMP=0x001000000096d0b8
- (void)startDataCollection;	// IMP=0x001000000096cd43
- (void)receiveSignalEnvironment:(int)arg1;	// IMP=0x001000000096cd3a
- (void)receiveBeaconPayload:(id)arg1;	// IMP=0x001000000096cbdc
- (void)receiveAdvertisement:(id)arg1;	// IMP=0x001000000096cb81
-     // Error parsing type: v152@0:8{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}16, name: receiveMotionActivity:
- (void)receiveLocation:(struct CLDaemonLocation)arg1;	// IMP=0x001000000096c79d
- (void)dealloc;	// IMP=0x001000000096c6ca
- (id)initInUniverse:(id)arg1 withSettings:(struct CLSubHarvesterAvengerSettings)arg2;	// IMP=0x001000000096c507

@end
