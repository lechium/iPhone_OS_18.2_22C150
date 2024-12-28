//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNAvatarImageRenderer, CNVisualIdentity, NSData, NSString, UIColor;
@protocol CNAvatarImageRenderingScope;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerMonogramProviderItem
{
    _Bool _isContactImage;	// 8 = 0x8
    _Bool _hasUnknownColor;	// 9 = 0x9
    _Bool _isVariantOptionItem;	// 10 = 0xa
    NSString *_monogramText;	// 16 = 0x10
    CNVisualIdentity *_visualIdentity;	// 24 = 0x18
    CNAvatarImageRenderer *_avatarRenderer;	// 32 = 0x20
    id <CNAvatarImageRenderingScope> _renderingScope;	// 40 = 0x28
    NSData *_monogramData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000032c187
@property(nonatomic) _Bool isVariantOptionItem; // @synthesize isVariantOptionItem=_isVariantOptionItem;
@property(retain, nonatomic) NSData *monogramData; // @synthesize monogramData=_monogramData;
@property(nonatomic) _Bool hasUnknownColor; // @synthesize hasUnknownColor=_hasUnknownColor;
@property(nonatomic) _Bool isContactImage; // @synthesize isContactImage=_isContactImage;
@property(retain, nonatomic) id <CNAvatarImageRenderingScope> renderingScope; // @synthesize renderingScope=_renderingScope;
@property(retain, nonatomic) CNAvatarImageRenderer *avatarRenderer; // @synthesize avatarRenderer=_avatarRenderer;
@property(retain, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
@property(retain, nonatomic) NSString *monogramText; // @synthesize monogramText=_monogramText;
- (unsigned long long)hash;	// IMP=0x000000000032bff0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032be56
- (id)updatedProviderItemWithText:(id)arg1;	// IMP=0x000000000032bd87
- (id)contactImageForMetadataStore;	// IMP=0x000000000032bbcb
- (id)createColorVariantItemsExcludingSelf;	// IMP=0x000000000032bb3b
- (id)createColorVariantItems;	// IMP=0x000000000032ba77
- (id)createVariantsItemsWithVariantsManager:(id)arg1;	// IMP=0x000000000032b977
- (id)monogramVariantItemForColor:(id)arg1;	// IMP=0x000000000032b73e
- (void)updateVisualIdentity:(id)arg1;	// IMP=0x000000000032b5ca
- (void)updateWithMonogramData:(id)arg1;	// IMP=0x000000000032b564
- (void)renderMonogramData;	// IMP=0x000000000032b491
- (id)generateMonogramData;	// IMP=0x000000000032b44a
- (id)generateMonogramImage;	// IMP=0x000000000032b222
- (id)generateThumbnailImageDataIfNeeded;	// IMP=0x000000000032b1ba
- (id)thumbnailImageData;	// IMP=0x000000000032b117
- (id)imageData;	// IMP=0x000000000032b074
- (id)variantIdentifier;	// IMP=0x000000000032affa
- (id)localizedVariantsTitle;	// IMP=0x000000000032af9e
- (_Bool)isGrayMonogramItem;	// IMP=0x000000000032af3b
- (_Bool)allowsMoveAndScale;	// IMP=0x000000000032af33
- (_Bool)allowsEditing;	// IMP=0x000000000032aed9
- (_Bool)shouldShowCaption;	// IMP=0x000000000032aed1
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) NSString *itemText;
- (unsigned long long)imageType;	// IMP=0x000000000032adc4
- (_Bool)allowsVariants;	// IMP=0x000000000032ad46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032abd4
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(struct CGRect)arg4 renderingScope:(id)arg5 avatarRenderer:(id)arg6 isVariantOptionItem:(_Bool)arg7;	// IMP=0x000000000032aad4

@end
