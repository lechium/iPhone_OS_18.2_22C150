//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI9UIFactory : NSObject
{
    MISSING_TYPE *purgeCacheOnLoad;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000084af9f
- (id)init;	// IMP=0x000000000084af5b
- (id)initializeLivePostPlayControllerWithPlayer:(id)arg1 playerViewController:(id)arg2 presentationView:(id)arg3;	// IMP=0x000000000084cb18
- (id)rootSplitViewController;	// IMP=0x000000000084ca8e
- (void)scrollViewControllerToTop:(id)arg1 animated:(_Bool)arg2 needsFocusUpdate:(_Bool)arg3;	// IMP=0x000000000084c9f4
- (id)performanceDebuggerViewController;	// IMP=0x000000000084c941
- (id)timedMetadataDebuggerViewController;	// IMP=0x000000000084c8f6
- (id)createMultiPlayerViewControllerWithPlayerViewControllers:(id)arg1 showingDetails:(_Bool)arg2;	// IMP=0x000000000084c875
- (_Bool)isDocumentViewController:(id)arg1 equalToViewController:(id)arg2;	// IMP=0x000000000084c74f
- (id)catchUpToLiveViewControllerWithIndex:(unsigned long long)arg1 mediaInfo:(id)arg2 segments:(id)arg3 metadataViewModels:(id)arg4 nextToken:(id)arg5;	// IMP=0x000000000084c560
- (id)catchUpToLiveViewControllerWithIndex:(unsigned long long)arg1 playable:(id)arg2 segments:(id)arg3 metadataViewModels:(id)arg4 nextToken:(id)arg5;	// IMP=0x000000000084c498
- (id)clipsViewControllerWithIndex:(unsigned long long)arg1 collectionData:(id)arg2 maxMovieContentRating:(id)arg3 maxTVContentRating:(id)arg4;	// IMP=0x000000000084c1fc
- (id)clipsViewControllerWithIndex:(unsigned long long)arg1 trailerEndpoint:(id)arg2 maxMovieContentRating:(id)arg3 maxTVContentRating:(id)arg4;	// IMP=0x000000000084c07b
- (id)playbackContainerViewController;	// IMP=0x000000000084bf9a
- (void)recordImpressionsForViewController:(id)arg1;	// IMP=0x000000000084bf2e
- (id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 documentOptions:(id)arg3;	// IMP=0x000000000084be10
- (id)_viewControllerForIKElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x000000000084cfa7
- (id)_imageProxyForIKElement:(id)arg1 withLayout:(id)arg2;	// IMP=0x000000000084cec9
- (id)_viewForIKElement:(id)arg1 existingView:(id)arg2;	// IMP=0x000000000084ce4b
- (id)imageForResource:(id)arg1;	// IMP=0x000000000084cdf3
- (id)URLForResource:(id)arg1;	// IMP=0x000000000084cc65

@end

