//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNAvatarView;

__attribute__((visibility("hidden")))
@interface CKSharedContactsCollectionViewCell
{
    CNAvatarView *_avatarView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x00600000005ec3e4
- (void).cxx_destruct;	// IMP=0x00000000005ec7d8
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void)layoutSubviews;	// IMP=0x00000000005ec5f2
- (void)configureWithContact:(id)arg1;	// IMP=0x00000000005ec3f1

@end
