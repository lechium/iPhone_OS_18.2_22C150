//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MapDataSubscriptionMapContentConfiguration : NSObject
{
    NSArray *_subscriptions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000070d6ec
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x001000000070d5e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000070d5af
- (id)updatedConfigurationForState:(id)arg1;	// IMP=0x001000000070d5a6
- (id)makeContentView;	// IMP=0x001000000070cdc7
- (id)initWithSubscriptions:(id)arg1;	// IMP=0x001000000070cd3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
