//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewListCell.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface ReaderFontOptionCell : UICollectionViewListCell
{
    _Bool _enabled;	// 8 = 0x8
    UIView *_accessoryView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000201b55
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_updateAccessories;	// IMP=0x00000000002019f0
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000002019af
- (id)_listContentConfiguration;	// IMP=0x00000000002018f8
- (id)attributedText;	// IMP=0x00000000002018a8
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000000201809
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x0000000000201729

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

