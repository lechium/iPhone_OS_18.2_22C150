//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQHImage : NSObject
{
}

+ (int)handleInlineWebView:(id)arg1 state:(id)arg2;	// IMP=0x008000000002737e
+ (int)handleFloatingWebView:(id)arg1 state:(id)arg2;	// IMP=0x00800000000272fe
+ (int)handleInlineMedia:(id)arg1 state:(id)arg2;	// IMP=0x0080000000027247
+ (int)handleFloatingMedia:(id)arg1 state:(id)arg2;	// IMP=0x0080000000027190
+ (int)handleInlineImageBinary:(id)arg1 geometry:(id)arg2 cropGeometry:(id)arg3 maskingShapePath:(id)arg4 alphaMaskBezier:(struct CGPath *)arg5 style:(id)arg6 state:(id)arg7;	// IMP=0x008000000002797e
+ (int)handleFloatingImageBinary:(id)arg1 geometry:(id)arg2 style:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(struct CGPath *)arg6 state:(id)arg7;	// IMP=0x00800000000277aa
+ (void)handleSimpleImageBinary:(id)arg1 geometry:(id)arg2 style:(id)arg3 state:(id)arg4;	// IMP=0x0080000000027612
+ (void)mapMaskedImage:(id)arg1 geometry:(id)arg2 cropGeometry:(id)arg3 maskingShapePath:(id)arg4 alphaMaskBezier:(struct CGPath *)arg5 graphicStyle:(id)arg6 isFloating:(_Bool)arg7 state:(id)arg8;	// IMP=0x0080000000027551
+ (void)mapCropGeometry:(id)arg1 bounds:(id)arg2 style:(id)arg3;	// IMP=0x00800000000273f8

@end
