//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMShapeRenderer : NSObject
{
}

+ (void)_setupDrawingStyleInDrawingContext:(id)arg1 dash:(id)arg2 state:(id)arg3;	// IMP=0x008000000010d4bf
+ (void)_setupDrawingStyleInDrawingContext:(id)arg1 stroke:(id)arg2 state:(id)arg3;	// IMP=0x0080000000106b38
+ (void)_setupDrawingStyleInDrawingContext:(id)arg1 fill:(id)arg2 stroke:(id)arg3 state:(id)arg4;	// IMP=0x0080000000106a40
+ (struct CGImage *)copyImageFromOADImageFill:(id)arg1 withContext:(id)arg2;	// IMP=0x008000000046152f
+ (struct CGImage *)copyImageFromOADImageFill:(id)arg1 withMapper:(id)arg2;	// IMP=0x00800000004612fc
+ (struct CGColor *)_copyCGColorFromOADFill:(id)arg1 andState:(id)arg2;	// IMP=0x0080000000107014
+ (struct CGColor *)_copyCGColorFromOADColor:(id)arg1 andState:(id)arg2;	// IMP=0x008000000010d2f8
+ (void)_renderCGPath:(struct CGPath *)arg1 stroke:(id)arg2 fill:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6;	// IMP=0x00800000001068cb
+ (void)renderCanonicalShape:(int)arg1 fill:(id)arg2 stroke:(id)arg3 adjustValues:(id)arg4 orientedBounds:(id)arg5 state:(id)arg6 drawingContext:(id)arg7;	// IMP=0x0080000000105966
+ (void)renderLine:(int)arg1 stroke:(id)arg2 adjustValues:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6;	// IMP=0x0080000000146168
+ (void)renderDiagramPath:(id)arg1 fill:(id)arg2 stroke:(id)arg3 state:(id)arg4 drawingContext:(id)arg5;	// IMP=0x008000000023c67a
+ (void)renderFreeForm:(id)arg1 fill:(id)arg2 stroke:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6;	// IMP=0x0080000000156189

@end
