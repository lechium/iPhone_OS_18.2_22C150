//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewListCell.h>

@class SFTabIconRegistration;

__attribute__((visibility("hidden")))
@interface LibraryCollectionViewCell : UICollectionViewListCell
{
    SFTabIconRegistration *_tabIconRegistration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000df9bc
@property(retain, nonatomic) SFTabIconRegistration *tabIconRegistration; // @synthesize tabIconRegistration=_tabIconRegistration;
- (void)updateConfigurationForTabIconRegistration:(id)arg1;	// IMP=0x00000000000df918
- (void)prepareForReuse;	// IMP=0x00000000000df71b
- (void)_applyTabIcon:(id)arg1 toConfiguration:(id)arg2;	// IMP=0x00000000000df67e
- (void)_applyTabIcon:(id)arg1;	// IMP=0x00000000000df5e7
- (void)_updateAccessories:(id)arg1;	// IMP=0x00000000000df3ea
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x00000000000df379
- (void)setAccessories:(id)arg1;	// IMP=0x00000000000df312

@end
