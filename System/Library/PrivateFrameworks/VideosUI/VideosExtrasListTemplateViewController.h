//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexPath, NSMapTable, NSString, UIImageView, UITableView, VideosExtrasViewElementViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasListTemplateViewController
{
    UITableView *_tableView;	// 8 = 0x8
    _Bool _tableViewLeft;	// 16 = 0x10
    UIImageView *_vignetteView;	// 24 = 0x18
    _Bool _relatedContentEmbedded;	// 32 = 0x20
    NSArray *_masterViewConstraints;	// 40 = 0x28
    NSArray *_detailViewConstraints;	// 48 = 0x30
    NSMapTable *_relatedContentViewControllerMap;	// 56 = 0x38
    NSIndexPath *_autohighlightIndexPath;	// 64 = 0x40
    VideosExtrasViewElementViewController *_relatedContentViewController;	// 72 = 0x48
}

+ (id)relatedContentViewControllerForElement:(id)arg1;	// IMP=0x00100000002c7001
- (void).cxx_destruct;	// IMP=0x00000000002c731e
@property(retain, nonatomic) VideosExtrasViewElementViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
- (void)_configureVignette:(_Bool)arg1;	// IMP=0x00000000002c6f8b
- (void)_prepareLayout;	// IMP=0x00000000002c6c7b
- (void)_setNavigationConstraints;	// IMP=0x00000000002c6c75
- (void)_setDetailContraints;	// IMP=0x00000000002c68f0
- (void)_unembedRelatedContent;	// IMP=0x00000000002c6812
- (void)_pushRelatedViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002c6647
- (void)_embedRelatedContentViewController;	// IMP=0x00000000002c6544
- (void)_setRelatedContentEmbedded:(_Bool)arg1;	// IMP=0x00000000002c6245
- (void)_configureBannerWithElement:(id)arg1;	// IMP=0x00000000002c60fb
- (void)_updateRelatedContent:(id)arg1 forListItem:(id)arg2;	// IMP=0x00000000002c5f8c
- (void)_updateForTemplate:(id)arg1;	// IMP=0x00000000002c5c32
- (_Bool)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1;	// IMP=0x00000000002c5b7c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c5931
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c57af
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000002c5630
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000002c543d
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000002c5428
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002c51fc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002c5129
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002c5094
- (void)_addConstraintsToTableView:(id)arg1;	// IMP=0x00000000002c4b44
- (void)viewDidLoad;	// IMP=0x00000000002c45fa
- (_Bool)showsPlaceholder;	// IMP=0x00000000002c45f2
- (id)templateElement;	// IMP=0x00000000002c45a2
- (void)dealloc;	// IMP=0x00000000002c453b
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;	// IMP=0x00000000002c42bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
