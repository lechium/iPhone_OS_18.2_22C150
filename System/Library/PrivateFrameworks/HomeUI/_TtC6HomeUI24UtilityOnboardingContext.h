//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMHome, HUUtilityConfigurationHelper, MISSING_TYPE, NSArray, NSDictionary, NSString, UIImage;

@interface _TtC6HomeUI24UtilityOnboardingContext : NSObject
{
    MISSING_TYPE *home;	// 8 = 0x8
    MISSING_TYPE *utilityID;	// 16 = 0x10
    MISSING_TYPE *config;	// 32 = 0x20
    MISSING_TYPE *utilityLogo;	// 40 = 0x28
    MISSING_TYPE *utilityLogoImage;	// 48 = 0x30
    MISSING_TYPE *allUtilities;	// 56 = 0x38
    MISSING_TYPE *subscriptionService;	// 64 = 0x40
    MISSING_TYPE *accountDetails;	// 72 = 0x48
    MISSING_TYPE *tafResponses;	// 80 = 0x50
    MISSING_TYPE *validFields;	// 88 = 0x58
    MISSING_TYPE *onboardingMethod;	// 96 = 0x60
    MISSING_TYPE *didAttemptPasswordlessMethod;	// 104 = 0x68
    MISSING_TYPE *otpFactors;	// 112 = 0x70
    MISSING_TYPE *selectedOTPMethod;	// 120 = 0x78
    MISSING_TYPE *authCode;	// 128 = 0x80
    MISSING_TYPE *accessToken;	// 144 = 0x90
    MISSING_TYPE *refreshToken;	// 160 = 0xa0
    MISSING_TYPE *tokens;	// 3 = 0x3
    MISSING_TYPE *serviceLocations;	// 156 = 0x9c
    MISSING_TYPE *selectedServiceLocation;	// 101712005 = 0x6100085
}

- (void).cxx_destruct;	// IMP=0x000000000001d5b0
- (id)init;	// IMP=0x000000000001d550
- (void)updateIconWithHeaderView:(id)arg1 axID:(id)arg2;	// IMP=0x000000000001d460
- (void)createAccessTokenWithAuthCode:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x000000000001a6a0
- (void)requestOTPWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;	// IMP=0x0000000000018270
- (void)verifyAddressAndSubmitTAFWithCompletionHandler:(void (^)(NSError *))arg1;	// IMP=0x0000000000017630
- (void)setSelectedOTPMethodWithFactor:(id)arg1;	// IMP=0x0000000000015650
@property(nonatomic, copy) NSDictionary *tokens;
@property(nonatomic, copy) NSArray *otpFactors;
@property(nonatomic, readonly) _Bool showInvalidEmailAlert;
@property(nonatomic, readonly) _Bool quickLookupHasAllFields;
@property(nonatomic, readonly) _Bool allRequiredFieldsComplete;
- (void)populateFieldsFromMeContact;	// IMP=0x0000000000012cd0
- (void)setResponseFor:(id)arg1 value:(id)arg2;	// IMP=0x0000000000012730
@property(nonatomic) _Bool didAttemptPasswordlessMethod; // @synthesize didAttemptPasswordlessMethod;
@property(nonatomic) long long onboardingMethod; // @synthesize onboardingMethod;
@property(nonatomic, copy) NSDictionary *tafResponses;
@property(nonatomic, copy) NSArray *allUtilities;
@property(nonatomic, retain) UIImage *utilityLogo; // @synthesize utilityLogo;
@property(nonatomic, retain) HUUtilityConfigurationHelper *config; // @synthesize config;
@property(nonatomic, copy) NSString *utilityID;
- (id)initWithHome:(id)arg1;	// IMP=0x00000000000103d0
@property(nonatomic, readonly) HMHome *home; // @synthesize home;

@end
