//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, PASTargetFlowResult;

@protocol PASUIDependentViewPresenterDelegate
- (void)proximitySetupCompletedWithResult:(PASTargetFlowResult *)arg1;
- (void)setupPerformAIDASignInWith:(NSDictionary *)arg1 completion:(void (^)(_Bool))arg2;
- (void)setupPasscodeAndBiometricWithCompletion:(void (^)(_Bool))arg1;
- (void)proximitySetupSelectedAccountType:(long long)arg1;
- (void)proximitySetupSelectedAccount:(long long)arg1 completion:(void (^)(_Bool))arg2;
@end
