//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSConditionLock, NSMutableArray, PHFetchResult, PUCurationTragicFailureInHighlightsGridDebugViewController;

__attribute__((visibility("hidden")))
@interface PUCurationTragicFailureInHighlightsDebugViewController : UITableViewController
{
    PHFetchResult *_highlights;	// 8 = 0x8
    PUCurationTragicFailureInHighlightsGridDebugViewController *_assetCollectionViewController;	// 16 = 0x10
    unsigned long long _currentHighlightIndex;	// 24 = 0x18
    NSConditionLock *_backgroundActivityLock;	// 32 = 0x20
    NSMutableArray *_highlightDatas;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005c4090
- (void)goToPreviousHighlight:(id)arg1;	// IMP=0x00000000005c4006
- (void)goToNextHighlight:(id)arg1;	// IMP=0x00000000005c3f70
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000005c3980
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000005c3963
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000005c3958
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00000000005c3952
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00000000005c394a
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x00000000005c3942
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x00000000005c393c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000005c392e
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000005c3872
- (void)_fetchUtilityAssetInformation;	// IMP=0x00000000005c3548
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000005c34e0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000005c347b
- (void)viewDidLoad;	// IMP=0x00000000005c3344
- (void)dealloc;	// IMP=0x00000000005c32dc

@end

