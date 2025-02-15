//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableView.h>

@class NSArray, NSString;
@protocol SUUIRedeemResultsViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUIRedeemResultsView : UITableView
{
    NSArray *_sections;	// 8 = 0x8
    struct UIEdgeInsets _contentInsetAdjustments;	// 16 = 0x10
    id <SUUIRedeemResultsViewDelegate> _resultsDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002055a1
@property(nonatomic) __weak id <SUUIRedeemResultsViewDelegate> resultsDelegate; // @synthesize resultsDelegate=_resultsDelegate;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)layoutSubviews;	// IMP=0x0000000000205295
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000002051e0
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000205134
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002050a0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000020504e
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000204f9a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000204f7d
- (id)init;	// IMP=0x0000000000204e4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

