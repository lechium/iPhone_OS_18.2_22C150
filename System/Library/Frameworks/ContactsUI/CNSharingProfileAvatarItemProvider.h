//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAvatarImageRenderer, CNContact, CNPhotoPickerColorVariant, CNPhotoPickerVariantsManager, CNSharingProfileAvatarItem, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileLogger, NSArray, NSData, PRMonogramColor;
@protocol AVTAvatarRecord;

__attribute__((visibility("hidden")))
@interface CNSharingProfileAvatarItemProvider : NSObject
{
    _Bool _shouldIncludeSilhouette;	// 8 = 0x8
    _Bool _shouldIncludeAnimoji;	// 9 = 0x9
    _Bool _shouldIncludePhoto;	// 10 = 0xa
    _Bool _shouldIncludeMonogram;	// 11 = 0xb
    _Bool _contactIsFromFullPhotoPicker;	// 12 = 0xc
    _Bool _useRTL;	// 13 = 0xd
    CNSharingProfileAvatarItem *_silhouetteItem;	// 16 = 0x10
    CNSharingProfileAvatarItem *_animojiItem;	// 24 = 0x18
    CNSharingProfileAvatarItem *_photoItem;	// 32 = 0x20
    CNSharingProfileAvatarItem *_monogramItem;	// 40 = 0x28
    CNSharingProfileAvatarItemProviderConfiguration *_configuration;	// 48 = 0x30
    CNSharingProfileLogger *_logger;	// 56 = 0x38
    CNContact *_contact;	// 64 = 0x40
    id <AVTAvatarRecord> _avatarRecord;	// 72 = 0x48
    CNAvatarImageRenderer *_renderer;	// 80 = 0x50
    CNPhotoPickerVariantsManager *_variantsManager;	// 88 = 0x58
    NSArray *_items;	// 96 = 0x60
    CNSharingProfileAvatarItem *_previousAnimojiItem;	// 104 = 0x68
    CNSharingProfileAvatarItem *_previousPhotoItem;	// 112 = 0x70
    CNPhotoPickerColorVariant *_animojiColor;	// 120 = 0x78
}

+ (id)compositeImageForImage:(id)arg1 backgroundImage:(id)arg2;	// IMP=0x006000000026a8e9
+ (id)monogramImageItemWithContact:(id)arg1 monogramColor:(id)arg2 renderer:(id)arg3 RTL:(_Bool)arg4;	// IMP=0x006000000026a714
+ (id)contactImageItemWithContact:(id)arg1 renderer:(id)arg2 logger:(id)arg3 type:(long long)arg4;	// IMP=0x006000000026a640
+ (id)silhouetteImageItemWithRenderer:(id)arg1;	// IMP=0x006000000026a591
+ (id)descriptorForRequiredKeys;	// IMP=0x006000000026a561
- (void).cxx_destruct;	// IMP=0x000000000026a4b5
@property(retain, nonatomic) CNPhotoPickerColorVariant *animojiColor; // @synthesize animojiColor=_animojiColor;
@property(nonatomic) _Bool useRTL; // @synthesize useRTL=_useRTL;
@property(retain, nonatomic) CNSharingProfileAvatarItem *previousPhotoItem; // @synthesize previousPhotoItem=_previousPhotoItem;
@property(retain, nonatomic) CNSharingProfileAvatarItem *previousAnimojiItem; // @synthesize previousAnimojiItem=_previousAnimojiItem;
@property(nonatomic) _Bool contactIsFromFullPhotoPicker; // @synthesize contactIsFromFullPhotoPicker=_contactIsFromFullPhotoPicker;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(retain, nonatomic) CNAvatarImageRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CNSharingProfileLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) CNSharingProfileAvatarItem *monogramItem; // @synthesize monogramItem=_monogramItem;
@property(retain, nonatomic) CNSharingProfileAvatarItem *photoItem; // @synthesize photoItem=_photoItem;
@property(retain, nonatomic) CNSharingProfileAvatarItem *animojiItem; // @synthesize animojiItem=_animojiItem;
@property(retain, nonatomic) CNSharingProfileAvatarItem *silhouetteItem; // @synthesize silhouetteItem=_silhouetteItem;
@property(nonatomic) _Bool shouldIncludeMonogram; // @synthesize shouldIncludeMonogram=_shouldIncludeMonogram;
@property(nonatomic) _Bool shouldIncludePhoto; // @synthesize shouldIncludePhoto=_shouldIncludePhoto;
@property(nonatomic) _Bool shouldIncludeAnimoji; // @synthesize shouldIncludeAnimoji=_shouldIncludeAnimoji;
@property(nonatomic) _Bool shouldIncludeSilhouette; // @synthesize shouldIncludeSilhouette=_shouldIncludeSilhouette;
- (void)clearCachedItems;	// IMP=0x000000000026a2bf
@property(retain, nonatomic) NSData *memojiMetadata;
- (id)animojColor;	// IMP=0x000000000026a127
@property(retain, nonatomic) PRMonogramColor *monogramColor;
- (void)updateWithContact:(id)arg1 fromFullPhotoPicker:(_Bool)arg2;	// IMP=0x0000000000269fe6
- (void)buildItems;	// IMP=0x0000000000269b34
- (_Bool)contactHasImageOfPhotoType:(id)arg1;	// IMP=0x0000000000269abf
@property(readonly, nonatomic) NSArray *avatarItems;
- (void)pickRandomColors;	// IMP=0x00000000002698fc
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3;	// IMP=0x0000000000269792

@end

