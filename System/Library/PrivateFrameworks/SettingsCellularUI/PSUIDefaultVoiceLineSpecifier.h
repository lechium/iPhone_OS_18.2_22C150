//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, NSArray, PSSimStatusCache, PSUICellularPlanManagerCache;

__attribute__((visibility("hidden")))
@interface PSUIDefaultVoiceLineSpecifier : PSSpecifier
{
    NSArray *_cachedPlanItems;	// 184 = 0xb8
    PSUICellularPlanManagerCache *_planManagerCache;	// 192 = 0xc0
    CTCellularPlanManager *_planManager;	// 200 = 0xc8
    PSSimStatusCache *_simStatusCache;	// 208 = 0xd0
    NSArray *_cachedSubscriptionContexts;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000000db26
@property(retain, nonatomic) NSArray *cachedSubscriptionContexts; // @synthesize cachedSubscriptionContexts=_cachedSubscriptionContexts;
@property(retain, nonatomic) PSSimStatusCache *simStatusCache; // @synthesize simStatusCache=_simStatusCache;
@property(retain, nonatomic) CTCellularPlanManager *planManager; // @synthesize planManager=_planManager;
@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
@property(retain, nonatomic) NSArray *cachedPlanItems; // @synthesize cachedPlanItems=_cachedPlanItems;
- (id)getLogger;	// IMP=0x000000000000da4d
- (id)subscriptionContextForListItem:(id)arg1;	// IMP=0x000000000000d9db
- (id)planItemForListItem:(id)arg1;	// IMP=0x000000000000d86f
- (void)setDefaultVoiceLine:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000000d55d
- (id)defaultVoiceLine:(id)arg1;	// IMP=0x000000000000d3b4
@property(readonly, nonatomic) _Bool isSubcontrollerNeeded;
- (void)updateCachedState;	// IMP=0x000000000000d094
- (id)initWithPlanManagerCache:(id)arg1 planManager:(id)arg2 simStatusCache:(id)arg3;	// IMP=0x000000000000cf01
- (id)initSpecifier;	// IMP=0x000000000000ce52

@end

