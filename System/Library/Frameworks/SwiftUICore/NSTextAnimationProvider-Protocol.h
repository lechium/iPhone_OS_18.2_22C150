//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUICore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NSStringDrawingContext;
@protocol NSTextCustomRendering, _NSTextAnimation;

@protocol NSTextAnimationProvider <NSObject>

@optional
+ (struct CGRect)drawStaticString:(id)arg1 withAttributes:(NSDictionary *)arg2 options:(unsigned long long)arg3 inRect:(struct CGRect)arg4 withPadding:(double)arg5 forceClipping:(_Bool)arg6 cgContext:(struct CGContext *)arg7 stringDrawingContext:(NSStringDrawingContext *)arg8;
+ (NSArray *)animationNamesForDomain:(NSString *)arg1;
+ (id <_NSTextAnimation>)animationWithName:(NSString *)arg1 localeIdentifier:(NSString *)arg2;
+ (id <_NSTextAnimation>)animationWithName:(NSString *)arg1;
+ (id <NSTextCustomRendering>)animationRenderer;
@end
