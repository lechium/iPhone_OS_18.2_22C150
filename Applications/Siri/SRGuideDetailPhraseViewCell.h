//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class NSString, SiriUITextContainerView;

@interface SRGuideDetailPhraseViewCell : SiriUIContentCollectionViewCell
{
    SiriUITextContainerView *_textContainerView;	// 8 = 0x8
}

+ (id)_font;	// IMP=0x0040000000080240
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;	// IMP=0x001000000007fe72
- (void).cxx_destruct;	// IMP=0x0020000000080263
@property(copy, nonatomic) NSString *text;
- (void)prepareForReuse;	// IMP=0x00100000000801bb
- (void)layoutSubviews;	// IMP=0x0010000000080111
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000007ff56

@end

