//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/NSObject-Protocol.h>

@protocol LACDTOPolicyEvaluationController, LACDTOPolicyEvaluationRequest, LACDTOPolicyEvaluationResult;

@protocol LACDTOPolicyEvaluationControllerObserver <NSObject>
- (void)policyController:(id <LACDTOPolicyEvaluationController>)arg1 didFinishPolicyEvaluation:(id <LACDTOPolicyEvaluationRequest>)arg2 result:(id <LACDTOPolicyEvaluationResult>)arg3;
- (void)policyController:(id <LACDTOPolicyEvaluationController>)arg1 willStartPolicyEvaluation:(id <LACDTOPolicyEvaluationRequest>)arg2;
@end
