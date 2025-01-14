//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class PRPosterContentCustomStyle, PRPosterContentDiscreteColorsStyle, PRPosterContentGradientStyle, PRPosterContentLUTStyle, PRPosterContentVibrantMaterialStyle, PRPosterContentVibrantMonochromeStyle;

@protocol PRPosterContentStyleRenderer <NSObject>

@optional
- (void)renderCustomStyle:(PRPosterContentCustomStyle *)arg1;
- (void)renderLUTStyle:(PRPosterContentLUTStyle *)arg1;
- (void)renderVibrantMonochromeStyle:(PRPosterContentVibrantMonochromeStyle *)arg1;
- (void)renderVibrantMaterialStyle:(PRPosterContentVibrantMaterialStyle *)arg1;
- (void)renderGradientStyle:(PRPosterContentGradientStyle *)arg1;
- (void)renderDiscreteColorStyle:(PRPosterContentDiscreteColorsStyle *)arg1;
@end

