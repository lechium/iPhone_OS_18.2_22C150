//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationOverlayWindowPickerViewController : UIViewController
{
    UITableView *_tableView;	// 8 = 0x8
    NSArray *_windows;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000184d343
@property(retain, nonatomic) NSArray *windows; // @synthesize windows=_windows;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000184d2b5
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000184d0c6
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000184cf38
- (void)loadData;	// IMP=0x000000000184ce75
- (void)viewDidLoad;	// IMP=0x000000000184cc68
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000184cb86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

