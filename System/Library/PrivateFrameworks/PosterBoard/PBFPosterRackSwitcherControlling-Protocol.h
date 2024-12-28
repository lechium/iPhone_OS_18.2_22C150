//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class PBFPosterExtensionDataStore;

@protocol PBFPosterRackSwitcherControlling <NSObject>
- (PBFPosterExtensionDataStore *)posterExtensionDataStore;
- (void)presentPosterGallery:(void (^)(UICollectionViewController *))arg1;
- (void)scrollToFirstPoster:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)reset:(void (^)(void))arg1;
@end
