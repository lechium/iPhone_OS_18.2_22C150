//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapRegion;

@protocol _GEOOfflineSubscriptionInfo <NSObject>
@property(readonly, nonatomic) unsigned char device;
@property(readonly, nonatomic) CDStruct_90e2a262 rect;
@property(readonly, nonatomic) GEOMapRegion *region;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@end
