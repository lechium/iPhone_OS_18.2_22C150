//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AppCoordinator, MapsActivity;

@protocol MapsActivityControllerDelegate <NSObject>
@property(retain, nonatomic) MapsActivity *mapsActivity;
@property(retain, nonatomic) AppCoordinator *appCoordinator;
- (void)setMapsActivity:(MapsActivity *)arg1 assumedSourceFidelity:(unsigned long long)arg2 source:(long long)arg3;
- (MapsActivity *)mapsActivityWithFidelity:(unsigned long long)arg1;
@end

