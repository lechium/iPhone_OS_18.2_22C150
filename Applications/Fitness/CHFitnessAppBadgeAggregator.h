//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol CHFitnessAppBadgeAggregatorDelegate;

@interface CHFitnessAppBadgeAggregator : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *activitySharingClient;	// 16 = 0x10
    MISSING_TYPE *contentAvailabilityClient;	// 24 = 0x18
    MISSING_TYPE *engagementAppBadgeProvider;	// 64 = 0x40
    MISSING_TYPE *eventHub;	// 72 = 0x48
    MISSING_TYPE *privacyPreferenceClient;	// 88 = 0x58
    MISSING_TYPE *appBadgeCount;	// 128 = 0x80
    MISSING_TYPE *fetchedActivitySharingCount;	// 136 = 0x88
    MISSING_TYPE *fetchedEngagementBadges;	// 144 = 0x90
    MISSING_TYPE *hasAmeliaBadge;	// 152 = 0x98
    MISSING_TYPE *isBrowsingSeymour;	// 153 = 0x99
}

- (void).cxx_destruct;	// IMP=0x002000000016d940
- (id)init;	// IMP=0x001000000016d8e0
- (void)triggerFetch;	// IMP=0x001000000016a3e0
- (void)onAvailabilityChange:(id)arg1;	// IMP=0x0010000000169b50
- (id)initWithFitnessAppContext:(id)arg1 activitySharingClient:(id)arg2;	// IMP=0x0010000000169b10
@property(nonatomic) _Bool hasAmeliaBadge; // @synthesize hasAmeliaBadge;
@property(nonatomic) __weak id <CHFitnessAppBadgeAggregatorDelegate> delegate; // @synthesize delegate;
- (void)refreshBadgeCount;	// IMP=0x001000000016d9e0

@end

