//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class HKCategorySample, NSMutableArray;
@protocol HKDataMetadataViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WDAtrialFibrillationEventMetadataViewController : HKTableViewController
{
    _Bool _firstViewDidLayoutSubviews;	// 8 = 0x8
    HKCategorySample *_event;	// 16 = 0x10
    NSMutableArray *_sections;	// 24 = 0x18
    id <HKDataMetadataViewControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004a1be
@property(nonatomic) __weak id <HKDataMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) HKCategorySample *event; // @synthesize event=_event;
@property(nonatomic) _Bool firstViewDidLayoutSubviews; // @synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews;
- (void)viewControllerDidLeaveAdaptiveModal;	// IMP=0x000000000004a0e8
- (void)viewControllerWillEnterAdaptiveModal;	// IMP=0x0000000000049f80
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000049e9d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000049da8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000049ccd
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000049c59
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000049bd9
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000049b59
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000049b15
- (void)heartbeatSequecesListQueryComplete:(id)arg1;	// IMP=0x0000000000049a89
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000499b1
- (id)_atrialFibrillationEducationContainerView;	// IMP=0x0000000000049911
- (void)_reloadAtrialFibrillationEducationTableHeaderView;	// IMP=0x0000000000049659
- (id)_shortVersionNumberFromString:(id)arg1;	// IMP=0x000000000004961a
- (void)_loadSections;	// IMP=0x0000000000048fb0
- (_Bool)_addSectionIfNonNull:(id)arg1;	// IMP=0x0000000000048f31
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000048e52
- (void)viewDidLoad;	// IMP=0x0000000000048ca2
- (id)initWithEvent:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000048bce

@end
