//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PNVisionHelper : NSObject
{
}

+ (id)faceprintFromFaceprintArchive:(id)arg1 error:(id *)arg2;	// IMP=0x00800000004da434
- (id)representativenessFromFaceObservations:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004da974
- (id)faceObservationFromFace:(id)arg1;	// IMP=0x00000000004da6cf
- (float)distanceBetweenFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id *)arg3;	// IMP=0x00000000004da490

@end
