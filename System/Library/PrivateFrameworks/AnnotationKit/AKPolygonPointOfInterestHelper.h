//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AKPolygonPointOfInterestHelper
{
}

+ (struct CGPoint)_pointForPointsControlOfPolygonWithNumberOfPoints:(unsigned long long)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;	// IMP=0x00800000000b07ca
+ (double)_degreesForPointsControlGivenPolygonWithNumberOfPoints:(unsigned long long)arg1;	// IMP=0x00800000000b077c
+ (double)_degreesBetweenPointsForPointsControl;	// IMP=0x00800000000b0740
+ (unsigned long long)numberOfPolygonPointsForControlPoint:(struct CGPoint)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;	// IMP=0x00800000000b0442
+ (double)pointsControlPointDistanceFactor;	// IMP=0x00800000000b0434
+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;	// IMP=0x00800000000b02b6
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;	// IMP=0x00800000000b0279
+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;	// IMP=0x00800000000aff24
+ (unsigned long long)minPolygonPoints;	// IMP=0x00800000000aff19
+ (unsigned long long)maxPolygonPoints;	// IMP=0x00800000000aff0e

@end
