//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class SLHighlight;
@protocol PXContentSyndicationSocialLayerHighlightProvider, PXDisplayAsset;

@protocol PXContentSyndicationSocialLayerHighlightProviderChangeObserver <NSObject>
- (void)socialLayerHighlightProvider:(id <PXContentSyndicationSocialLayerHighlightProvider>)arg1 didChangeSocialLayerHighlight:(SLHighlight *)arg2 forAsset:(id <PXDisplayAsset>)arg3;
@end

