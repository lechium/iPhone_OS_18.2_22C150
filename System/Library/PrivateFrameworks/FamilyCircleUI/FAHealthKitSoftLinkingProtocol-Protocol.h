//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FAFamilyCircle, UIViewController;

@protocol FAHealthKitSoftLinkingProtocol
- (void)updateFamily:(FAFamilyCircle *)arg1;
- (void)presentMedicalIDViewController:(UIViewController *)arg1 withFamily:(FAFamilyCircle *)arg2 isEmergencyContactSetup:(_Bool)arg3;
- (void)fetchLastModifiedDate:(FAFamilyCircle *)arg1 completionHandler:(void (^)(NSDate *, NSError *))arg2;
- (void)fetchMedicalIDData:(FAFamilyCircle *)arg1 completionHandler:(void (^)(_HKMedicalIDData *, unsigned long long, NSError *))arg2;
- (id)initWithFamilyCircle:(FAFamilyCircle *)arg1;
@end
