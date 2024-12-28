//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, SKUIClientContext, UITableView, _UIContentUnavailableView;
@protocol SKUIDownloadsChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPhoneDownloadsViewController : UIViewController
{
    UITableView *_tableView;	// 8 = 0x8
    _UIContentUnavailableView *_noContentView;	// 16 = 0x10
    id <SKUIDownloadsChildViewControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_downloads;	// 32 = 0x20
    SKUIClientContext *_clientContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000010e66e
@property(retain, nonatomic) NSArray *downloads; // @synthesize downloads=_downloads;
@property(nonatomic) __weak id <SKUIDownloadsChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reload;	// IMP=0x000000000010e3b8
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000010e2ab
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000000010e1f8
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000010e1ea
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000010e17f
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000010e03d
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000010df78
- (void)viewDidLayoutSubviews;	// IMP=0x000000000010df0b
- (void)loadView;	// IMP=0x000000000010dda5
- (void)reloadDownloadsAtIndexes:(id)arg1;	// IMP=0x000000000010db36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
