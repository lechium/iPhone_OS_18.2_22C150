//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ADJourneyMetricsHelperInternal : NSObject
{
    MISSING_TYPE *helper;	// 8 = 0x8
    MISSING_TYPE *appStoreSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000134b0
- (id)init;	// IMP=0x0000000000013450
- (void)discarded;	// IMP=0x0000000000013340
- (void)receivedWithAdamId:(id)arg1 impressionId:(id)arg2 adMetadata:(id)arg3;	// IMP=0x0000000000013190
- (void)completed;	// IMP=0x0000000000013130
- (void)delivered;	// IMP=0x00000000000130d0
- (void)interacted;	// IMP=0x0000000000013080
- (void)getAppWithButtonState:(long long)arg1;	// IMP=0x0000000000013010
- (void)adMarkerInteracted;	// IMP=0x0000000000012fb0
- (void)visibleWithStarting:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000012ef0
- (void)offScreen;	// IMP=0x0000000000012e90
- (void)onScreen;	// IMP=0x0000000000012e30
- (void)placed;	// IMP=0x0000000000012dc0
- (id)initWithPromotedContentIdentifier:(id)arg1;	// IMP=0x0000000000012d60

@end
