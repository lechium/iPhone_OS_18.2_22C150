//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, _UIBarCustomizationSession, _UIBarCustomizer;

@protocol _UIBarCustomizerDelegate <NSObject>
- (void)barCustomizer:(_UIBarCustomizer *)arg1 willEndSession:(_UIBarCustomizationSession *)arg2 didReset:(_Bool)arg3;
- (struct CGRect)barCustomizer:(_UIBarCustomizer *)arg1 overflowControlBoundsForSession:(_UIBarCustomizationSession *)arg2;
- (struct CGRect)barCustomizer:(_UIBarCustomizer *)arg1 customizationAreaBoundsForSession:(_UIBarCustomizationSession *)arg2;
- (UIView *)barCustomizer:(_UIBarCustomizer *)arg1 parentTraitEnvironmentForSession:(_UIBarCustomizationSession *)arg2;
- (UIView *)barCustomizer:(_UIBarCustomizer *)arg1 containerViewForSession:(_UIBarCustomizationSession *)arg2;
@end

