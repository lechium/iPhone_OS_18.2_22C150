//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIStackView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface OBTextSectionView : UIStackView
{
    UILabel *_headerLabel;	// 8 = 0x8
    UILabel *_contentLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001edc7
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (id)_contentFont;	// IMP=0x000000000001ed06
- (id)_headerFont;	// IMP=0x000000000001ec69
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001eb82
- (void)addAccessoryButton:(id)arg1;	// IMP=0x000000000001eb70
- (id)initWithHeader:(id)arg1 content:(id)arg2;	// IMP=0x000000000001e6b5

@end

