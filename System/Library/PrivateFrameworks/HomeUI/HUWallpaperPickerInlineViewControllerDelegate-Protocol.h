//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFWallpaper, HUWallpaperPickerInlineViewController, UIImage;

@protocol HUWallpaperPickerInlineViewControllerDelegate <NSObject>
- (void)wallpaperPickerRequestOpenWallpaperEditor:(HUWallpaperPickerInlineViewController *)arg1;
- (void)wallpaperPicker:(HUWallpaperPickerInlineViewController *)arg1 didSelectWallpaper:(HFWallpaper *)arg2 withImage:(UIImage *)arg3;
- (void)wallpaperPicker:(HUWallpaperPickerInlineViewController *)arg1 didReceiveDroppedImage:(UIImage *)arg2;
@end

