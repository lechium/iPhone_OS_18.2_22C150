//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData;

@interface MSHistoryRideShareItem
{
    MISSING_TYPE *_endWaypoint;	// 0 = 0x0
    MISSING_TYPE *_startWaypoint;	// 0 = 0x0
}

+ (Class)managedClass;	// IMP=0x00400000000fac90
- (void).cxx_destruct;	// IMP=0x00000000000fbae0
- (id)initWithObject:(id)arg1 store:(id)arg2 lazyLoad:(_Bool)arg3;	// IMP=0x00000000000fb9d0
@property(nonatomic, copy) NSData *startWaypoint;
@property(nonatomic, copy) NSData *endWaypoint;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1 lazyLoad:(_Bool)arg2;	// IMP=0x00000000000faec0
- (id)initWithStore:(id)arg1 endWaypoint:(id)arg2 startWaypoint:(id)arg3;	// IMP=0x00000000000fabc0
- (id)initWithEndWaypoint:(id)arg1 startWaypoint:(id)arg2;	// IMP=0x00000000000fa650

@end

