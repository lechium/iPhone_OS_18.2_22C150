//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNRectangleTracker
{
    NSMutableDictionary *_cornerTrackersImpl;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_rectangleTrackingProcessingQueue;	// 32 = 0x20
}

+ (id)_trackingRectAroundPoint:(struct CGPoint)arg1 trackingRectSize:(struct CGSize)arg2;	// IMP=0x0060000000228a23
+ (id)trackedCorners;	// IMP=0x00600000002289f3
+ (Class)trackerObservationClass;	// IMP=0x00600000002289e2
+ (id)supportedComputeDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002289b9
- (void).cxx_destruct;	// IMP=0x0000000000227657
- (id)_convertCornerObservationsToRectangleObservation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000227101
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000226d3f
- (_Bool)isTracking;	// IMP=0x0000000000226c95
- (_Bool)reset:(id *)arg1;	// IMP=0x0000000000226a56
- (id)trackInFrame:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000226554
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000225f4f
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000225b9a

@end
