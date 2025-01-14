//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/NSObject-Protocol.h>

@protocol LACDTOFeatureStateProviding <NSObject>
- (void)checkCanEnableFeatureWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)checkIsFeatureAvailableWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)checkIsFeatureSupportedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)checkIsFeatureStrictModeEnabledWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)checkIsFeatureEnabledWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)fetchStateWithCompletion:(void (^)(id <LACDTOFeatureState>))arg1;
@end

