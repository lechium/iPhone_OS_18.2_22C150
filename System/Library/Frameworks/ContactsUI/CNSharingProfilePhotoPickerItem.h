//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNSharingProfileAvatarItem, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CNSharingProfilePhotoPickerItem : NSObject
{
    UIImage *_cachedPreviewImage;	// 8 = 0x8
    CNSharingProfileAvatarItem *_avatarItem;	// 16 = 0x10
    NSString *_symbolImageName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002c4e18
@property(retain, nonatomic) NSString *symbolImageName; // @synthesize symbolImageName=_symbolImageName;
@property(retain, nonatomic) CNSharingProfileAvatarItem *avatarItem; // @synthesize avatarItem=_avatarItem;
@property(retain, nonatomic) UIImage *cachedPreviewImage; // @synthesize cachedPreviewImage=_cachedPreviewImage;
- (id)compositeImageWithSize:(struct CGSize)arg1;	// IMP=0x00000000002c4d5f
- (id)originalImageWithSize:(struct CGSize)arg1;	// IMP=0x00000000002c4cc3

@end

