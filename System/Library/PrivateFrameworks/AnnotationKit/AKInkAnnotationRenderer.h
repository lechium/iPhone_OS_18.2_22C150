//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AKAnnotationRenderer.h"

@interface AKInkAnnotationRenderer : AKAnnotationRenderer
{
}

+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;	// IMP=0x008000000007c3cd
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;	// IMP=0x008000000007c3c5
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;	// IMP=0x008000000007b8f6
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;	// IMP=0x008000000007b8e0
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;	// IMP=0x008000000007b86e

@end

