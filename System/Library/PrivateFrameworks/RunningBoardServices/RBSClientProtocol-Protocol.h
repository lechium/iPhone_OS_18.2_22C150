//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError, NSSet, RBSAssertionIdentifier, RBSInheritanceChangeSet, RBSProcessExitContext, RBSProcessIdentifier;

@protocol RBSClientProtocol
- (oneway void)async_processDidExit:(RBSProcessIdentifier *)arg1 withContext:(RBSProcessExitContext *)arg2;
- (oneway void)async_observedPreventLaunchPredicatesUpdate:(NSSet *)arg1 completion:(void (^)(void))arg2;
- (oneway void)async_observedProcessExitEvents:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (oneway void)async_observedProcessStatesDidChange:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (oneway void)async_assertionsDidInvalidate:(NSSet *)arg1 withError:(NSError *)arg2;
- (oneway void)async_assertionWillInvalidate:(RBSAssertionIdentifier *)arg1;
- (oneway void)async_willExpireAssertionsSoon;
- (oneway void)async_didChangeInheritances:(RBSInheritanceChangeSet *)arg1 completion:(void (^)(void))arg2;
@end
