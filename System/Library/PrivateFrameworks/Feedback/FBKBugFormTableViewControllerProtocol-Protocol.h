//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBKAttachment, FBKBugFormTableViewController, FBKDeviceDiagnosticsController, FBKDraftingController, FBKFormResponse, FBKUser, NSError;

@protocol FBKBugFormTableViewControllerProtocol
- (void)controller:(FBKBugFormTableViewController *)arg1 didRequestDismissalWithSavedDraft:(_Bool)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didFailToLoadDraftWithError:(NSError *)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didFinishSubmissionWithError:(NSError *)arg2;
- (void)controllerWillResignFirstActive:(FBKBugFormTableViewController *)arg1;
- (void)controllerWillFinishSubmission:(FBKBugFormTableViewController *)arg1;
- (void)controller:(FBKBugFormTableViewController *)arg1 didAttachLocalFile:(FBKAttachment *)arg2;
- (void)controller:(FBKBugFormTableViewController *)arg1 didFinishLoadingDraft:(FBKFormResponse *)arg2 devicesController:(FBKDeviceDiagnosticsController *)arg3 draftingController:(FBKDraftingController *)arg4;
- (void)controller:(FBKBugFormTableViewController *)arg1 didClickSwitchAccountsWithCurrentUser:(FBKUser *)arg2;

@optional
- (void)controllerDidRequestFullScreenWithController:(FBKBugFormTableViewController *)arg1;
@end

