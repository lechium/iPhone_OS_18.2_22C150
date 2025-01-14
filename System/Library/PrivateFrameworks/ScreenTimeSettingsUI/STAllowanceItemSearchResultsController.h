//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSMutableOrderedSet, NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface STAllowanceItemSearchResultsController : UITableViewController
{
    _Bool _hasNewSelection;	// 8 = 0x8
    NSMutableOrderedSet *_selectedBundleIdentifiers;	// 16 = 0x10
    NSMutableOrderedSet *_selectedWebDomains;	// 24 = 0x18
    NSArray *_allowanceItemSpecifiers;	// 32 = 0x20
    NSArray *_filteredAllowanceItemSpecifiers;	// 40 = 0x28
    NSOrderedSet *_initialWebDomains;	// 48 = 0x30
    NSOrderedSet *_initalBundleIdentifiers;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000a3ee
@property(copy) NSOrderedSet *initalBundleIdentifiers; // @synthesize initalBundleIdentifiers=_initalBundleIdentifiers;
@property(copy) NSOrderedSet *initialWebDomains; // @synthesize initialWebDomains=_initialWebDomains;
@property(copy) NSArray *filteredAllowanceItemSpecifiers; // @synthesize filteredAllowanceItemSpecifiers=_filteredAllowanceItemSpecifiers;
@property(copy) NSArray *allowanceItemSpecifiers; // @synthesize allowanceItemSpecifiers=_allowanceItemSpecifiers;
@property _Bool hasNewSelection; // @synthesize hasNewSelection=_hasNewSelection;
@property(retain) NSMutableOrderedSet *selectedWebDomains; // @synthesize selectedWebDomains=_selectedWebDomains;
@property(retain) NSMutableOrderedSet *selectedBundleIdentifiers; // @synthesize selectedBundleIdentifiers=_selectedBundleIdentifiers;
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0000000000009c4a
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000009a52
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000985a
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000009672
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000008eb8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000008e74
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000008d80
- (void)viewDidLoad;	// IMP=0x0000000000008c6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

