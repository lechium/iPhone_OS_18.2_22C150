//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PUDebugImageTableViewController : UITableViewController
{
    NSArray *_tableData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000017a92e
@property(copy) NSArray *tableData; // @synthesize tableData=_tableData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000017a1e2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000179cc3
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000179ca6
- (void)viewDidLoad;	// IMP=0x0000000000179243
- (id)pidFromPath:(id)arg1;	// IMP=0x0000000000179161
- (id)jobNumberFromPath:(id)arg1;	// IMP=0x0000000000179012

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

