//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, SKUIClientContext, SKUIColorScheme, SKUILayoutCache, SKUIProductPageHeaderViewController, SKUIProductPageTableView, UIColor, UITableView;
@protocol SKUIProductPageChildViewController, SKUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableViewController : UIViewController
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    SKUIColorScheme *_colorScheme;	// 16 = 0x10
    id <SKUIProductPageChildViewControllerDelegate> _delegate;	// 24 = 0x18
    id <SKUIProductPageChildViewController> _delegateSender;	// 32 = 0x20
    UIColor *_evenColor;	// 40 = 0x28
    SKUIProductPageHeaderViewController *_headerViewController;	// 48 = 0x30
    UIColor *_color;	// 56 = 0x38
    NSArray *_sections;	// 64 = 0x40
    SKUIProductPageTableView *_tableView;	// 72 = 0x48
    SKUILayoutCache *_textLayoutCache;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000020cd99
@property(retain, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) __weak id <SKUIProductPageChildViewController> delegateSender; // @synthesize delegateSender=_delegateSender;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (id)_textLayoutRequestWithText:(id)arg1;	// IMP=0x000000000020cc2c
- (id)_tableView;	// IMP=0x000000000020ca8d
- (void)_addHeaderView;	// IMP=0x000000000020c870
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000020c850
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000020c7a0
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000020c6f0
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000020c644
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000020c57e
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000000020c4b8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000020c10c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000020c0ba
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000020c006
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000020bfe9
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000020bf86
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000020bef7
- (void)loadView;	// IMP=0x000000000020beab
@property(readonly, nonatomic) UITableView *tableView;
- (void)scrollToView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000020b919
- (void)dealloc;	// IMP=0x000000000020b8b2
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000020b7aa
- (id)initWithReleaseNotes:(id)arg1 clientContext:(id)arg2;	// IMP=0x000000000020b31d
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;	// IMP=0x000000000020b114

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
