//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSData, NSString, NSURL;

@interface BSBrandObjcShim : NSObject
{
    MISSING_TYPE *brand;	// 8 = 0x8
}

+ (id)mockBrand;	// IMP=0x0040000000015e50
+ (id)placeholderName;	// IMP=0x0040000000015fe0
- (void).cxx_destruct;	// IMP=0x0000000000015f20
- (id)init;	// IMP=0x0000000000015ec0
- (void)clearCachedAssets:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015d70
- (void)assetDataOfType:(long long)arg1 usingSim:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015bc0
- (void)logoDataOfType:(long long)arg1 desiredSize:(struct CGSize)arg2 usingSim:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015a90
- (void)logoDataOfType:(long long)arg1 desiredSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015970
- (void)logoFileURLOfType:(long long)arg1 desiredSize:(struct CGSize)arg2 completionHandler:(void (^)(NSURL *, NSString *, NSError *))arg3;	// IMP=0x00000000000154f0
- (void)wideLogoDataForDesiredSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015340
- (void)squareLogoDataForDesiredSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015230
@property(nonatomic, readonly) NSData *logoFingerprint;
@property(nonatomic, readonly) NSString *localizedResponseTime;
@property(nonatomic, readonly) NSString *localizedDescription;
@property(nonatomic, readonly) NSURL *genericCSSTemplateURL;
@property(nonatomic, readonly) NSURL *termsAndConditionsURL;
@property(nonatomic, readonly) NSString *address;
@property(nonatomic, readonly) NSString *emailAddress;
@property(nonatomic, readonly) NSString *messageNumber;
@property(nonatomic, readonly) NSURL *website;
@property(nonatomic, readonly) NSString *verifiedBy;
@property(nonatomic, readonly) _Bool isVerified;
@property(nonatomic, readonly) NSString *secondaryBrandColorHexString;
@property(nonatomic, readonly) NSString *primaryBrandColorHexString;
@property(nonatomic, readonly) NSString *primaryPhoneNumber;
@property(nonatomic, readonly) NSArray *categories;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) _Bool isRCSChatBot;
@property(nonatomic, readonly) NSString *brandURI;

@end
