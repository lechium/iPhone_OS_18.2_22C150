//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@interface UIImage (VUISBGraphics)
+ (id)vui_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5 encapsulation:(CDUnknownBlockType)arg6;	// IMP=0x000000000007b4e7
+ (id)vui_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5;	// IMP=0x000000000007b4cf
+ (unsigned long long)vui_bytesNeededForSize:(struct CGSize)arg1 scale:(double)arg2 withContextType:(int)arg3;	// IMP=0x000000000007b43e
+ (id)imageWithColor:(id)arg1;	// IMP=0x0000000000252cd0
+ (id)vui_videosUIImageNamed:(id)arg1;	// IMP=0x0000000000252c4b
+ (id)imageForPlaceholderURL:(id)arg1;	// IMP=0x00000000002612e0
- (id)vui_croppedImageOfSize:(struct CGSize)arg1;	// IMP=0x0010000000253253
- (id)vui_aspectFitImageOfSize:(struct CGSize)arg1;	// IMP=0x001000000025307f
- (id)vui_iconImageOfSize:(struct CGSize)arg1 radius:(double)arg2 stroke:(double)arg3;	// IMP=0x0010000000252e9c
- (id)vui_iconImageOfSize:(struct CGSize)arg1 radius:(double)arg2;	// IMP=0x0010000000252dbf
- (id)vui_iconImageOfSize:(struct CGSize)arg1;	// IMP=0x0010000000252d6b
- (id)vui_imageWithColor:(id)arg1;	// IMP=0x0010000000252d59
@end
