//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSHashTable;

@interface WeatherLocationDataProvider : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    CLLocation *_location;	// 16 = 0x10
    struct CLLocationCoordinate2D _coordinate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002d18ff
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)_updateLocation:(id)arg1;	// IMP=0x00100000002d18b0
- (void)_updateCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00100000002d1819
- (_Bool)_shouldNotifyObservers;	// IMP=0x00100000002d17b7
- (void)_notifyObserversWeatherLocationDidChange;	// IMP=0x00100000002d14b2
- (void)removeObserver:(id)arg1;	// IMP=0x00100000002d149c
- (void)addObserver:(id)arg1;	// IMP=0x00100000002d1486
- (id)init;	// IMP=0x00100000002d1366

@end

