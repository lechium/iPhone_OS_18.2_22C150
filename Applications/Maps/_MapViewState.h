//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _MapViewState : NSObject
{
    _Bool _showsTraffic;	// 8 = 0x8
    _Bool _showsUserLocation;	// 9 = 0x9
}

@property(readonly, nonatomic) _Bool showsUserLocation; // @synthesize showsUserLocation=_showsUserLocation;
@property(readonly, nonatomic) _Bool showsTraffic; // @synthesize showsTraffic=_showsTraffic;
- (void)restoreStateToMapView:(id)arg1;	// IMP=0x0010000000acb06a
- (id)initWithMapView:(id)arg1;	// IMP=0x0010000000acafe8

@end
