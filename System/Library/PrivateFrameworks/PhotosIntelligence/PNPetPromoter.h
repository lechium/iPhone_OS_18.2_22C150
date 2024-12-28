//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, PHPhotoLibrary;
@protocol PNPersonPromoterDelegate;

@interface PNPetPromoter : NSObject
{
    MISSING_TYPE *photoLibrary;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *metrics;	// 24 = 0x18
}

+ (void)promoteUnverifiedPetsInPhotoLibrary:(id)arg1 withUpdateBlock:(CDUnknownBlockType)arg2;	// IMP=0x004000000022fb17
+ (id)statusWithPhotoLibrary:(id)arg1 delegate:(id)arg2;	// IMP=0x004000000022f9cb
+ (long long)kPNPetPromoterMaximumNumberOfPetsInPeopleHome;	// IMP=0x0040000000221001
+ (long long)kPNPetPromoterVerifiedPetMinimumNumberOfAssetsAlone;	// IMP=0x0040000000220fe1
+ (long long)kPNPetPromoterVerifiedPetMinimumNumberOfMoments;	// IMP=0x0040000000220fc1
+ (long long)kPNPetPromoterVerifiedPetMinimumNumberOfFaces;	// IMP=0x0040000000220fa1
- (void).cxx_destruct;	// IMP=0x000000000022fbeb
- (id)init;	// IMP=0x000000000022fbb8
- (void)incrementMetricForKey:(id)arg1 withValue:(unsigned long long)arg2;	// IMP=0x000000000022c59e
- (void)promoteUnverifiedPetsWithUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000228577
- (id)initWithPhotoLibrary:(id)arg1 andDelegate:(id)arg2;	// IMP=0x0000000000221254
@property(nonatomic, copy) NSDictionary *metrics;
@property(nonatomic, readonly) id <PNPersonPromoterDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary;

@end
