//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8NewsFeed38DebugFormatInspectorPaneViewController : UIViewController
{
    MISSING_TYPE *groups;	// 8 = 0x8
    MISSING_TYPE *autoPreferredContentSize;	// 16 = 0x10
    MISSING_TYPE *autoDismissOnLayoutChange;	// 17 = 0x11
    MISSING_TYPE *preferredArrowDirections;	// 24 = 0x18
    MISSING_TYPE *preferredSize;	// 32 = 0x20
    MISSING_TYPE *filterTerm;	// 48 = 0x30
    MISSING_TYPE *filteredGroups;	// 64 = 0x40
    MISSING_TYPE *tableView;	// 72 = 0x48
    MISSING_TYPE *editor;	// 80 = 0x50
    MISSING_TYPE *image;	// 88 = 0x58
    MISSING_TYPE *contentSizeObserver;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000cfcf30
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000cfd940
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000cfd630
- (void)viewDidLoad;	// IMP=0x0000000000cfd600
- (void)dealloc;	// IMP=0x0000000000cfcf10
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000cfce70
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000d05410
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000cfda10
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000cfd9f0
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000d07bf0
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000d07360
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000d072b0
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000d05590
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000d05520
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000d054c0

@end
