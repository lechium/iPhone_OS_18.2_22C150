//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIDebuggingKBAutoFillViewController : UIViewController
{
    UITableView *_tableView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000018312a6
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000001831200
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000018311f5
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000183116b
- (void)autoFillTestGroundTruthGenerationViewController:(id)arg1 didFinishWithResult:(id)arg2;	// IMP=0x0000000001830784
- (id)_formTypeFileName:(long long)arg1;	// IMP=0x0000000001830715
- (void)_archiveTopMostViewControllerForAutoFillTest;	// IMP=0x0000000001830569
- (id)_getTopMostViewControllerInWindow:(id)arg1;	// IMP=0x0000000001830465
- (void)viewDidLoad;	// IMP=0x00000000018302b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

