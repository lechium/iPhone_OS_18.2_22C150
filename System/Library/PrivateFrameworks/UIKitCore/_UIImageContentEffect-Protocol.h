//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIImageSymbolConfiguration, UITraitCollection, _UIImageContentRendition, _UIImageContentRenditionResult;
@protocol _UIImageContentLayoutSource;

@protocol _UIImageContentEffect <NSObject>
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (long long)_effectiveRenderingModeForSource:(id <_UIImageContentLayoutSource>)arg1 symbolConfiguration:(UIImageSymbolConfiguration *)arg2;
- (UIImageSymbolConfiguration *)_symbolConfigurationForSource:(id <_UIImageContentLayoutSource>)arg1;
- (_UIImageContentRendition *)_renditionForSource:(id <_UIImageContentLayoutSource>)arg1 size:(struct CGSize)arg2 symbolConfiguration:(UIImageSymbolConfiguration *)arg3 withRenditionResult:(_UIImageContentRenditionResult *)arg4;
@end
