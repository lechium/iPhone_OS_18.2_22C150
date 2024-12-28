//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary, PHPhotoLibraryFeatureAvailabilityReporter;

__attribute__((visibility("hidden")))
@interface PXGenerativeStoryFeatureEligibilityDataSource : NSObject
{
}

+ (id)fullDescriptionWithFeatureEligibilityState:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x0080000000283ff0
+ (void)renderImageWithFeatureAvailability:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0080000000283f60
+ (void)generateFeatureEligibilityStateUsingProcessingAvailabilityReporter:(PHPhotoLibraryFeatureAvailabilityReporter *)arg1 photoLibrary:(PHPhotoLibrary *)arg2 completionHandler:(void (^)(PXGenerativeStoryFeatureEligibilityState *, NSError *))arg3;	// IMP=0x0080000000283760
- (void).cxx_destruct;	// IMP=0x00000000002840d0
- (id)init;	// IMP=0x0000000000284050

@end
