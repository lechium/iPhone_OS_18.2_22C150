//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSError, NSXPCListenerEndpoint, WFAction, WFActionTestingEvent, WFContentCollection, WFWorkflowController, WFWorkflowControllerState;
@protocol WFActionParameterInputProvider, WFActionReversalState, WFUserInterfaceHost;

@protocol WFWorkflowControllerDelegate <NSObject>

@optional
- (void)workflowController:(WFWorkflowController *)arg1 handleTestingEvent:(WFActionTestingEvent *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (_Bool)workflowControllerIsTesting:(WFWorkflowController *)arg1;
- (void)workflowController:(WFWorkflowController *)arg1 didGenerateReversalState:(id <WFActionReversalState>)arg2 forAction:(WFAction *)arg3;
- (id <WFActionReversalState>)workflowController:(WFWorkflowController *)arg1 actionReversalStateForAction:(WFAction *)arg2;
- (NSXPCListenerEndpoint *)remoteDialogPresenterEndpointForController:(WFWorkflowController *)arg1;
- (id <WFUserInterfaceHost>)userInterfaceForWorkflowController:(WFWorkflowController *)arg1;
- (id <WFActionParameterInputProvider>)workflowController:(WFWorkflowController *)arg1 parameterInputProviderForAction:(WFAction *)arg2;
- (_Bool)workflowController:(WFWorkflowController *)arg1 handleUnsupportedEnvironmentForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(WFContentCollection *, NSError *))arg4;
- (_Bool)workflowController:(WFWorkflowController *)arg1 handleUnsupportedUserInterfaceForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)workflowController:(WFWorkflowController *)arg1 didDecideRunningProgressIsAllowed:(_Bool)arg2 forAction:(WFAction *)arg3;
- (void)workflowController:(WFWorkflowController *)arg1 actionDidRequestWorkflowExit:(WFAction *)arg2;
- (void)workflowController:(WFWorkflowController *)arg1 didRunAction:(WFAction *)arg2 error:(NSError *)arg3 completionHandler:(void (^)(void))arg4;
- (void)workflowController:(WFWorkflowController *)arg1 didRunAction:(WFAction *)arg2 error:(NSError *)arg3;
- (void)workflowController:(WFWorkflowController *)arg1 prepareToRunAction:(WFAction *)arg2 withInput:(WFContentCollection *)arg3 completionHandler:(void (^)(void))arg4;
- (void)workflowController:(WFWorkflowController *)arg1 didFinishRunningWithError:(NSError *)arg2 cancelled:(_Bool)arg3;
- (void)workflowControllerWillRun:(WFWorkflowController *)arg1;
@end

