//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface MRDBundleMediaRecommendationEligibility : NSObject
{
    MISSING_TYPE *bundleIdentifier;	// 8 = 0x8
    MISSING_TYPE *isEligibleForOneTapSuggestion;	// 24 = 0x18
    MISSING_TYPE *isEligibleForAutoRoute;	// 25 = 0x19
    MISSING_TYPE *isEligibleForCallToAction;	// 26 = 0x1a
    MISSING_TYPE *mediaType;	// 32 = 0x20
    MISSING_TYPE *source;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0040000000234010
- (id)init;	// IMP=0x0010000000233fc0
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) _Bool isVideoApp;
@property(nonatomic, readonly) _Bool isEligible;
@property(nonatomic, readonly) _Bool isEligibleForCallToAction; // @synthesize isEligibleForCallToAction;
@property(nonatomic, readonly) _Bool isEligibleForAutoRoute; // @synthesize isEligibleForAutoRoute;
@property(nonatomic, readonly) _Bool isEligibleForOneTapSuggestion; // @synthesize isEligibleForOneTapSuggestion;
@property(nonatomic, readonly) NSString *bundleIdentifier;

@end
