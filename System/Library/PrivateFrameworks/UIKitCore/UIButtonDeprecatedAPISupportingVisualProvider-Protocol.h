//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButtonVisualProvider-Protocol.h>

@class UIFont;

@protocol UIButtonDeprecatedAPISupportingVisualProvider <UIButtonVisualProvider>
- (void)setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)titleShadowOffset;
- (void)setLineBreakMode:(long long)arg1;
- (long long)lineBreakMode;
- (void)setFont:(UIFont *)arg1 isDefaultForIdiom:(_Bool)arg2;
- (UIFont *)font;
- (_Bool)fontIsDefaultForIdiom;
- (_Bool)deferToLazyTitleFont;
@end

