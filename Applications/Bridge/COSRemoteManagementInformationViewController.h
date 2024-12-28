//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSBuddyWatchDiscoveryMonitor, COSRemoteManagementLearnMoreViewController, MISSING_TYPE, NSString, UITableView;

@interface COSRemoteManagementInformationViewController
{
    COSRemoteManagementLearnMoreViewController *_learnMoreViewController;	// 8 = 0x8
    COSBuddyWatchDiscoveryMonitor *_buddyWatchDiscoveryMonitor;	// 16 = 0x10
    MISSING_TYPE *_organizationName;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x002000000003376e
- (void).cxx_destruct;	// IMP=0x002000000003494a
- (void)remoteManagementInformationCell:(id)arg1 buttonPressed:(id)arg2;	// IMP=0x00100000000348b0
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x001000000003489f
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000034793
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000003473b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000034730
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000034725
- (void)discoveryOperationComplete;	// IMP=0x00100000000346d9
- (id)localizedWaitScreenDescription;	// IMP=0x001000000003466d
- (void)didEstablishHold;	// IMP=0x0010000000034173
- (double)waitScreenPushGracePeriod;	// IMP=0x0010000000034165
- (_Bool)holdWithWaitScreen;	// IMP=0x001000000003415d
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000034155
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x0010000000034132
- (id)alternateButtonTitle;	// IMP=0x00100000000340c6
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000003403e
- (id)suggestedButtonTitle;	// IMP=0x0010000000033fd2
- (id)detailString;	// IMP=0x0010000000033f66
- (id)titleString;	// IMP=0x0010000000033efa
- (id)imageTintColor;	// IMP=0x0010000000033ef0
- (id)imageResource;	// IMP=0x0010000000033ee3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000033e9a
- (void)viewDidLoad;	// IMP=0x001000000003386d
- (id)init;	// IMP=0x00100000000337bc
- (_Bool)requiresActivationCheck;	// IMP=0x0010000000033766

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
