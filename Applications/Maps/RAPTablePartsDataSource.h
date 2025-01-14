//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UITableView, UIViewController;
@protocol RAPPresentingViewController;

@interface RAPTablePartsDataSource : NSObject
{
    UIViewController<RAPPresentingViewController> *_presentingViewController;	// 8 = 0x8
    NSMutableArray *_tableParts;	// 16 = 0x10
    NSMutableArray *_tableSections;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000003c4503
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *tableParts; // @synthesize tableParts=_tableParts;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000003c4458
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00100000003c43c1
- (id)indexPathForRow:(long long)arg1 ofSection:(id)arg2;	// IMP=0x00100000003c437a
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00100000003c4327
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000003c4284
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000003c423d
- (id)sectionAtIndex:(long long)arg1;	// IMP=0x00100000003c4227
- (long long)indexOfSection:(id)arg1;	// IMP=0x00100000003c41e2
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000003c41cc
- (void)popTablePart:(id)arg1 withRowAnimation:(long long)arg2;	// IMP=0x00100000003c3f24
- (void)pushTablePart:(id)arg1 withRowAnimation:(long long)arg2;	// IMP=0x00100000003c3c0f
- (void)_createPartAndSectionArraysIfNeeded;	// IMP=0x00100000003c3bb7
- (void)_rebuildTableSections;	// IMP=0x00100000003c3747
- (void)tablePartDidChange:(id)arg1;	// IMP=0x00100000003c3735
- (void)setTableParts:(id)arg1 withRowAnimation:(long long)arg2;	// IMP=0x00100000003c3389
- (void)_updateTableAppearance;	// IMP=0x00100000003c2fa5
- (void)_clearPartsAndSections;	// IMP=0x00100000003c2d64
- (void)dealloc;	// IMP=0x00100000003c2ce4
- (id)initWithPresentingViewController:(id)arg1;	// IMP=0x00100000003c2c80
- (id)init;	// IMP=0x00100000003c2c56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

