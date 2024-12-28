//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewListCell.h>

@class CNContact, CNContactFormatter, UIImage;

__attribute__((visibility("hidden")))
@interface CNLimitedAccessContactListCollectionViewCell : UICollectionViewListCell
{
    _Bool _isShowingSearchResult;	// 8 = 0x8
    CNContact *_contact;	// 16 = 0x10
    UIImage *_avatarImage;	// 24 = 0x18
    CNContactFormatter *_contactFormatter;	// 32 = 0x20
    unsigned long long _caption;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003135a4
@property(nonatomic) _Bool isShowingSearchResult; // @synthesize isShowingSearchResult=_isShowingSearchResult;
@property(nonatomic) unsigned long long caption; // @synthesize caption=_caption;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)applyContactListStyleWithAvatarImage;	// IMP=0x0000000000312e5c
- (void)layoutSubviews;	// IMP=0x0000000000312c5b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000312bfc

@end
