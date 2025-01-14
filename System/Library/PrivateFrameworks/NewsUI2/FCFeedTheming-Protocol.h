//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI2/NFCopying-Protocol.h>
#import <NewsUI2/NSObject-Protocol.h>

@class FCAssetHandle, FCColor, FCColorGradient, FCContentColorMap, FCHeadlineTemplate, FCTagBanner, FCTextInfo, NSArray, NSString;

@protocol FCFeedTheming <NSObject, NFCopying>
@property(readonly, nonatomic) unsigned long long navigationChromeBackgroundImageContentModeLarge;
@property(readonly, nonatomic) unsigned long long navigationChromeBackgroundImageContentModeCompact;
@property(readonly, nonatomic) unsigned long long navigationChromeBackgroundImageContentMode;
@property(readonly, nonatomic) _Bool allowCustomBottomStyle;
@property(readonly, nonatomic) FCHeadlineTemplate *defaultHeadlineTemplate;
@property(readonly, nonatomic) NSArray *loadableFonts;
@property(readonly, nonatomic) struct FCEdgeInsets nameImageMaskInsets;
@property(readonly, nonatomic) struct CGSize nameImageMaskSize;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskAssetHandle;
@property(readonly, nonatomic) struct FCEdgeInsets nameImageForDarkBackgroundInsets;
@property(readonly, nonatomic) struct CGSize nameImageForDarkBackgroundSize;
@property(readonly, nonatomic) FCAssetHandle *nameImageForDarkBackgroundAssetHandle;
@property(readonly, nonatomic) struct FCEdgeInsets nameImageInsets;
@property(readonly, nonatomic) struct CGSize nameImageSize;
@property(readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *logoImageAssetHandle;
@property(readonly, nonatomic) NSString *feedMastheadType;
@property(readonly, nonatomic) FCColorGradient *darkStyleAdBackgroundGradient;
@property(readonly, nonatomic) FCColorGradient *adBackgroundGradient;
@property(readonly, nonatomic) FCColor *darkStyleAdBackgroundColor;
@property(readonly, nonatomic) FCColor *adBackgroundColor;
@property(readonly, nonatomic) FCColor *darkStyleFeedControlColor;
@property(readonly, nonatomic) FCColor *feedControlColor;
@property(readonly, nonatomic) FCColorGradient *darkStyleFeedBackgroundGradient;
@property(readonly, nonatomic) FCColorGradient *feedBackgroundGradient;
@property(readonly, nonatomic) FCColor *darkStyleFeedBackgroundColor;
@property(readonly, nonatomic) FCColor *feedBackgroundColor;
@property(readonly, nonatomic) FCColorGradient *darkStyleNavigationChromeBackgroundGradient;
@property(readonly, nonatomic) FCColorGradient *navigationChromeBackgroundGradient;
@property(readonly, nonatomic) FCAssetHandle *darkStyleNavigationChromeBackgroundImageLarge;
@property(readonly, nonatomic) FCAssetHandle *navigationChromeBackgroundImageLarge;
@property(readonly, nonatomic) FCAssetHandle *darkStyleNavigationChromeBackgroundImageCompact;
@property(readonly, nonatomic) FCAssetHandle *navigationChromeBackgroundImageCompact;
@property(readonly, nonatomic) FCAssetHandle *darkStyleNavigationChromeBackgroundImage;
@property(readonly, nonatomic) FCAssetHandle *navigationChromeBackgroundImage;
@property(readonly, nonatomic) FCContentColorMap *contentColorMap;
@property(readonly, nonatomic) FCColor *darkStyleNavigationChromeSeparatorColor;
@property(readonly, nonatomic) FCColor *navigationChromeSeparatorColor;
@property(readonly, nonatomic) FCColor *darkStyleNavigationChromeBackgroundColor;
@property(readonly, nonatomic) FCColor *navigationChromeBackgroundColor;
@property(readonly, nonatomic) FCColor *darkStyleForegroundColor;
@property(readonly, nonatomic) FCColor *foregroundColor;
@property(readonly, nonatomic) FCColor *darkStyleBackgroundColor;
@property(readonly, nonatomic) FCColor *backgroundColor;
@property(readonly, copy, nonatomic) FCTextInfo *headlineBylineTextInfo;
@property(readonly, copy, nonatomic) FCTextInfo *headlineExcerptTextInfo;
@property(readonly, copy, nonatomic) FCTextInfo *headlineTitleTextInfo;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) double bannerImageBaselineOffsetPercentage;
@property(readonly, nonatomic) double bannerImageScale;
@property(readonly, nonatomic) FCTagBanner *compactBannerImage;
@property(readonly, nonatomic) FCTagBanner *bannerImageForMask;
@property(readonly, nonatomic) FCTagBanner *bannerImageForThemeBackground;
@property(readonly, nonatomic) FCTagBanner *bannerImageForWhiteBackground;
@property(readonly, nonatomic) FCTagBanner *defaultBannerImage;
@property(readonly, nonatomic) _Bool isDark;
@property(readonly, nonatomic) _Bool isWhite;
@property(readonly, nonatomic) long long feedType;
@end

