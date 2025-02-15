//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKTableViewController.h"

@class HKFeatureAvailabilityInternalSettingsConfiguration, HKHealthStore, NPSManager, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityInternalSettingsViewController : HKTableViewController
{
    _Bool _deletingSamples;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
    HKFeatureAvailabilityInternalSettingsConfiguration *_configuration;	// 24 = 0x18
    NPSManager *_syncManager;	// 32 = 0x20
    NSUserDefaults *_userDefaults;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000f0f93
@property(nonatomic, getter=isDeletingSamples) _Bool deletingSamples; // @synthesize deletingSamples=_deletingSamples;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(readonly, nonatomic) HKFeatureAvailabilityInternalSettingsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f06be
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f065b
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000000f0590
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000f0398
- (id)_buttonCellForTableView:(id)arg1;	// IMP=0x00000000000f02cf
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000f02ad
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000f0264
- (void)_disableOverride:(_Bool)arg1;	// IMP=0x00000000000effe7
- (_Bool)_disabledOverriden;	// IMP=0x00000000000eff4c
- (void)_enableFeature:(_Bool)arg1;	// IMP=0x00000000000efd41
- (_Bool)_featureEnabled;	// IMP=0x00000000000efca6
- (long long)_offsetSectionForSection:(long long)arg1;	// IMP=0x00000000000efc50
- (void)viewDidLoad;	// IMP=0x00000000000efc08
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000efab5

@end

