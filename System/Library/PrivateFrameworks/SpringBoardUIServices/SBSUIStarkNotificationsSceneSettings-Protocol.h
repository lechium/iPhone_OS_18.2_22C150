//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class BSServiceConnectionEndpoint;

@protocol SBSUIStarkNotificationsSceneSettings <NSObject>
@property(readonly, nonatomic) BSServiceConnectionEndpoint *openServiceEndpoint;
@property(readonly, nonatomic) unsigned long long suspensionReasons;
@property(readonly, nonatomic, getter=isGeoSupported) _Bool geoSupported;
@property(readonly, nonatomic, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@end

