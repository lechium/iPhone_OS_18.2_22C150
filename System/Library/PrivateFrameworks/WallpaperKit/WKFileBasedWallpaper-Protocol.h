//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WallpaperKit/WKWallpaper-Protocol.h>

@class NSURL;

@protocol WKFileBasedWallpaper <WKWallpaper>
@property(readonly, nonatomic) double stillTimeInVideo;
@property(readonly, copy, nonatomic) NSURL *videoAssetURL;
@property(readonly, copy, nonatomic) NSURL *fullsizeImageURL;
@end
