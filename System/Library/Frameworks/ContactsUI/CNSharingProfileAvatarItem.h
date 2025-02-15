//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CNSharingProfileAvatarItem : NSObject
{
    _Bool _wasSetFromFullPhotoPicker;	// 8 = 0x8
    CDUnknownBlockType _imageProvider;	// 16 = 0x10
    CDUnknownBlockType _originalImageProvider;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    NSString *_variantIdentifier;	// 40 = 0x28
    NSData *_memojiMetadata;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001d98f2
@property(nonatomic) NSData *memojiMetadata; // @synthesize memojiMetadata=_memojiMetadata;
@property(nonatomic) _Bool wasSetFromFullPhotoPicker; // @synthesize wasSetFromFullPhotoPicker=_wasSetFromFullPhotoPicker;
@property(copy, nonatomic) NSString *variantIdentifier; // @synthesize variantIdentifier=_variantIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) CDUnknownBlockType originalImageProvider; // @synthesize originalImageProvider=_originalImageProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType imageProvider; // @synthesize imageProvider=_imageProvider;
- (id)initWithImageProvider:(CDUnknownBlockType)arg1 originalImageProvider:(CDUnknownBlockType)arg2 type:(long long)arg3;	// IMP=0x00000000001d97c2
- (id)initWithImageProvider:(CDUnknownBlockType)arg1 type:(long long)arg2;	// IMP=0x00000000001d97aa

@end

