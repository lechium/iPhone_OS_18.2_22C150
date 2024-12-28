//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APPCAdPolicyData, APPCTapAction, NSString, NSUUID;

@protocol APPCPromotableContentRepresentation
- (void)performActionWithCompletion:(void (^)(long long))arg1;
@property(nonatomic, readonly) APPCAdPolicyData *adPolicyData;
@property(nonatomic, readonly) APPCTapAction *tapAction;
@property(nonatomic, readonly) struct CGSize adSize;
@property(nonatomic, readonly) long long privacyMarkerPosition;
@property(nonatomic, readonly) long long desiredPosition;
@property(nonatomic, readonly) long long adType;
@property(nonatomic, readonly) NSUUID *id;
@property(nonatomic, readonly) NSString *identifier;
@end
