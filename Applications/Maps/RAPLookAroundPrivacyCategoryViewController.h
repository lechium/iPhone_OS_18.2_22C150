//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSString, RAPLookAroundQuestion, RAPReport;

@interface RAPLookAroundPrivacyCategoryViewController : UITableViewController
{
    RAPLookAroundQuestion *_question;	// 8 = 0x8
    RAPReport *_report;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000d6bdae
- (void)_captureUserAction:(int)arg1;	// IMP=0x0010000000d6bd6a
@property(readonly, nonatomic) int analyticTarget;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d6bbfc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000d6bbad
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000d6bba2
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d6ba39
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000d6b983
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000d6b8a2
- (void)viewDidLoad;	// IMP=0x0010000000d6b737

// Remaining properties
@property(readonly, nonatomic) int backAction;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
