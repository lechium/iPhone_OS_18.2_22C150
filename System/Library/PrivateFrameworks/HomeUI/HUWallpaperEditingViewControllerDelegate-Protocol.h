//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFWallpaper, HUWallpaperEditingViewController, UIImage;

@protocol HUWallpaperEditingViewControllerDelegate <NSObject>
- (void)wallpaperEditingDidCancel:(HUWallpaperEditingViewController *)arg1;
- (void)wallpaperEditing:(HUWallpaperEditingViewController *)arg1 didFinishWithWallpaper:(HFWallpaper *)arg2 image:(UIImage *)arg3;
@end

