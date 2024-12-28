//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFConversation, AceObject, NSArray, NSString, NSURL, UIView, UIViewController;
@protocol AFUIBugReportPresenting, SAAceCommand;

@protocol AFUIBugReportPresentingDelegate
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsSiriDismissalWithReason:(long long)arg2;
- (void)bugReportPresenterRequestsSiriSessionToFinishCurrentRequest:(id <AFUIBugReportPresenting>)arg1;
- (void)bugReportPresenterRequestsInvalidateAutoDismissal:(id <AFUIBugReportPresenting>)arg1;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 setStatusViewHidden:(_Bool)arg2;
- (UIView *)bugReportPresenterRequestsPresentingView:(id <AFUIBugReportPresenting>)arg1;
- (AFConversation *)bugReportPresenterRequestsActiveConversation:(id <AFUIBugReportPresenting>)arg1;
- (double)bugReportPresenterRequestsLastPresentationTime:(id <AFUIBugReportPresenting>)arg1;
- (NSArray *)bugReportPresenterRequestsBugReportKeywordIdentifiers:(id <AFUIBugReportPresenting>)arg1;
- (NSString *)bugReportPresenterRequestsBugReportPrefixForTitle:(id <AFUIBugReportPresenting>)arg1;
- (_Bool)bugReportPresenterShouldPromptUserForScreenshotPermission:(id <AFUIBugReportPresenting>)arg1;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 setBugReportingAvailable:(_Bool)arg2;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsToTakeScreenshotWithCompletion:(void (^)(UIImage *))arg2;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsToPerformAceCommand:(AceObject<SAAceCommand> *)arg2;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsToHandlePasscodeUnlockWithCompletion:(void (^)(long long))arg2;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsToOpenURL:(NSURL *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)bugReportPresenter:(id <AFUIBugReportPresenting>)arg1 requestsToPresentViewController:(UIViewController *)arg2;
@end
