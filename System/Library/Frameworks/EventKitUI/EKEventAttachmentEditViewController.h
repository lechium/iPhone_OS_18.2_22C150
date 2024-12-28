//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UITableView;
@protocol EKEventAttachmentEditViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentEditViewController
{
    UITableView *_table;	// 64 = 0x40
    NSArray *_cellControllers;	// 72 = 0x48
    id <EKEventAttachmentEditViewControllerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000993bd
@property(nonatomic) __weak id <EKEventAttachmentEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)owningEventForAttachmentCellController:(id)arg1;	// IMP=0x00000000000992fe
- (id)parentViewControllerForAttachmentCellController:(id)arg1;	// IMP=0x00000000000992f5
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000009922c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000009921b
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000098c43
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000098b75
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000098b58
- (void)viewDidLoad;	// IMP=0x0000000000098a41
- (void)loadView;	// IMP=0x0000000000098989
- (id)initWithFrame:(struct CGRect)arg1 attachments:(id)arg2 sourceIsManaged:(_Bool)arg3;	// IMP=0x0000000000098812

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
