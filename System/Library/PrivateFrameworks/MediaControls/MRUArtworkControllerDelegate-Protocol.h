//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MPArtworkCatalog, MRUArtworkController, UIImage;

@protocol MRUArtworkControllerDelegate <NSObject>
- (void)artworkLoadingDidTimeoutInController:(MRUArtworkController *)arg1;
- (void)controller:(MRUArtworkController *)arg1 didLoadArtworkImage:(UIImage *)arg2;

@optional
- (void)controller:(MRUArtworkController *)arg1 didStartLoadingImageForCatalog:(MPArtworkCatalog *)arg2;
@end
