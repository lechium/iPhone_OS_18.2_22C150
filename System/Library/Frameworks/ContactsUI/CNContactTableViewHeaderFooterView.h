//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSAttributedString, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactTableViewHeaderFooterView : UITableViewHeaderFooterView
{
    NSAttributedString *_attributedString;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002c6c71
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000002c6656

@end
