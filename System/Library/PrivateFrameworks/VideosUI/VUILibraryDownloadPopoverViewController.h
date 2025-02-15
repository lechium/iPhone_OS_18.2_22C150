//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, VUILibraryListItemView;
@protocol VUILibraryDownloadPopoverViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryDownloadPopoverViewController : UIViewController
{
    id <VUILibraryDownloadPopoverViewControllerDelegate> _delegate;	// 8 = 0x8
    VUILibraryListItemView *_listView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000030f1ac
@property(retain, nonatomic) VUILibraryListItemView *listView; // @synthesize listView=_listView;
@property(nonatomic) __weak id <VUILibraryDownloadPopoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)popoverPressed:(id)arg1;	// IMP=0x000000000030f126
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000030f0ca
- (void)loadView;	// IMP=0x000000000030ecbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

