//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class MISSING_TYPE;

@interface _TtC10FitnessApp36MindfulnessSessionListViewController : UITableViewController
{
    MISSING_TYPE *dataProvider;	// 8 = 0x8
    MISSING_TYPE *fiuiFormattingManager;	// 16 = 0x10
    MISSING_TYPE *fitnessAppContext;	// 24 = 0x18
    MISSING_TYPE *healthStore;	// 32 = 0x20
    MISSING_TYPE *mindfulnessSessionFormattingManager;	// 40 = 0x28
    MISSING_TYPE *dataSource;	// 48 = 0x30
    MISSING_TYPE *allMindfulnessSessionViewModels;	// 56 = 0x38
    MISSING_TYPE *observers;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x004000000011f950
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000122270
- (id)initWithStyle:(long long)arg1;	// IMP=0x0010000000122240
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001221a0
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000121480
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000121340
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000001212c0
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00100000001210d0
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0010000000121080
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0010000000121040
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000120f70
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000120f00
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000120c30
- (void)dealloc;	// IMP=0x001000000011f930
- (id)initWithAllMindfulnessSessionViewModels:(id)arg1 dataProvider:(id)arg2 fitnessAppContext:(id)arg3 fiuiFormattingManager:(id)arg4 healthStore:(id)arg5 mindfulnessSessionFormattingManager:(id)arg6;	// IMP=0x001000000011f770

@end

