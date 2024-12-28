//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewListCell.h>

@class NSString, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface SFFaviconWebsiteCollectionCell : UICollectionViewListCell
{
    NSURL *_siteURL;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    id _faviconRequestToken;	// 24 = 0x18
    UIImage *_favicon;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004ac48
- (void)_requestFavicon;	// IMP=0x000000000004a987
- (void)_updateContentConfiguration;	// IMP=0x000000000004a6d5
- (void)setURL:(id)arg1 withTitle:(id)arg2;	// IMP=0x000000000004a5f3

@end
